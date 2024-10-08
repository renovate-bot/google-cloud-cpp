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
// source: google/pubsub/v1/pubsub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_MOCKS_MOCK_SUBSCRIPTION_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_MOCKS_MOCK_SUBSCRIPTION_ADMIN_CONNECTION_H

#include "google/cloud/pubsub/admin/subscription_admin_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace pubsub_admin_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SubscriptionAdminConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SubscriptionAdminClient`. To do so,
 * construct an object of type `SubscriptionAdminClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockSubscriptionAdminConnection
    : public pubsub_admin::SubscriptionAdminConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Subscription>, CreateSubscription,
              (google::pubsub::v1::Subscription const& request), (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Subscription>, GetSubscription,
              (google::pubsub::v1::GetSubscriptionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Subscription>, UpdateSubscription,
              (google::pubsub::v1::UpdateSubscriptionRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::pubsub::v1::Subscription>),
              ListSubscriptions,
              (google::pubsub::v1::ListSubscriptionsRequest request),
              (override));

  MOCK_METHOD(Status, DeleteSubscription,
              (google::pubsub::v1::DeleteSubscriptionRequest const& request),
              (override));

  MOCK_METHOD(Status, ModifyPushConfig,
              (google::pubsub::v1::ModifyPushConfigRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Snapshot>, GetSnapshot,
              (google::pubsub::v1::GetSnapshotRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::pubsub::v1::Snapshot>), ListSnapshots,
              (google::pubsub::v1::ListSnapshotsRequest request), (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Snapshot>, CreateSnapshot,
              (google::pubsub::v1::CreateSnapshotRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Snapshot>, UpdateSnapshot,
              (google::pubsub::v1::UpdateSnapshotRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteSnapshot,
              (google::pubsub::v1::DeleteSnapshotRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::SeekResponse>, Seek,
              (google::pubsub::v1::SeekRequest const& request), (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_MOCKS_MOCK_SUBSCRIPTION_ADMIN_CONNECTION_H
