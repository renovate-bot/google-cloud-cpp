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
// source: google/cloud/compute/service_attachments/v1/service_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_SERVICE_ATTACHMENTS_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_SERVICE_ATTACHMENTS_OPTIONS_H

#include "google/cloud/compute/service_attachments/v1/service_attachments_connection.h"
#include "google/cloud/compute/service_attachments/v1/service_attachments_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_service_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct ServiceAttachmentsRetryPolicyOption {
  using Type = std::shared_ptr<ServiceAttachmentsRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct ServiceAttachmentsBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-compute-options
 */
struct ServiceAttachmentsConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<ServiceAttachmentsConnectionIdempotencyPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the long-running operations
 * polling policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct ServiceAttachmentsPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/**
 * The options applicable to ServiceAttachments.
 *
 * @ingroup google-cloud-compute-options
 */
using ServiceAttachmentsPolicyOptionList =
    OptionList<ServiceAttachmentsRetryPolicyOption,
               ServiceAttachmentsBackoffPolicyOption,
               ServiceAttachmentsPollingPolicyOption,
               ServiceAttachmentsConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_service_attachments_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_SERVICE_ATTACHMENTS_OPTIONS_H
