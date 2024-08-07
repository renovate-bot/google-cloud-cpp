// Copyright 2022 Google LLC
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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_DOMAIN_MAPPINGS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_DOMAIN_MAPPINGS_CONNECTION_H

#include "google/cloud/appengine/v1/domain_mappings_connection_idempotency_policy.h"
#include "google/cloud/appengine/v1/internal/domain_mappings_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/appengine/v1/appengine.pb.h>
#include <google/appengine/v1/operation.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DomainMappingsConnection`.
class DomainMappingsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DomainMappingsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DomainMappingsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DomainMappingsLimitedErrorCountRetryPolicy
    : public DomainMappingsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DomainMappingsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DomainMappingsLimitedErrorCountRetryPolicy(
      DomainMappingsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DomainMappingsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DomainMappingsLimitedErrorCountRetryPolicy(
      DomainMappingsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DomainMappingsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DomainMappingsRetryPolicy> clone() const override {
    return std::make_unique<DomainMappingsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DomainMappingsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      appengine_v1_internal::DomainMappingsRetryTraits>
      impl_;
};

/**
 * A retry policy for `DomainMappingsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DomainMappingsLimitedTimeRetryPolicy : public DomainMappingsRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit DomainMappingsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DomainMappingsLimitedTimeRetryPolicy(
      DomainMappingsLimitedTimeRetryPolicy&& rhs) noexcept
      : DomainMappingsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DomainMappingsLimitedTimeRetryPolicy(
      DomainMappingsLimitedTimeRetryPolicy const& rhs) noexcept
      : DomainMappingsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DomainMappingsRetryPolicy> clone() const override {
    return std::make_unique<DomainMappingsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DomainMappingsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      appengine_v1_internal::DomainMappingsRetryTraits>
      impl_;
};

/**
 * The `DomainMappingsConnection` object for `DomainMappingsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DomainMappingsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DomainMappingsClient`.
 *
 * To create a concrete instance, see `MakeDomainMappingsConnection()`.
 *
 * For mocking, see `appengine_v1_mocks::MockDomainMappingsConnection`.
 */
class DomainMappingsConnection {
 public:
  virtual ~DomainMappingsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::appengine::v1::DomainMapping> ListDomainMappings(
      google::appengine::v1::ListDomainMappingsRequest request);

  virtual StatusOr<google::appengine::v1::DomainMapping> GetDomainMapping(
      google::appengine::v1::GetDomainMappingRequest const& request);

  virtual future<StatusOr<google::appengine::v1::DomainMapping>>
  CreateDomainMapping(
      google::appengine::v1::CreateDomainMappingRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateDomainMapping(
      NoAwaitTag,
      google::appengine::v1::CreateDomainMappingRequest const& request);

  virtual future<StatusOr<google::appengine::v1::DomainMapping>>
  CreateDomainMapping(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::appengine::v1::DomainMapping>>
  UpdateDomainMapping(
      google::appengine::v1::UpdateDomainMappingRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateDomainMapping(
      NoAwaitTag,
      google::appengine::v1::UpdateDomainMappingRequest const& request);

  virtual future<StatusOr<google::appengine::v1::DomainMapping>>
  UpdateDomainMapping(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::appengine::v1::OperationMetadataV1>>
  DeleteDomainMapping(
      google::appengine::v1::DeleteDomainMappingRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteDomainMapping(
      NoAwaitTag,
      google::appengine::v1::DeleteDomainMappingRequest const& request);

  virtual future<StatusOr<google::appengine::v1::OperationMetadataV1>>
  DeleteDomainMapping(google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type `DomainMappingsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DomainMappingsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DomainMappingsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::appengine_v1::DomainMappingsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DomainMappingsConnection` created by
 * this function.
 */
std::shared_ptr<DomainMappingsConnection> MakeDomainMappingsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_DOMAIN_MAPPINGS_CONNECTION_H
