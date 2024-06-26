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
// source: google/cloud/support/v2/case_service.proto

#include "google/cloud/support/v2/case_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace support_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CaseServiceConnectionIdempotencyPolicy::
    ~CaseServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<CaseServiceConnectionIdempotencyPolicy>
CaseServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<CaseServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency CaseServiceConnectionIdempotencyPolicy::GetCase(
    google::cloud::support::v2::GetCaseRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CaseServiceConnectionIdempotencyPolicy::ListCases(
    google::cloud::support::v2::ListCasesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CaseServiceConnectionIdempotencyPolicy::SearchCases(
    google::cloud::support::v2::SearchCasesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CaseServiceConnectionIdempotencyPolicy::CreateCase(
    google::cloud::support::v2::CreateCaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CaseServiceConnectionIdempotencyPolicy::UpdateCase(
    google::cloud::support::v2::UpdateCaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CaseServiceConnectionIdempotencyPolicy::EscalateCase(
    google::cloud::support::v2::EscalateCaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CaseServiceConnectionIdempotencyPolicy::CloseCase(
    google::cloud::support::v2::CloseCaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CaseServiceConnectionIdempotencyPolicy::SearchCaseClassifications(
    google::cloud::support::v2::SearchCaseClassificationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<CaseServiceConnectionIdempotencyPolicy>
MakeDefaultCaseServiceConnectionIdempotencyPolicy() {
  return std::make_unique<CaseServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2
}  // namespace cloud
}  // namespace google
