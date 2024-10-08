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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_WORKFLOW_TEMPLATE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_WORKFLOW_TEMPLATE_CONNECTION_H

#include "google/cloud/dataproc/v1/internal/workflow_template_retry_traits.h"
#include "google/cloud/dataproc/v1/workflow_template_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dataproc/v1/workflow_templates.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `WorkflowTemplateServiceConnection`.
class WorkflowTemplateServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<WorkflowTemplateServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `WorkflowTemplateServiceConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class WorkflowTemplateServiceLimitedErrorCountRetryPolicy
    : public WorkflowTemplateServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit WorkflowTemplateServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  WorkflowTemplateServiceLimitedErrorCountRetryPolicy(
      WorkflowTemplateServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : WorkflowTemplateServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  WorkflowTemplateServiceLimitedErrorCountRetryPolicy(
      WorkflowTemplateServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : WorkflowTemplateServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<WorkflowTemplateServiceRetryPolicy> clone() const override {
    return std::make_unique<
        WorkflowTemplateServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = WorkflowTemplateServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dataproc_v1_internal::WorkflowTemplateServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `WorkflowTemplateServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class WorkflowTemplateServiceLimitedTimeRetryPolicy
    : public WorkflowTemplateServiceRetryPolicy {
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
  explicit WorkflowTemplateServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  WorkflowTemplateServiceLimitedTimeRetryPolicy(
      WorkflowTemplateServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : WorkflowTemplateServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  WorkflowTemplateServiceLimitedTimeRetryPolicy(
      WorkflowTemplateServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : WorkflowTemplateServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<WorkflowTemplateServiceRetryPolicy> clone() const override {
    return std::make_unique<WorkflowTemplateServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = WorkflowTemplateServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dataproc_v1_internal::WorkflowTemplateServiceRetryTraits>
      impl_;
};

/**
 * The `WorkflowTemplateServiceConnection` object for
 * `WorkflowTemplateServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `WorkflowTemplateServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `WorkflowTemplateServiceClient`.
 *
 * To create a concrete instance, see `MakeWorkflowTemplateServiceConnection()`.
 *
 * For mocking, see `dataproc_v1_mocks::MockWorkflowTemplateServiceConnection`.
 */
class WorkflowTemplateServiceConnection {
 public:
  virtual ~WorkflowTemplateServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  CreateWorkflowTemplate(
      google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const&
          request);

  virtual StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  GetWorkflowTemplate(
      google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateWorkflowTemplate(
      google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> InstantiateWorkflowTemplate(
      NoAwaitTag,
      google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
          request);

  virtual future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateWorkflowTemplate(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateInlineWorkflowTemplate(
      google::cloud::dataproc::v1::
          InstantiateInlineWorkflowTemplateRequest const& request);

  virtual StatusOr<google::longrunning::Operation>
  InstantiateInlineWorkflowTemplate(
      NoAwaitTag, google::cloud::dataproc::v1::
                      InstantiateInlineWorkflowTemplateRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
  InstantiateInlineWorkflowTemplate(
      google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  UpdateWorkflowTemplate(
      google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const&
          request);

  virtual StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
  ListWorkflowTemplates(
      google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request);

  virtual Status DeleteWorkflowTemplate(
      google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `WorkflowTemplateServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * WorkflowTemplateServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `WorkflowTemplateServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dataproc_v1::WorkflowTemplateServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `WorkflowTemplateServiceConnection`
 * created by this function.
 */
std::shared_ptr<WorkflowTemplateServiceConnection>
MakeWorkflowTemplateServiceConnection(std::string const& location,
                                      Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<WorkflowTemplateServiceConnection>
MakeWorkflowTemplateServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_WORKFLOW_TEMPLATE_CONNECTION_H
