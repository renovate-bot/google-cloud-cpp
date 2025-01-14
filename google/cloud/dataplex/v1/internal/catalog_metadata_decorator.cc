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
// source: google/cloud/dataplex/v1/catalog.proto

#include "google/cloud/dataplex/v1/internal/catalog_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/catalog.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceMetadata::CatalogServiceMetadata(
    std::shared_ptr<CatalogServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncCreateEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateEntryType(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::CreateEntryType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEntryType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncUpdateEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("entry_type.name=",
                           internal::UrlEncode(request.entry_type().name())));
  return child_->AsyncUpdateEntryType(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::UpdateEntryType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("entry_type.name=",
                           internal::UrlEncode(request.entry_type().name())));
  return child_->UpdateEntryType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncDeleteEntryType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteEntryType(cq, std::move(context),
                                      std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::DeleteEntryType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEntryType(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListEntryTypesResponse>
CatalogServiceMetadata::ListEntryTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListEntryTypesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEntryTypes(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::EntryType>
CatalogServiceMetadata::GetEntryType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetEntryTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEntryType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncCreateAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateAspectType(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::CreateAspectType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAspectType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncUpdateAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("aspect_type.name=",
                           internal::UrlEncode(request.aspect_type().name())));
  return child_->AsyncUpdateAspectType(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::UpdateAspectType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("aspect_type.name=",
                           internal::UrlEncode(request.aspect_type().name())));
  return child_->UpdateAspectType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncDeleteAspectType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteAspectType(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::DeleteAspectType(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAspectType(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListAspectTypesResponse>
CatalogServiceMetadata::ListAspectTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListAspectTypesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAspectTypes(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::AspectType>
CatalogServiceMetadata::GetAspectType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetAspectTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAspectType(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncCreateEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateEntryGroup(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::CreateEntryGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEntryGroup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncUpdateEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("entry_group.name=",
                           internal::UrlEncode(request.entry_group().name())));
  return child_->AsyncUpdateEntryGroup(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::UpdateEntryGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("entry_group.name=",
                           internal::UrlEncode(request.entry_group().name())));
  return child_->UpdateEntryGroup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncDeleteEntryGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteEntryGroup(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::DeleteEntryGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEntryGroup(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListEntryGroupsResponse>
CatalogServiceMetadata::ListEntryGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListEntryGroupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEntryGroups(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceMetadata::GetEntryGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetEntryGroupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEntryGroup(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Entry>
CatalogServiceMetadata::CreateEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::CreateEntryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEntry(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Entry>
CatalogServiceMetadata::UpdateEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::UpdateEntryRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("entry.name=", internal::UrlEncode(request.entry().name())));
  return child_->UpdateEntry(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Entry>
CatalogServiceMetadata::DeleteEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::DeleteEntryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEntry(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListEntriesResponse>
CatalogServiceMetadata::ListEntries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListEntriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEntries(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceMetadata::GetEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetEntryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEntry(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Entry>
CatalogServiceMetadata::LookupEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::LookupEntryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->LookupEntry(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::SearchEntriesResponse>
CatalogServiceMetadata::SearchEntries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::SearchEntriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SearchEntries(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncCreateMetadataJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateMetadataJobRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateMetadataJob(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CatalogServiceMetadata::CreateMetadataJob(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateMetadataJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateMetadataJob(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::MetadataJob>
CatalogServiceMetadata::GetMetadataJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetMetadataJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMetadataJob(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListMetadataJobsResponse>
CatalogServiceMetadata::ListMetadataJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListMetadataJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMetadataJobs(context, options, request);
}

Status CatalogServiceMetadata::CancelMetadataJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::CancelMetadataJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelMetadataJob(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
CatalogServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> CatalogServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> CatalogServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> CatalogServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CatalogServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
CatalogServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> CatalogServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status CatalogServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status CatalogServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CatalogServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> CatalogServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void CatalogServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CatalogServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
