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
// source: google/cloud/parallelstore/v1/parallelstore.proto

#include "google/cloud/parallelstore/v1/parallelstore_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace parallelstore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ParallelstoreConnectionIdempotencyPolicy::
    ~ParallelstoreConnectionIdempotencyPolicy() = default;

std::unique_ptr<ParallelstoreConnectionIdempotencyPolicy>
ParallelstoreConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ParallelstoreConnectionIdempotencyPolicy>(*this);
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::ListInstances(
    google::cloud::parallelstore::v1::ListInstancesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::GetInstance(
    google::cloud::parallelstore::v1::GetInstanceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::CreateInstance(
    google::cloud::parallelstore::v1::CreateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::UpdateInstance(
    google::cloud::parallelstore::v1::UpdateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::DeleteInstance(
    google::cloud::parallelstore::v1::DeleteInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::ImportData(
    google::cloud::parallelstore::v1::ImportDataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::ExportData(
    google::cloud::parallelstore::v1::ExportDataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ParallelstoreConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ParallelstoreConnectionIdempotencyPolicy>
MakeDefaultParallelstoreConnectionIdempotencyPolicy() {
  return std::make_unique<ParallelstoreConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace parallelstore_v1
}  // namespace cloud
}  // namespace google
