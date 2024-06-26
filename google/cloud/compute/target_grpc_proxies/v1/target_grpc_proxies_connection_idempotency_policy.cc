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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#include "google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TargetGrpcProxiesConnectionIdempotencyPolicy::
    ~TargetGrpcProxiesConnectionIdempotencyPolicy() = default;

std::unique_ptr<TargetGrpcProxiesConnectionIdempotencyPolicy>
TargetGrpcProxiesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<TargetGrpcProxiesConnectionIdempotencyPolicy>(*this);
}

Idempotency TargetGrpcProxiesConnectionIdempotencyPolicy::DeleteTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        DeleteTargetGrpcProxyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetGrpcProxiesConnectionIdempotencyPolicy::GetTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        GetTargetGrpcProxyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TargetGrpcProxiesConnectionIdempotencyPolicy::InsertTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        InsertTargetGrpcProxyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetGrpcProxiesConnectionIdempotencyPolicy::ListTargetGrpcProxies(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        ListTargetGrpcProxiesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TargetGrpcProxiesConnectionIdempotencyPolicy::PatchTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        PatchTargetGrpcProxyRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<TargetGrpcProxiesConnectionIdempotencyPolicy>
MakeDefaultTargetGrpcProxiesConnectionIdempotencyPolicy() {
  return std::make_unique<TargetGrpcProxiesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1
}  // namespace cloud
}  // namespace google
