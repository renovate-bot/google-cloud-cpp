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
// source: google/cloud/dataplex/v1/datascans.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_DATA_SCAN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_DATA_SCAN_CONNECTION_H

#include "google/cloud/dataplex/v1/data_scan_connection_idempotency_policy.h"
#include "google/cloud/dataplex/v1/internal/data_scan_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dataplex/v1/datascans.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DataScanServiceConnection`.
class DataScanServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DataScanServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DataScanServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataScanServiceLimitedErrorCountRetryPolicy
    : public DataScanServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DataScanServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DataScanServiceLimitedErrorCountRetryPolicy(
      DataScanServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DataScanServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DataScanServiceLimitedErrorCountRetryPolicy(
      DataScanServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DataScanServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DataScanServiceRetryPolicy> clone() const override {
    return std::make_unique<DataScanServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataScanServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dataplex_v1_internal::DataScanServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `DataScanServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataScanServiceLimitedTimeRetryPolicy
    : public DataScanServiceRetryPolicy {
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
  explicit DataScanServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DataScanServiceLimitedTimeRetryPolicy(
      DataScanServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : DataScanServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DataScanServiceLimitedTimeRetryPolicy(
      DataScanServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : DataScanServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DataScanServiceRetryPolicy> clone() const override {
    return std::make_unique<DataScanServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataScanServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dataplex_v1_internal::DataScanServiceRetryTraits>
      impl_;
};

/**
 * The `DataScanServiceConnection` object for `DataScanServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DataScanServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DataScanServiceClient`.
 *
 * To create a concrete instance, see `MakeDataScanServiceConnection()`.
 *
 * For mocking, see `dataplex_v1_mocks::MockDataScanServiceConnection`.
 */
class DataScanServiceConnection {
 public:
  virtual ~DataScanServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::dataplex::v1::DataScan>>
  CreateDataScan(
      google::cloud::dataplex::v1::CreateDataScanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateDataScan(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateDataScanRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::DataScan>>
  CreateDataScan(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::DataScan>>
  UpdateDataScan(
      google::cloud::dataplex::v1::UpdateDataScanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateDataScan(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateDataScanRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::DataScan>>
  UpdateDataScan(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteDataScan(
      google::cloud::dataplex::v1::DeleteDataScanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteDataScan(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteDataScanRequest const& request);

  virtual future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteDataScan(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::dataplex::v1::DataScan> GetDataScan(
      google::cloud::dataplex::v1::GetDataScanRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::DataScan> ListDataScans(
      google::cloud::dataplex::v1::ListDataScansRequest request);

  virtual StatusOr<google::cloud::dataplex::v1::RunDataScanResponse>
  RunDataScan(google::cloud::dataplex::v1::RunDataScanRequest const& request);

  virtual StatusOr<google::cloud::dataplex::v1::DataScanJob> GetDataScanJob(
      google::cloud::dataplex::v1::GetDataScanJobRequest const& request);

  virtual StreamRange<google::cloud::dataplex::v1::DataScanJob>
  ListDataScanJobs(
      google::cloud::dataplex::v1::ListDataScanJobsRequest request);

  virtual StatusOr<
      google::cloud::dataplex::v1::GenerateDataQualityRulesResponse>
  GenerateDataQualityRules(
      google::cloud::dataplex::v1::GenerateDataQualityRulesRequest const&
          request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

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
 * `DataScanServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DataScanServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DataScanServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dataplex_v1::DataScanServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DataScanServiceConnection` created
 * by this function.
 */
std::shared_ptr<DataScanServiceConnection> MakeDataScanServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_DATA_SCAN_CONNECTION_H
