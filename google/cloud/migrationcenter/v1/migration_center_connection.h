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
// source: google/cloud/migrationcenter/v1/migrationcenter.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_MIGRATION_CENTER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_MIGRATION_CENTER_CONNECTION_H

#include "google/cloud/migrationcenter/v1/internal/migration_center_retry_traits.h"
#include "google/cloud/migrationcenter/v1/migration_center_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/migrationcenter/v1/migrationcenter.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace migrationcenter_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `MigrationCenterConnection`.
class MigrationCenterRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<MigrationCenterRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `MigrationCenterConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class MigrationCenterLimitedErrorCountRetryPolicy
    : public MigrationCenterRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit MigrationCenterLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  MigrationCenterLimitedErrorCountRetryPolicy(
      MigrationCenterLimitedErrorCountRetryPolicy&& rhs) noexcept
      : MigrationCenterLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  MigrationCenterLimitedErrorCountRetryPolicy(
      MigrationCenterLimitedErrorCountRetryPolicy const& rhs) noexcept
      : MigrationCenterLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<MigrationCenterRetryPolicy> clone() const override {
    return std::make_unique<MigrationCenterLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = MigrationCenterRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      migrationcenter_v1_internal::MigrationCenterRetryTraits>
      impl_;
};

/**
 * A retry policy for `MigrationCenterConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class MigrationCenterLimitedTimeRetryPolicy
    : public MigrationCenterRetryPolicy {
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
  explicit MigrationCenterLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  MigrationCenterLimitedTimeRetryPolicy(
      MigrationCenterLimitedTimeRetryPolicy&& rhs) noexcept
      : MigrationCenterLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  MigrationCenterLimitedTimeRetryPolicy(
      MigrationCenterLimitedTimeRetryPolicy const& rhs) noexcept
      : MigrationCenterLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<MigrationCenterRetryPolicy> clone() const override {
    return std::make_unique<MigrationCenterLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = MigrationCenterRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      migrationcenter_v1_internal::MigrationCenterRetryTraits>
      impl_;
};

/**
 * The `MigrationCenterConnection` object for `MigrationCenterClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `MigrationCenterClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `MigrationCenterClient`.
 *
 * To create a concrete instance, see `MakeMigrationCenterConnection()`.
 *
 * For mocking, see `migrationcenter_v1_mocks::MockMigrationCenterConnection`.
 */
class MigrationCenterConnection {
 public:
  virtual ~MigrationCenterConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::migrationcenter::v1::Asset> ListAssets(
      google::cloud::migrationcenter::v1::ListAssetsRequest request);

  virtual StatusOr<google::cloud::migrationcenter::v1::Asset> GetAsset(
      google::cloud::migrationcenter::v1::GetAssetRequest const& request);

  virtual StatusOr<google::cloud::migrationcenter::v1::Asset> UpdateAsset(
      google::cloud::migrationcenter::v1::UpdateAssetRequest const& request);

  virtual StatusOr<
      google::cloud::migrationcenter::v1::BatchUpdateAssetsResponse>
  BatchUpdateAssets(
      google::cloud::migrationcenter::v1::BatchUpdateAssetsRequest const&
          request);

  virtual Status DeleteAsset(
      google::cloud::migrationcenter::v1::DeleteAssetRequest const& request);

  virtual Status BatchDeleteAssets(
      google::cloud::migrationcenter::v1::BatchDeleteAssetsRequest const&
          request);

  virtual StatusOr<
      google::cloud::migrationcenter::v1::ReportAssetFramesResponse>
  ReportAssetFrames(
      google::cloud::migrationcenter::v1::ReportAssetFramesRequest const&
          request);

  virtual StatusOr<
      google::cloud::migrationcenter::v1::AggregateAssetsValuesResponse>
  AggregateAssetsValues(
      google::cloud::migrationcenter::v1::AggregateAssetsValuesRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>
  CreateImportJob(
      google::cloud::migrationcenter::v1::CreateImportJobRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateImportJob(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::CreateImportJobRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>
  CreateImportJob(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::migrationcenter::v1::ImportJob>
  ListImportJobs(
      google::cloud::migrationcenter::v1::ListImportJobsRequest request);

  virtual StatusOr<google::cloud::migrationcenter::v1::ImportJob> GetImportJob(
      google::cloud::migrationcenter::v1::GetImportJobRequest const& request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteImportJob(
      google::cloud::migrationcenter::v1::DeleteImportJobRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteImportJob(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::DeleteImportJobRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteImportJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>
  UpdateImportJob(
      google::cloud::migrationcenter::v1::UpdateImportJobRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateImportJob(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::UpdateImportJobRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>
  UpdateImportJob(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  ValidateImportJob(
      google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> ValidateImportJob(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  ValidateImportJob(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  RunImportJob(
      google::cloud::migrationcenter::v1::RunImportJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RunImportJob(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::RunImportJobRequest const& request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  RunImportJob(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>
  GetImportDataFile(
      google::cloud::migrationcenter::v1::GetImportDataFileRequest const&
          request);

  virtual StreamRange<google::cloud::migrationcenter::v1::ImportDataFile>
  ListImportDataFiles(
      google::cloud::migrationcenter::v1::ListImportDataFilesRequest request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>>
  CreateImportDataFile(
      google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateImportDataFile(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>>
  CreateImportDataFile(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteImportDataFile(
      google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteImportDataFile(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteImportDataFile(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::migrationcenter::v1::Group> ListGroups(
      google::cloud::migrationcenter::v1::ListGroupsRequest request);

  virtual StatusOr<google::cloud::migrationcenter::v1::Group> GetGroup(
      google::cloud::migrationcenter::v1::GetGroupRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Group>>
  CreateGroup(
      google::cloud::migrationcenter::v1::CreateGroupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateGroup(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::CreateGroupRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Group>>
  CreateGroup(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Group>>
  UpdateGroup(
      google::cloud::migrationcenter::v1::UpdateGroupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateGroup(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::UpdateGroupRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Group>>
  UpdateGroup(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteGroup(
      google::cloud::migrationcenter::v1::DeleteGroupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteGroup(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::DeleteGroupRequest const& request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteGroup(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Group>>
  AddAssetsToGroup(
      google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> AddAssetsToGroup(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Group>>
  AddAssetsToGroup(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Group>>
  RemoveAssetsFromGroup(
      google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> RemoveAssetsFromGroup(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Group>>
  RemoveAssetsFromGroup(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::migrationcenter::v1::ErrorFrame>
  ListErrorFrames(
      google::cloud::migrationcenter::v1::ListErrorFramesRequest request);

  virtual StatusOr<google::cloud::migrationcenter::v1::ErrorFrame>
  GetErrorFrame(
      google::cloud::migrationcenter::v1::GetErrorFrameRequest const& request);

  virtual StreamRange<google::cloud::migrationcenter::v1::Source> ListSources(
      google::cloud::migrationcenter::v1::ListSourcesRequest request);

  virtual StatusOr<google::cloud::migrationcenter::v1::Source> GetSource(
      google::cloud::migrationcenter::v1::GetSourceRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Source>>
  CreateSource(
      google::cloud::migrationcenter::v1::CreateSourceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateSource(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::CreateSourceRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Source>>
  CreateSource(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Source>>
  UpdateSource(
      google::cloud::migrationcenter::v1::UpdateSourceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateSource(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::UpdateSourceRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Source>>
  UpdateSource(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteSource(
      google::cloud::migrationcenter::v1::DeleteSourceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteSource(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::DeleteSourceRequest const& request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteSource(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::migrationcenter::v1::PreferenceSet>
  ListPreferenceSets(
      google::cloud::migrationcenter::v1::ListPreferenceSetsRequest request);

  virtual StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>
  GetPreferenceSet(
      google::cloud::migrationcenter::v1::GetPreferenceSetRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>
  CreatePreferenceSet(
      google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreatePreferenceSet(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>
  CreatePreferenceSet(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>
  UpdatePreferenceSet(
      google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdatePreferenceSet(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>
  UpdatePreferenceSet(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeletePreferenceSet(
      google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeletePreferenceSet(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeletePreferenceSet(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::migrationcenter::v1::Settings> GetSettings(
      google::cloud::migrationcenter::v1::GetSettingsRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Settings>>
  UpdateSettings(
      google::cloud::migrationcenter::v1::UpdateSettingsRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateSettings(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::UpdateSettingsRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Settings>>
  UpdateSettings(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::ReportConfig>>
  CreateReportConfig(
      google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateReportConfig(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
          request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::ReportConfig>>
  CreateReportConfig(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::migrationcenter::v1::ReportConfig>
  GetReportConfig(
      google::cloud::migrationcenter::v1::GetReportConfigRequest const&
          request);

  virtual StreamRange<google::cloud::migrationcenter::v1::ReportConfig>
  ListReportConfigs(
      google::cloud::migrationcenter::v1::ListReportConfigsRequest request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteReportConfig(
      google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteReportConfig(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteReportConfig(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Report>>
  CreateReport(
      google::cloud::migrationcenter::v1::CreateReportRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateReport(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::CreateReportRequest const& request);

  virtual future<StatusOr<google::cloud::migrationcenter::v1::Report>>
  CreateReport(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::migrationcenter::v1::Report> GetReport(
      google::cloud::migrationcenter::v1::GetReportRequest const& request);

  virtual StreamRange<google::cloud::migrationcenter::v1::Report> ListReports(
      google::cloud::migrationcenter::v1::ListReportsRequest request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteReport(
      google::cloud::migrationcenter::v1::DeleteReportRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteReport(
      NoAwaitTag,
      google::cloud::migrationcenter::v1::DeleteReportRequest const& request);

  virtual future<
      StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>
  DeleteReport(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

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
 * `MigrationCenterConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of MigrationCenterClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `MigrationCenterConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::migrationcenter_v1::MigrationCenterPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `MigrationCenterConnection` created
 * by this function.
 */
std::shared_ptr<MigrationCenterConnection> MakeMigrationCenterConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace migrationcenter_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_MIGRATION_CENTER_CONNECTION_H
