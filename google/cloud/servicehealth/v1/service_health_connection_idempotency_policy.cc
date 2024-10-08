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
// source: google/cloud/servicehealth/v1/event_service.proto

#include "google/cloud/servicehealth/v1/service_health_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicehealth_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ServiceHealthConnectionIdempotencyPolicy::
    ~ServiceHealthConnectionIdempotencyPolicy() = default;

std::unique_ptr<ServiceHealthConnectionIdempotencyPolicy>
ServiceHealthConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ServiceHealthConnectionIdempotencyPolicy>(*this);
}

Idempotency ServiceHealthConnectionIdempotencyPolicy::ListEvents(
    google::cloud::servicehealth::v1::ListEventsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ServiceHealthConnectionIdempotencyPolicy::GetEvent(
    google::cloud::servicehealth::v1::GetEventRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ServiceHealthConnectionIdempotencyPolicy::ListOrganizationEvents(
    google::cloud::servicehealth::v1::
        ListOrganizationEventsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ServiceHealthConnectionIdempotencyPolicy::GetOrganizationEvent(
    google::cloud::servicehealth::v1::GetOrganizationEventRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ServiceHealthConnectionIdempotencyPolicy::ListOrganizationImpacts(
    google::cloud::servicehealth::v1::
        ListOrganizationImpactsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ServiceHealthConnectionIdempotencyPolicy::GetOrganizationImpact(
    google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ServiceHealthConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ServiceHealthConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<ServiceHealthConnectionIdempotencyPolicy>
MakeDefaultServiceHealthConnectionIdempotencyPolicy() {
  return std::make_unique<ServiceHealthConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicehealth_v1
}  // namespace cloud
}  // namespace google
