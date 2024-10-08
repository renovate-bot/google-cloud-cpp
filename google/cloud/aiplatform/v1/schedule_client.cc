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
// source: google/cloud/aiplatform/v1/schedule_service.proto

#include "google/cloud/aiplatform/v1/schedule_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ScheduleServiceClient::ScheduleServiceClient(
    std::shared_ptr<ScheduleServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ScheduleServiceClient::~ScheduleServiceClient() = default;

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::CreateSchedule(
    std::string const& parent,
    google::cloud::aiplatform::v1::Schedule const& schedule, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateScheduleRequest request;
  request.set_parent(parent);
  *request.mutable_schedule() = schedule;
  return connection_->CreateSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::CreateSchedule(
    google::cloud::aiplatform::v1::CreateScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSchedule(request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ScheduleServiceClient::DeleteSchedule(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteScheduleRequest request;
  request.set_name(name);
  return connection_->DeleteSchedule(request);
}

StatusOr<google::longrunning::Operation> ScheduleServiceClient::DeleteSchedule(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteScheduleRequest request;
  request.set_name(name);
  return connection_->DeleteSchedule(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ScheduleServiceClient::DeleteSchedule(
    google::cloud::aiplatform::v1::DeleteScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSchedule(request);
}

StatusOr<google::longrunning::Operation> ScheduleServiceClient::DeleteSchedule(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSchedule(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ScheduleServiceClient::DeleteSchedule(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSchedule(operation);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::GetSchedule(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetScheduleRequest request;
  request.set_name(name);
  return connection_->GetSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::GetSchedule(
    google::cloud::aiplatform::v1::GetScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSchedule(request);
}

StreamRange<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::ListSchedules(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListSchedulesRequest request;
  request.set_parent(parent);
  return connection_->ListSchedules(request);
}

StreamRange<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::ListSchedules(
    google::cloud::aiplatform::v1::ListSchedulesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSchedules(std::move(request));
}

Status ScheduleServiceClient::PauseSchedule(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::PauseScheduleRequest request;
  request.set_name(name);
  return connection_->PauseSchedule(request);
}

Status ScheduleServiceClient::PauseSchedule(
    google::cloud::aiplatform::v1::PauseScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PauseSchedule(request);
}

Status ScheduleServiceClient::ResumeSchedule(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ResumeScheduleRequest request;
  request.set_name(name);
  return connection_->ResumeSchedule(request);
}

Status ScheduleServiceClient::ResumeSchedule(std::string const& name,
                                             bool catch_up, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ResumeScheduleRequest request;
  request.set_name(name);
  request.set_catch_up(catch_up);
  return connection_->ResumeSchedule(request);
}

Status ScheduleServiceClient::ResumeSchedule(
    google::cloud::aiplatform::v1::ResumeScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResumeSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::UpdateSchedule(
    google::cloud::aiplatform::v1::Schedule const& schedule,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateScheduleRequest request;
  *request.mutable_schedule() = schedule;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSchedule(request);
}

StatusOr<google::cloud::aiplatform::v1::Schedule>
ScheduleServiceClient::UpdateSchedule(
    google::cloud::aiplatform::v1::UpdateScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSchedule(request);
}

StreamRange<google::cloud::location::Location>
ScheduleServiceClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location> ScheduleServiceClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StatusOr<google::iam::v1::Policy> ScheduleServiceClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ScheduleServiceClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ScheduleServiceClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
ScheduleServiceClient::ListOperations(std::string const& name,
                                      std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
ScheduleServiceClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> ScheduleServiceClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> ScheduleServiceClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status ScheduleServiceClient::DeleteOperation(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status ScheduleServiceClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status ScheduleServiceClient::CancelOperation(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status ScheduleServiceClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

StatusOr<google::longrunning::Operation> ScheduleServiceClient::WaitOperation(
    google::longrunning::WaitOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->WaitOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
