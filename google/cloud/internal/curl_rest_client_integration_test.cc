// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/curl_options.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/log.h"
#include "google/cloud/testing_util/chrono_output.h"
#include "google/cloud/testing_util/scoped_log.h"
#include "google/cloud/testing_util/status_matchers.h"
#include "absl/strings/match.h"
#include "absl/strings/str_split.h"
#include <gmock/gmock.h>
#include <nlohmann/json.hpp>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::testing::_;
using ::testing::AllOf;
using ::testing::Contains;
using ::testing::Eq;
using ::testing::HasSubstr;
using ::testing::Not;
using ::testing::Pair;
using ::testing::ResultOf;
using ::testing::StartsWith;

std::map<std::string, std::string> ExtractHeaders(
    nlohmann::json const& parsed_response) {
  auto sent_headers = parsed_response.find("headers");
  if (sent_headers == parsed_response.end()) return {};
  std::map<std::string, std::string> result;
  for (auto const& kv : sent_headers->items()) {
    if (!kv.value().is_string()) return {};
    result[kv.key()] = kv.value().get<std::string>();
  }
  return result;
}

class RestClientIntegrationTest : public ::testing::Test {
 protected:
  void SetUp() override {
    auto httpbin_endpoint = google::cloud::internal::GetEnv("HTTPBIN_ENDPOINT");
    if (!httpbin_endpoint) GTEST_SKIP();
    url_ = *httpbin_endpoint;

    json_payload_ = R"""({
    "type": "service_account",
    "project_id": "foo-project",
    "private_key_id": "a1a111aa1111a11a11a11aa111a111a1a1111111",
    "private_key": "-----BEGIN PRIVATE KEY-----\nMIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQCltiF2oP3KJJ+S\ntTc1McylY+TuAi3AdohX7mmqIjd8a3eBYDHs7FlnUrFC4CRijCr0rUqYfg2pmk4a\n6TaKbQRAhWDJ7XD931g7EBvCtd8+JQBNWVKnP9ByJUaO0hWVniM50KTsWtyX3up/\nfS0W2R8Cyx4yvasE8QHH8gnNGtr94iiORDC7De2BwHi/iU8FxMVJAIyDLNfyk0hN\neheYKfIDBgJV2v6VaCOGWaZyEuD0FJ6wFeLybFBwibrLIBE5Y/StCrZoVZ5LocFP\nT4o8kT7bU6yonudSCyNMedYmqHj/iF8B2UN1WrYx8zvoDqZk0nxIglmEYKn/6U7U\ngyETGcW9AgMBAAECggEAC231vmkpwA7JG9UYbviVmSW79UecsLzsOAZnbtbn1VLT\nPg7sup7tprD/LXHoyIxK7S/jqINvPU65iuUhgCg3Rhz8+UiBhd0pCH/arlIdiPuD\n2xHpX8RIxAq6pGCsoPJ0kwkHSw8UTnxPV8ZCPSRyHV71oQHQgSl/WjNhRi6PQroB\nSqc/pS1m09cTwyKQIopBBVayRzmI2BtBxyhQp9I8t5b7PYkEZDQlbdq0j5Xipoov\n9EW0+Zvkh1FGNig8IJ9Wp+SZi3rd7KLpkyKPY7BK/g0nXBkDxn019cET0SdJOHQG\nDiHiv4yTRsDCHZhtEbAMKZEpku4WxtQ+JjR31l8useQKBgQDkO2oC8gi6vQDcx/CX\nZ23x2ZUyar6i0BQ8eJFAEN+IiUapEeCVazuxJSt4RjYfwSa/p117jdZGEWD0GxMC\n+iAXlc5LlrrWs4MWUc0AHTgXna28/vii3ltcsI0AjWMqaybhBTTNbMFa2/fV2OX2\nUimuFyBWbzVc3Zb9KAG4Y7OmJQKBgQC5324IjXPq5oH8UWZTdJPuO2cgRsvKmR/r\n9zl4loRjkS7FiOMfzAgUiXfH9XCnvwXMqJpuMw2PEUjUT+OyWjJONEK4qGFJkbN5\n3ykc7p5V7iPPc7Zxj4mFvJ1xjkcj+i5LY8Me+gL5mGIrJ2j8hbuv7f+PWIauyjnp\nNx/0GVFRuQKBgGNT4D1L7LSokPmFIpYh811wHliE0Fa3TDdNGZnSPhaD9/aYyy78\nLkxYKuT7WY7UVvLN+gdNoVV5NsLGDa4cAV+CWPfYr5PFKGXMT/Wewcy1WOmJ5des\nAgMC6zq0TdYmMBN6WpKUpEnQtbmh3eMnuvADLJWxbH3wCkg+4xDGg2bpAoGAYRNk\nMGtQQzqoYNNSkfus1xuHPMA8508Z8O9pwKU795R3zQs1NAInpjI1sOVrNPD7Ymwc\nW7mmNzZbxycCUL/yzg1VW4P1a6sBBYGbw1SMtWxun4ZbnuvMc2CTCh+43/1l+FHe\nMmt46kq/2rH2jwx5feTbOE6P6PINVNRJh/9BDWECgYEAsCWcH9D3cI/QDeLG1ao7\nrE2NcknP8N783edM07Z/zxWsIsXhBPY3gjHVz2LDl+QHgPWhGML62M0ja/6SsJW3\nYvLLIc82V7eqcVJTZtaFkuht68qu/Jn1ezbzJMJ4YXDYo1+KFi+2CAGR06QILb+I\nlUtj+/nH3HDQjM4ltYfTPUg=\n-----END PRIVATE KEY-----\n",
    "client_email": "foo-email@foo-project.iam.gserviceaccount.com",
    "client_id": "100000000000000000001",
    "auth_uri": "https://accounts.google.com/o/oauth2/auth",
    "token_uri": "https://accounts.google.com/o/oauth2/token",
    "auth_provider_x509_cert_url": "https://www.googleapis.com/oauth2/v1/certs",
    "client_x509_cert_url": "https://www.googleapis.com/robot/v1/metadata/x509/foo-email%40foo-project.iam.gserviceaccount.com"
})""";
  }

  static void VerifyJsonPayloadResponse(
      std::string const& method, std::string const& json_payload,
      StatusOr<std::unique_ptr<RestResponse>> response_status,
      absl::optional<std::size_t> const& request_content_length) {
    ASSERT_STATUS_OK(response_status);
    auto response = std::move(response_status.value());
    EXPECT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));
    auto headers = response->Headers();
    EXPECT_GT(headers.size(), 0);

    auto content_length = headers.find("content-length");
    ASSERT_TRUE(content_length != headers.end());
    EXPECT_GT(std::stoi(content_length->second), 0);

    EXPECT_THAT(headers,
                Contains(std::make_pair("content-type", "application/json")));
    auto body = ReadAll(std::move(*response).ExtractPayload());
    EXPECT_STATUS_OK(body);
    auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
    EXPECT_FALSE(parsed_response.is_discarded());
    ASSERT_FALSE(parsed_response.is_null());

    auto http_method = parsed_response.find("method");
    ASSERT_FALSE(http_method == parsed_response.end());
    EXPECT_THAT(http_method.value(), Eq(method));

    EXPECT_THAT(
        parsed_response,
        ResultOf(ExtractHeaders,
                 AllOf(Contains(Pair("Content-Type", "application/json")),
                       Contains(Pair("User-Agent", HasSubstr("gl-cpp/"))),
                       // The metadata decorator adds this header, the
                       // `CurlRestClient` should not duplicate it.
                       Not(Contains(Pair("X-Goog-Api-Client", _))))));

    // TODO(#8396): httbin.org doesn't send back our content-length header on
    //  PUT methods.
    if (method == "POST" && request_content_length) {
      EXPECT_THAT(
          parsed_response,
          ResultOf(ExtractHeaders,
                   Contains(Pair("Content-Length",
                                 std::to_string(*request_content_length)))));
    }

    auto response_json = parsed_response.find("json");
    ASSERT_FALSE(response_json == parsed_response.end());
    auto parsed_payload = nlohmann::json::parse(json_payload, nullptr, false);
    EXPECT_THAT(response_json.value(), Eq(parsed_payload));
  }

  static StatusOr<std::unique_ptr<RestResponse>> RetryRestRequest(
      std::function<StatusOr<std::unique_ptr<RestResponse>>()> const& request,
      StatusCode expected_status = StatusCode::kOk) {
    auto delay = std::chrono::seconds(1);
    StatusOr<std::unique_ptr<RestResponse>> response;
    for (auto i = 0; i != 3; ++i) {
      response = request();
      if (response.status().code() == expected_status) return response;
      std::this_thread::sleep_for(delay);
      delay *= 2;
    }
    return response;
  }

  std::string json_payload_;
  std::string url_;
  Options options_;
};

TEST_F(RestClientIntegrationTest, Get) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, {});
  RestRequest request;
  request.SetPath("get");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Get(context, request);
  });
  ASSERT_STATUS_OK(response_status);
  auto response = std::move(response_status.value());
  EXPECT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));
  EXPECT_GT(response->Headers().size(), 0);
  auto body = ReadAll(std::move(*response).ExtractPayload());
  EXPECT_STATUS_OK(body);
  EXPECT_GT(body->size(), 0);
}

TEST_F(RestClientIntegrationTest, Delete) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  options_.set<UserIpOption>("127.0.0.1");
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("delete");
  request.AddQueryParameter({"key", "value"});
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Delete(context, request);
  });
  ASSERT_STATUS_OK(response_status);
  auto response = std::move(response_status.value());
  EXPECT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));
  EXPECT_GT(response->Headers().size(), 0);
  auto body = ReadAll(std::move(*response).ExtractPayload());
  EXPECT_STATUS_OK(body);
  EXPECT_GT(body->size(), 0);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  ASSERT_TRUE(parsed_response.is_object());
  auto url = parsed_response.find("url");
  ASSERT_NE(url, parsed_response.end());
  EXPECT_THAT(url.value(), HasSubstr("/delete?key=value&userIp=127.0.0.1"));
}

TEST_F(RestClientIntegrationTest, PatchJsonContentType) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  std::string patch_json_payload = R"""({
    "client_email": "bar-email@foo-project.iam.gserviceaccount.com",
})""";

  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("patch");
  request.AddQueryParameter({"type", "service_account"});
  request.AddQueryParameter({"project_id", "foo-project"});
  absl::Span<char const> span = absl::MakeConstSpan(patch_json_payload);
  request.AddHeader("content-type", "application/json");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Patch(context, request, {span});
  });
  ASSERT_STATUS_OK(response_status);
  auto response = std::move(response_status.value());
  auto body = ReadAll(std::move(*response).ExtractPayload());
  EXPECT_STATUS_OK(body);
  EXPECT_GT(body->size(), 0);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  EXPECT_FALSE(parsed_response.is_discarded());
  ASSERT_FALSE(parsed_response.is_null());
  auto url = parsed_response.find("url");
  ASSERT_NE(url, parsed_response.end());
  EXPECT_THAT(url.value(),
              HasSubstr("/patch?type=service_account&project_id=foo-project"));
  EXPECT_THAT(url.value(), Not(HasSubstr("userIp=")));
  auto data = parsed_response.find("data");
  ASSERT_NE(data, parsed_response.end());
  EXPECT_THAT(data.value(),
              HasSubstr("\"client_email\": "
                        "\"bar-email@foo-project.iam.gserviceaccount.com\""));
}

TEST_F(RestClientIntegrationTest, AnythingPostNoContentType) {
  testing_util::ScopedLog log;
  options_.set<UnifiedCredentialsOption>(
      MakeAccessTokenCredentials("my-token", std::chrono::system_clock::now()));
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");
  request.AddHeader("Authorization", "test-value");

  absl::Span<char const> span = absl::MakeConstSpan(json_payload_);
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    context.AddHeader("authorization", "other-value");
    return client->Post(context, request, {span});
  });
  ASSERT_STATUS_OK(response_status);
  auto response = std::move(response_status.value());
  EXPECT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));
  auto headers = response->Headers();
  EXPECT_GT(headers.size(), 0);

  auto content_length = headers.find("content-length");
  ASSERT_TRUE(content_length != headers.end());
  EXPECT_GT(std::stoi(content_length->second), 0);

  EXPECT_THAT(headers, testing::Contains(
                           std::make_pair("content-type", "application/json")));
  auto body = ReadAll(std::move(*response).ExtractPayload());
  EXPECT_STATUS_OK(body);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  EXPECT_FALSE(parsed_response.is_discarded());
  ASSERT_FALSE(parsed_response.is_null());
  auto http_method = parsed_response.find("method");
  ASSERT_FALSE(http_method == parsed_response.end());
  EXPECT_THAT(http_method.value(), Eq("POST"));

  auto sent_headers = parsed_response.find("headers");
  ASSERT_FALSE(sent_headers == parsed_response.end());
  auto content_type = sent_headers->find("Content-Type");
  ASSERT_FALSE(content_type == sent_headers->end());
  EXPECT_THAT(content_type.value(), Eq("application/x-www-form-urlencoded"));

  auto iter = parsed_response.find("form");
  ASSERT_FALSE(iter == parsed_response.end());
  // Since no Content-Type was specified in the request, the library defaults
  // to url-encoded for POST operations. The response from such a POST to
  // httpbin.org/anything considers the payload sent as a form, not a json.
  EXPECT_THAT(iter.value().begin().key(), Eq(json_payload_));

  // Verify the other authorization headers that were added to the context and
  // request are NOT used and are NOT merged into the authorization header
  // added by the Credentials object.
  EXPECT_THAT(
      log.ExtractLines(),
      AllOf(Contains(HasSubstr(
                "Ignoring duplicate header: authorization: other-valu")),
            Contains(HasSubstr(
                "Ignoring duplicate header: authorization: test-value"))));
}

TEST_F(RestClientIntegrationTest, AnythingPostJsonContentType) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");

  absl::Span<char const> span = absl::MakeConstSpan(json_payload_);
  request.AddHeader("content-type", "application/json");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Post(context, request, {span});
  });
  VerifyJsonPayloadResponse("POST", json_payload_, std::move(response_status),
                            json_payload_.size());
}

TEST_F(RestClientIntegrationTest, AnythingGetVerifyHeaders) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");

  auto response = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Get(context, request);
  });
  ASSERT_STATUS_OK(response);
  auto body = ReadAll(std::move(**response).ExtractPayload());
  EXPECT_STATUS_OK(body);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  ASSERT_TRUE(parsed_response.is_object());

  auto http_method = parsed_response.find("method");
  ASSERT_FALSE(http_method == parsed_response.end());
  EXPECT_THAT(http_method.value(), Eq("GET"));

  EXPECT_THAT(parsed_response,
              ResultOf("sent headers are", ExtractHeaders,
                       AllOf(Contains(Pair("User-Agent", HasSubstr("gl-cpp/"))),
                             Not(Contains(Pair("X-Goog-Api-Client", _))))));
}

TEST_F(RestClientIntegrationTest, AnythingGetVerifyHeadersAsIfDecorated) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");

  auto response = RetryRestRequest([&] {
    rest_internal::RestContext context;
    context.AddHeader("x-goog-api-client",
                      internal::GeneratedLibClientHeader());
    return client->Get(context, request);
  });
  ASSERT_STATUS_OK(response);
  auto body = ReadAll(std::move(**response).ExtractPayload());
  EXPECT_STATUS_OK(body);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  ASSERT_TRUE(parsed_response.is_object());

  auto http_method = parsed_response.find("method");
  ASSERT_FALSE(http_method == parsed_response.end());
  EXPECT_THAT(http_method.value(), Eq("GET"));

  EXPECT_THAT(
      parsed_response,
      ResultOf(
          "sent headers are", ExtractHeaders,
          AllOf(Contains(Pair("User-Agent", HasSubstr("gl-cpp/"))),
                Contains(Pair("X-Goog-Api-Client",
                              AllOf(HasSubstr("gl-cpp/"), HasSubstr("gapic/"),
                                    Not(HasSubstr("gccl/"))))))));
}

TEST_F(RestClientIntegrationTest, AnythingPutJsonContentTypeSingleSpan) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");

  absl::Span<char const> span = absl::MakeConstSpan(json_payload_);
  request.AddHeader("content-type", "application/json");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Put(context, request, {span});
  });
  VerifyJsonPayloadResponse("PUT", json_payload_, std::move(response_status),
                            json_payload_.size());
}

TEST_F(RestClientIntegrationTest, AnythingPutJsonContentTypeTwoSpans) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");

  std::string payload1 = json_payload_.substr(0, json_payload_.size() / 4);
  std::string gap = std::string(4096 * 4096, '/');
  std::string payload2 =
      json_payload_.substr(json_payload_.size() / 4, json_payload_.size());
  // Ensure span1 and span2 are non-contiguous.
  std::string concat = payload1 + gap + payload2;
  absl::Span<char const> span1 =
      absl::Span<char const>(concat.data(), payload1.size());
  absl::Span<char const> span2 = absl::Span<char const>(
      concat.data() + payload1.size() + gap.size(), payload2.size());
  request.AddHeader("content-type", "application/json");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Put(context, request, {span1, span2});
  });
  VerifyJsonPayloadResponse("PUT", json_payload_, std::move(response_status),
                            span1.size() + span2.size());
}

TEST_F(RestClientIntegrationTest, AnythingPutJsonContentTypeEmptyMiddleSpan) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");

  std::string payload1 = json_payload_.substr(0, json_payload_.size() / 4);
  std::string empty;
  std::string payload2 =
      json_payload_.substr(json_payload_.size() / 4, json_payload_.size());

  absl::Span<char const> span1 = absl::MakeConstSpan(payload1);
  absl::Span<char const> empty_span = absl::MakeConstSpan(empty);
  absl::Span<char const> span2 = absl::MakeConstSpan(payload2);
  request.AddHeader("content-type", "application/json");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Put(context, request, {span1, empty_span, span2});
  });
  VerifyJsonPayloadResponse("PUT", json_payload_, std::move(response_status),
                            span1.size() + empty_span.size() + span2.size());
}

TEST_F(RestClientIntegrationTest, AnythingPutJsonContentTypeEmptyFirstSpan) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");

  std::string payload1 = json_payload_.substr(0, json_payload_.size() / 4);
  std::string empty;
  std::string payload2 =
      json_payload_.substr(json_payload_.size() / 4, json_payload_.size());

  absl::Span<char const> span1 = absl::MakeConstSpan(payload1);
  absl::Span<char const> empty_span = absl::MakeConstSpan(empty);
  absl::Span<char const> span2 = absl::MakeConstSpan(payload2);
  request.AddHeader("content-type", "application/json");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Put(context, request, {empty_span, span1, span2});
  });
  VerifyJsonPayloadResponse("PUT", json_payload_, std::move(response_status),
                            span1.size() + empty_span.size() + span2.size());
}

TEST_F(RestClientIntegrationTest, ResponseBodyLargerThanSpillBuffer) {
  nlohmann::json json;
  for (int i = 0; i != 10000; ++i) {
    json["row" + std::to_string(i)] = std::string(128, 'A');
  }
  auto large_json_payload = json.dump();
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  options_.set<ConnectionPoolSizeOption>(4);
  auto client = MakePooledRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");
  request.AddHeader("content-type", "application/json");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Put(context, request,
                       {absl::MakeConstSpan(large_json_payload)});
  });
  VerifyJsonPayloadResponse("PUT", large_json_payload,
                            std::move(response_status),
                            large_json_payload.size());
}

TEST_F(RestClientIntegrationTest, PostFormData) {
  options_.set<UnifiedCredentialsOption>(MakeInsecureCredentials());
  auto client = MakeDefaultRestClient(url_, options_);
  RestRequest request;
  request.SetPath("anything");

  std::pair<std::string, std::string> form_pair_1 =
      std::make_pair("key1", "value%1");
  std::pair<std::string, std::string> form_pair_2 =
      std::make_pair("key2", "value=2");
  std::pair<std::string, std::string> form_pair_3 =
      std::make_pair("key3", "value$3");
  std::vector<std::pair<std::string, std::string>> form_data;
  form_data.push_back(form_pair_1);
  form_data.push_back(form_pair_2);
  form_data.push_back(form_pair_3);

  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Post(context, request, form_data);
  });
  ASSERT_STATUS_OK(response_status);
  auto response = std::move(response_status.value());
  EXPECT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));
  auto headers = response->Headers();
  EXPECT_GT(headers.size(), 0);

  auto content_length = headers.find("content-length");
  ASSERT_TRUE(content_length != headers.end());
  EXPECT_GT(std::stoi(content_length->second), 0);

  auto body = ReadAll(std::move(*response).ExtractPayload());
  EXPECT_STATUS_OK(body);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  EXPECT_FALSE(parsed_response.is_discarded());
  ASSERT_FALSE(parsed_response.is_null());
  auto http_method = parsed_response.find("method");
  ASSERT_FALSE(http_method == parsed_response.end());
  EXPECT_THAT(http_method.value(), Eq("POST"));

  auto sent_headers = parsed_response.find("headers");
  ASSERT_FALSE(sent_headers == parsed_response.end());
  auto content_type = sent_headers->find("Content-Type");
  ASSERT_FALSE(content_type == sent_headers->end());
  EXPECT_THAT(content_type.value(), Eq("application/x-www-form-urlencoded"));

  auto form = parsed_response.find("form");
  ASSERT_FALSE(form == parsed_response.end());
  EXPECT_THAT((*form)[form_pair_1.first], Eq(form_pair_1.second));
  EXPECT_THAT((*form)[form_pair_2.first], Eq(form_pair_2.second));
  EXPECT_THAT((*form)[form_pair_3.first], Eq(form_pair_3.second));
}

TEST_F(RestClientIntegrationTest, PeerPseudoHeader) {
  auto client = MakeDefaultRestClient(url_, {});
  RestRequest request;
  request.SetPath("stream/100");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    return client->Get(context, request);
  });
  ASSERT_STATUS_OK(response_status);
  auto response = *std::move(response_status);
  EXPECT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));
  EXPECT_THAT(response->Headers(), Contains(Pair(":curl-peer", _)).Times(1));

  // Reading in small buffers used to cause errors.
  auto payload = std::move(*response).ExtractPayload();
  auto constexpr kBufferSize = 16;
  char buffer[kBufferSize];
  while (true) {
    auto bytes = payload->Read(absl::MakeSpan(buffer, kBufferSize));
    ASSERT_STATUS_OK(bytes);
    if (*bytes == 0) break;
  }
  EXPECT_THAT(payload->DebugHeaders(),
              Contains(Pair(":curl-peer", _)).Times(1));
}

TEST_F(RestClientIntegrationTest, RestContextHeaders) {
  auto client = MakeDefaultRestClient(url_, {});
  RestRequest request;
  request.SetPath("anything");
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context;
    context.AddHeader({"x-test-header-1", "header-value-1"});
    context.AddHeader({"x-test-header-2", "header-value-2"});
    return client->Get(context, request);
  });
  ASSERT_STATUS_OK(response_status);
  auto response = *std::move(response_status);
  ASSERT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));
  auto body = ReadAll(std::move(*response).ExtractPayload());
  ASSERT_STATUS_OK(body);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  ASSERT_TRUE(parsed_response.is_object()) << "body=" << *body;
  auto sent_headers = parsed_response.find("headers");
  ASSERT_TRUE(sent_headers != parsed_response.end()) << "body=" << *body;
  EXPECT_EQ(sent_headers->value("X-Test-Header-1", ""), "header-value-1")
      << "body=" << *body;
  EXPECT_EQ(sent_headers->value("X-Test-Header-2", ""), "header-value-2")
      << "body=" << *body;
}

TEST_F(RestClientIntegrationTest, CaptureMetadata) {
  auto client = MakeDefaultRestClient(url_, {});
  RestRequest request;
  request.SetPath("anything");
  rest_internal::RestContext context;
  auto response_status = RetryRestRequest([&] {
    context.AddHeader({"x-test-header-1", "header-value-1"});
    context.AddHeader({"x-test-header-2", "header-value-2"});
    return client->Get(context, request);
  });
  ASSERT_STATUS_OK(response_status);
  auto response = *std::move(response_status);
  ASSERT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));

  EXPECT_TRUE(context.local_ip_address());
  EXPECT_TRUE(context.local_port());
  EXPECT_TRUE(context.primary_ip_address());
  EXPECT_TRUE(context.primary_port());

  ASSERT_TRUE(context.namelookup_time());
  ASSERT_TRUE(context.connect_time());
  ASSERT_TRUE(context.appconnect_time());
  // Times are relative from the start of the request, the should be increasing:
  // namelookup <= connect <= appconnect
  EXPECT_GE(*context.connect_time(), *context.namelookup_time());
  // For HTTPS connections we expect appconnect_time to be >= connect_time. For
  // HTTP connections we expect it to be 0 (there is no SSL negotiation to
  // perform).  A EXPECT_THAT() here would not be very readable.
  if (absl::StartsWith(url_, "https://")) {
    EXPECT_GE(*context.appconnect_time(), *context.connect_time());
  } else {
    EXPECT_EQ(*context.appconnect_time(), std::chrono::microseconds(0));
  }

  auto body = ReadAll(std::move(*response).ExtractPayload());
  ASSERT_STATUS_OK(body);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  ASSERT_TRUE(parsed_response.is_object()) << "body=" << *body;
}

TEST_F(RestClientIntegrationTest, PerRequestOptions) {
  auto client = MakeDefaultRestClient(url_, {});
  RestRequest request;
  request.SetPath("anything");
  auto const version = google::cloud::version_string();
  auto const p1 = "p1/" + google::cloud::version_string();
  auto const p2 = "p2/" + google::cloud::version_string();
  auto response_status = RetryRestRequest([&] {
    rest_internal::RestContext context(
        Options{}.set<UserAgentProductsOption>({p1, p2}));
    return client->Get(context, request);
  });
  ASSERT_STATUS_OK(response_status);
  auto response = *std::move(response_status);
  ASSERT_THAT(response->StatusCode(), Eq(HttpStatusCode::kOk));
  auto body = ReadAll(std::move(*response).ExtractPayload());
  ASSERT_STATUS_OK(body);
  auto parsed_response = nlohmann::json::parse(*body, nullptr, false);
  ASSERT_TRUE(parsed_response.is_object()) << "body=" << *body;
  auto headers = parsed_response.find("headers");
  ASSERT_TRUE(headers != parsed_response.end()) << "body=" << *body;
  auto const products = std::vector<std::string>(
      absl::StrSplit(headers->value("User-Agent", ""), ' '));
  EXPECT_THAT(products, AllOf(Contains(p1), Contains(p2),
                              Contains(StartsWith("gl-cpp/"))));
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google
