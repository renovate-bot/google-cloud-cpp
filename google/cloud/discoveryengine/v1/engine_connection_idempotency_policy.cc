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
// source: google/cloud/discoveryengine/v1/engine_service.proto

#include "google/cloud/discoveryengine/v1/engine_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EngineServiceConnectionIdempotencyPolicy::
    ~EngineServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<EngineServiceConnectionIdempotencyPolicy>
EngineServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<EngineServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency EngineServiceConnectionIdempotencyPolicy::CreateEngine(
    google::cloud::discoveryengine::v1::CreateEngineRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EngineServiceConnectionIdempotencyPolicy::DeleteEngine(
    google::cloud::discoveryengine::v1::DeleteEngineRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EngineServiceConnectionIdempotencyPolicy::UpdateEngine(
    google::cloud::discoveryengine::v1::UpdateEngineRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EngineServiceConnectionIdempotencyPolicy::GetEngine(
    google::cloud::discoveryengine::v1::GetEngineRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EngineServiceConnectionIdempotencyPolicy::ListEngines(
    google::cloud::discoveryengine::v1::ListEnginesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EngineServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EngineServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EngineServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<EngineServiceConnectionIdempotencyPolicy>
MakeDefaultEngineServiceConnectionIdempotencyPolicy() {
  return std::make_unique<EngineServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google
