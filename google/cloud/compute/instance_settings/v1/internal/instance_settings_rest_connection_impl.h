// Copyright 2024 Google LLC
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
// source: google/cloud/compute/instance_settings/v1/instance_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_SETTINGS_V1_INTERNAL_INSTANCE_SETTINGS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_SETTINGS_V1_INTERNAL_INSTANCE_SETTINGS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/instance_settings/v1/instance_settings_connection.h"
#include "google/cloud/compute/instance_settings/v1/instance_settings_connection_idempotency_policy.h"
#include "google/cloud/compute/instance_settings/v1/instance_settings_options.h"
#include "google/cloud/compute/instance_settings/v1/internal/instance_settings_rest_stub.h"
#include "google/cloud/compute/instance_settings/v1/internal/instance_settings_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_settings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceSettingsRestConnectionImpl
    : public compute_instance_settings_v1::InstanceSettingsConnection {
 public:
  ~InstanceSettingsRestConnectionImpl() override = default;

  InstanceSettingsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_instance_settings_v1_internal::InstanceSettingsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::InstanceSettings>
  GetInstanceSettings(google::cloud::cpp::compute::instance_settings::v1::
                          GetInstanceSettingsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInstanceSettings(
      google::cloud::cpp::compute::instance_settings::v1::
          PatchInstanceSettingsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchInstanceSettings(
      NoAwaitTag, google::cloud::cpp::compute::instance_settings::v1::
                      PatchInstanceSettingsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInstanceSettings(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<
      compute_instance_settings_v1::InstanceSettingsRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_instance_settings_v1::InstanceSettingsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<
            compute_instance_settings_v1::InstanceSettingsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_instance_settings_v1::InstanceSettingsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_instance_settings_v1::
                 InstanceSettingsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<
            compute_instance_settings_v1::InstanceSettingsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_instance_settings_v1_internal::InstanceSettingsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_settings_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_SETTINGS_V1_INTERNAL_INSTANCE_SETTINGS_REST_CONNECTION_IMPL_H
