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
// source: google/cloud/compute/projects/v1/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_MOCKS_MOCK_PROJECTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_MOCKS_MOCK_PROJECTS_CONNECTION_H

#include "google/cloud/compute/projects/v1/projects_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_projects_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ProjectsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ProjectsClient`. To do so,
 * construct an object of type `ProjectsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockProjectsConnection : public compute_projects_v1::ProjectsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DisableXpnHost(Matcher<google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      DisableXpnHost,
      (google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DisableXpnHost(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, DisableXpnHost,
      (NoAwaitTag,
       google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DisableXpnHost(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DisableXpnHost,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DisableXpnResource(Matcher<google::cloud::cpp::compute::projects::v1::DisableXpnResourceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DisableXpnResource,
              (google::cloud::cpp::compute::projects::v1::
                   DisableXpnResourceRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DisableXpnResource(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DisableXpnResource,
              (NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                               DisableXpnResourceRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DisableXpnResource(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DisableXpnResource,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// EnableXpnHost(Matcher<google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      EnableXpnHost,
      (google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, EnableXpnHost(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, EnableXpnHost,
      (NoAwaitTag,
       google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// EnableXpnHost(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              EnableXpnHost,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// EnableXpnResource(Matcher<google::cloud::cpp::compute::projects::v1::EnableXpnResourceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              EnableXpnResource,
              (google::cloud::cpp::compute::projects::v1::
                   EnableXpnResourceRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, EnableXpnResource(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              EnableXpnResource,
              (NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                               EnableXpnResourceRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// EnableXpnResource(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              EnableXpnResource,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Project>, GetProject,
      (google::cloud::cpp::compute::projects::v1::GetProjectRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Project>, GetXpnHost,
      (google::cloud::cpp::compute::projects::v1::GetXpnHostRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::ProjectsGetXpnResources>,
      GetXpnResources,
      (google::cloud::cpp::compute::projects::v1::GetXpnResourcesRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::Project>), ListXpnHosts,
      (google::cloud::cpp::compute::projects::v1::ListXpnHostsRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// MoveDisk(Matcher<google::cloud::cpp::compute::projects::v1::MoveDiskRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              MoveDisk,
              (google::cloud::cpp::compute::projects::v1::MoveDiskRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, MoveDisk(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, MoveDisk,
              (NoAwaitTag,
               google::cloud::cpp::compute::projects::v1::MoveDiskRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// MoveDisk(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              MoveDisk,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// MoveInstance(Matcher<google::cloud::cpp::compute::projects::v1::MoveInstanceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      MoveInstance,
      (google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, MoveInstance(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, MoveInstance,
      (NoAwaitTag,
       google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// MoveInstance(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              MoveInstance,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetCloudArmorTier(Matcher<google::cloud::cpp::compute::projects::v1::SetCloudArmorTierRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetCloudArmorTier,
              (google::cloud::cpp::compute::projects::v1::
                   SetCloudArmorTierRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, SetCloudArmorTier(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetCloudArmorTier,
              (NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                               SetCloudArmorTierRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetCloudArmorTier(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetCloudArmorTier,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetCommonInstanceMetadata(Matcher<google::cloud::cpp::compute::projects::v1::SetCommonInstanceMetadataRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetCommonInstanceMetadata,
              (google::cloud::cpp::compute::projects::v1::
                   SetCommonInstanceMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, SetCommonInstanceMetadata(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetCommonInstanceMetadata,
              (NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                               SetCommonInstanceMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetCommonInstanceMetadata(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetCommonInstanceMetadata,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetDefaultNetworkTier(Matcher<google::cloud::cpp::compute::projects::v1::SetDefaultNetworkTierRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetDefaultNetworkTier,
              (google::cloud::cpp::compute::projects::v1::
                   SetDefaultNetworkTierRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, SetDefaultNetworkTier(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetDefaultNetworkTier,
              (NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                               SetDefaultNetworkTierRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetDefaultNetworkTier(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetDefaultNetworkTier,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetUsageExportBucket(Matcher<google::cloud::cpp::compute::projects::v1::SetUsageExportBucketRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetUsageExportBucket,
              (google::cloud::cpp::compute::projects::v1::
                   SetUsageExportBucketRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, SetUsageExportBucket(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetUsageExportBucket,
              (NoAwaitTag, google::cloud::cpp::compute::projects::v1::
                               SetUsageExportBucketRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetUsageExportBucket(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetUsageExportBucket,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_projects_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_MOCKS_MOCK_PROJECTS_CONNECTION_H
