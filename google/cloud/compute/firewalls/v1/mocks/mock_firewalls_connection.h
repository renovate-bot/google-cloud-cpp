// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/compute/firewalls/v1/firewalls.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_MOCKS_MOCK_FIREWALLS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_MOCKS_MOCK_FIREWALLS_CONNECTION_H

#include "google/cloud/compute/firewalls/v1/firewalls_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_firewalls_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `FirewallsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `FirewallsClient`. To do so,
 * construct an object of type `FirewallsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockFirewallsConnection
    : public compute_firewalls_v1::FirewallsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteFirewall(Matcher<google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      DeleteFirewall,
      (google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteFirewall(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, DeleteFirewall,
      (NoAwaitTag,
       google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteFirewall(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteFirewall,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Firewall>, GetFirewall,
      (google::cloud::cpp::compute::firewalls::v1::GetFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertFirewall(Matcher<google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      InsertFirewall,
      (google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, InsertFirewall(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, InsertFirewall,
      (NoAwaitTag,
       google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertFirewall(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertFirewall,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::Firewall>),
              ListFirewalls,
              (google::cloud::cpp::compute::firewalls::v1::ListFirewallsRequest
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchFirewall(Matcher<google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      PatchFirewall,
      (google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PatchFirewall(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, PatchFirewall,
      (NoAwaitTag,
       google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchFirewall(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchFirewall,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateFirewall(Matcher<google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      UpdateFirewall,
      (google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateFirewall(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, UpdateFirewall,
      (NoAwaitTag,
       google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateFirewall(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateFirewall,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewalls_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALLS_V1_MOCKS_MOCK_FIREWALLS_CONNECTION_H
