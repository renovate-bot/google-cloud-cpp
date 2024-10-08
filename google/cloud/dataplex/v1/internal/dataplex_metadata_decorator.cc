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
// source: google/cloud/dataplex/v1/service.proto

#include "google/cloud/dataplex/v1/internal/dataplex_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/service.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataplexServiceMetadata::DataplexServiceMetadata(
    std::shared_ptr<DataplexServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateLakeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateLake(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::CreateLake(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateLakeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateLake(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("lake.name=", internal::UrlEncode(request.lake().name())));
  return child_->AsyncUpdateLake(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::UpdateLake(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("lake.name=", internal::UrlEncode(request.lake().name())));
  return child_->UpdateLake(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteLake(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::DeleteLake(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteLake(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListLakesResponse>
DataplexServiceMetadata::ListLakes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListLakesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListLakes(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Lake> DataplexServiceMetadata::GetLake(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetLakeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLake(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceMetadata::ListLakeActions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListLakeActionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListLakeActions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateZoneRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateZone(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::CreateZone(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateZoneRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateZone(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("zone.name=", internal::UrlEncode(request.zone().name())));
  return child_->AsyncUpdateZone(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::UpdateZone(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("zone.name=", internal::UrlEncode(request.zone().name())));
  return child_->UpdateZone(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteZone(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::DeleteZone(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteZone(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListZonesResponse>
DataplexServiceMetadata::ListZones(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListZonesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListZones(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Zone> DataplexServiceMetadata::GetZone(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetZoneRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetZone(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceMetadata::ListZoneActions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListZoneActionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListZoneActions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateAssetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateAsset(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::CreateAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateAssetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAsset(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("asset.name=", internal::UrlEncode(request.asset().name())));
  return child_->AsyncUpdateAsset(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::UpdateAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("asset.name=", internal::UrlEncode(request.asset().name())));
  return child_->UpdateAsset(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteAsset(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::DeleteAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAsset(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListAssetsResponse>
DataplexServiceMetadata::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListAssetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAssets(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Asset> DataplexServiceMetadata::GetAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetAssetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAsset(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceMetadata::ListAssetActions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListAssetActionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAssetActions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateTaskRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateTask(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::CreateTask(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateTaskRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTask(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("task.name=", internal::UrlEncode(request.task().name())));
  return child_->AsyncUpdateTask(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::UpdateTask(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("task.name=", internal::UrlEncode(request.task().name())));
  return child_->UpdateTask(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTask(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::DeleteTask(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTask(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListTasksResponse>
DataplexServiceMetadata::ListTasks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListTasksRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTasks(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Task> DataplexServiceMetadata::GetTask(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetTaskRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTask(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListJobsResponse>
DataplexServiceMetadata::ListJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListJobs(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::RunTaskResponse>
DataplexServiceMetadata::RunTask(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::RunTaskRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RunTask(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Job> DataplexServiceMetadata::GetJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetJob(context, options, request);
}

Status DataplexServiceMetadata::CancelJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::CancelJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateEnvironmentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateEnvironment(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataplexServiceMetadata::CreateEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("environment.name=",
                           internal::UrlEncode(request.environment().name())));
  return child_->AsyncUpdateEnvironment(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataplexServiceMetadata::UpdateEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("environment.name=",
                           internal::UrlEncode(request.environment().name())));
  return child_->UpdateEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteEnvironment(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataplexServiceMetadata::DeleteEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEnvironment(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListEnvironmentsResponse>
DataplexServiceMetadata::ListEnvironments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListEnvironmentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEnvironments(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Environment>
DataplexServiceMetadata::GetEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEnvironment(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListSessionsResponse>
DataplexServiceMetadata::ListSessions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListSessionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSessions(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
DataplexServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
DataplexServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> DataplexServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> DataplexServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataplexServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
DataplexServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> DataplexServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status DataplexServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status DataplexServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> DataplexServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void DataplexServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DataplexServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
