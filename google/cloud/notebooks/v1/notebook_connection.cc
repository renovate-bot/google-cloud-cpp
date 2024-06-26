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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/notebook_connection.h"
#include "google/cloud/notebooks/v1/internal/notebook_connection_impl.h"
#include "google/cloud/notebooks/v1/internal/notebook_option_defaults.h"
#include "google/cloud/notebooks/v1/internal/notebook_stub_factory.h"
#include "google/cloud/notebooks/v1/internal/notebook_tracing_connection.h"
#include "google/cloud/notebooks/v1/notebook_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceConnection::~NotebookServiceConnection() = default;

StreamRange<google::cloud::notebooks::v1::Instance>
NotebookServiceConnection::ListInstances(
    google::cloud::notebooks::v1::
        ListInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::notebooks::v1::Instance>>();
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceConnection::GetInstance(
    google::cloud::notebooks::v1::GetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::CreateInstance(
    google::cloud::notebooks::v1::CreateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::CreateInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::CreateInstance(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::RegisterInstance(
    google::cloud::notebooks::v1::RegisterInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::RegisterInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::RegisterInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::RegisterInstance(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::SetInstanceAccelerator(
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::SetInstanceAccelerator(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::SetInstanceAccelerator(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::SetInstanceMachineType(
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::SetInstanceMachineType(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::SetInstanceMachineType(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::UpdateInstanceConfig(
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::UpdateInstanceConfig(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::UpdateInstanceConfig(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::UpdateShieldedInstanceConfig(
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::UpdateShieldedInstanceConfig(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::UpdateShieldedInstanceConfig(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::SetInstanceLabels(
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::SetInstanceLabels(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::SetInstanceLabels(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
NotebookServiceConnection::UpdateInstanceMetadataItems(
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceConnection::DeleteInstance(
    google::cloud::notebooks::v1::DeleteInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::DeleteInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceConnection::DeleteInstance(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::StartInstance(
    google::cloud::notebooks::v1::StartInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::StartInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::StartInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::StartInstance(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::StopInstance(
    google::cloud::notebooks::v1::StopInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::StopInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::StopInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::StopInstance(ExperimentalTag,
                                        google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::ResetInstance(
    google::cloud::notebooks::v1::ResetInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::ResetInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::ResetInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::ResetInstance(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::ReportInstanceInfo(
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::ReportInstanceInfo(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::ReportInstanceInfo(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
NotebookServiceConnection::IsInstanceUpgradeable(
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceConnection::GetInstanceHealth(
    google::cloud::notebooks::v1::GetInstanceHealthRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::UpgradeInstance(
    google::cloud::notebooks::v1::UpgradeInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::UpgradeInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpgradeInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::UpgradeInstance(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::RollbackInstance(
    google::cloud::notebooks::v1::RollbackInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::RollbackInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::RollbackInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::RollbackInstance(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::DiagnoseInstance(
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::DiagnoseInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::DiagnoseInstance(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::UpgradeInstanceInternal(
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::UpgradeInstanceInternal(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceConnection::UpgradeInstanceInternal(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::notebooks::v1::Environment>
NotebookServiceConnection::ListEnvironments(
    google::cloud::notebooks::v1::
        ListEnvironmentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::notebooks::v1::Environment>>();
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceConnection::GetEnvironment(
    google::cloud::notebooks::v1::GetEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::Environment>>
NotebookServiceConnection::CreateEnvironment(
    google::cloud::notebooks::v1::CreateEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Environment>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::CreateEnvironment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateEnvironmentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Environment>>
NotebookServiceConnection::CreateEnvironment(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Environment>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceConnection::DeleteEnvironment(
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::DeleteEnvironment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceConnection::DeleteEnvironment(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::notebooks::v1::Schedule>
NotebookServiceConnection::ListSchedules(
    google::cloud::notebooks::v1::
        ListSchedulesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::notebooks::v1::Schedule>>();
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceConnection::GetSchedule(
    google::cloud::notebooks::v1::GetScheduleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceConnection::DeleteSchedule(
    google::cloud::notebooks::v1::DeleteScheduleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::DeleteSchedule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteScheduleRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceConnection::DeleteSchedule(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceConnection::CreateSchedule(
    google::cloud::notebooks::v1::CreateScheduleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Schedule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::CreateSchedule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateScheduleRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceConnection::CreateSchedule(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Schedule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceConnection::TriggerSchedule(
    google::cloud::notebooks::v1::TriggerScheduleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Schedule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::TriggerSchedule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::TriggerScheduleRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceConnection::TriggerSchedule(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Schedule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::notebooks::v1::Execution>
NotebookServiceConnection::ListExecutions(
    google::cloud::notebooks::v1::
        ListExecutionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::notebooks::v1::Execution>>();
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceConnection::GetExecution(
    google::cloud::notebooks::v1::GetExecutionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceConnection::DeleteExecution(
    google::cloud::notebooks::v1::DeleteExecutionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::DeleteExecution(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteExecutionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceConnection::DeleteExecution(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Execution>>
NotebookServiceConnection::CreateExecution(
    google::cloud::notebooks::v1::CreateExecutionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Execution>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NotebookServiceConnection::CreateExecution(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateExecutionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Execution>>
NotebookServiceConnection::CreateExecution(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Execution>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<NotebookServiceConnection> MakeNotebookServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 NotebookServicePolicyOptionList>(options,
                                                                  __func__);
  options =
      notebooks_v1_internal::NotebookServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = notebooks_v1_internal::CreateDefaultNotebookServiceStub(
      std::move(auth), options);
  return notebooks_v1_internal::MakeNotebookServiceTracingConnection(
      std::make_shared<notebooks_v1_internal::NotebookServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1
}  // namespace cloud
}  // namespace google
