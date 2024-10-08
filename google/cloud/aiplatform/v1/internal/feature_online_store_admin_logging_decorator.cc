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
// source: google/cloud/aiplatform/v1/feature_online_store_admin_service.proto

#include "google/cloud/aiplatform/v1/internal/feature_online_store_admin_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/feature_online_store_admin_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeatureOnlineStoreAdminServiceLogging::FeatureOnlineStoreAdminServiceLogging(
    std::shared_ptr<FeatureOnlineStoreAdminServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
FeatureOnlineStoreAdminServiceLogging::AsyncCreateFeatureOnlineStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
              request) {
        return child_->AsyncCreateFeatureOnlineStore(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeatureOnlineStoreAdminServiceLogging::CreateFeatureOnlineStore(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CreateFeatureOnlineStoreRequest const&
              request) {
        return child_->CreateFeatureOnlineStore(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::FeatureOnlineStore>
FeatureOnlineStoreAdminServiceLogging::GetFeatureOnlineStore(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetFeatureOnlineStoreRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetFeatureOnlineStoreRequest const&
                 request) {
        return child_->GetFeatureOnlineStore(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListFeatureOnlineStoresResponse>
FeatureOnlineStoreAdminServiceLogging::ListFeatureOnlineStores(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListFeatureOnlineStoresRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ListFeatureOnlineStoresRequest const&
              request) {
        return child_->ListFeatureOnlineStores(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeatureOnlineStoreAdminServiceLogging::AsyncUpdateFeatureOnlineStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
              request) {
        return child_->AsyncUpdateFeatureOnlineStore(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeatureOnlineStoreAdminServiceLogging::UpdateFeatureOnlineStore(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::UpdateFeatureOnlineStoreRequest const&
              request) {
        return child_->UpdateFeatureOnlineStore(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeatureOnlineStoreAdminServiceLogging::AsyncDeleteFeatureOnlineStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
              request) {
        return child_->AsyncDeleteFeatureOnlineStore(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeatureOnlineStoreAdminServiceLogging::DeleteFeatureOnlineStore(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::DeleteFeatureOnlineStoreRequest const&
              request) {
        return child_->DeleteFeatureOnlineStore(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeatureOnlineStoreAdminServiceLogging::AsyncCreateFeatureView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::CreateFeatureViewRequest const&
                 request) {
        return child_->AsyncCreateFeatureView(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeatureOnlineStoreAdminServiceLogging::CreateFeatureView(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateFeatureViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateFeatureViewRequest const&
                 request) {
        return child_->CreateFeatureView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::FeatureView>
FeatureOnlineStoreAdminServiceLogging::GetFeatureView(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetFeatureViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetFeatureViewRequest const& request) {
        return child_->GetFeatureView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListFeatureViewsResponse>
FeatureOnlineStoreAdminServiceLogging::ListFeatureViews(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListFeatureViewsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListFeatureViewsRequest const&
                 request) {
        return child_->ListFeatureViews(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeatureOnlineStoreAdminServiceLogging::AsyncUpdateFeatureView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::UpdateFeatureViewRequest const&
                 request) {
        return child_->AsyncUpdateFeatureView(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeatureOnlineStoreAdminServiceLogging::UpdateFeatureView(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdateFeatureViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::UpdateFeatureViewRequest const&
                 request) {
        return child_->UpdateFeatureView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeatureOnlineStoreAdminServiceLogging::AsyncDeleteFeatureView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeleteFeatureViewRequest const&
                 request) {
        return child_->AsyncDeleteFeatureView(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeatureOnlineStoreAdminServiceLogging::DeleteFeatureView(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteFeatureViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::DeleteFeatureViewRequest const&
                 request) {
        return child_->DeleteFeatureView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::SyncFeatureViewResponse>
FeatureOnlineStoreAdminServiceLogging::SyncFeatureView(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::SyncFeatureViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::SyncFeatureViewRequest const&
                 request) {
        return child_->SyncFeatureView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::FeatureViewSync>
FeatureOnlineStoreAdminServiceLogging::GetFeatureViewSync(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetFeatureViewSyncRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetFeatureViewSyncRequest const&
                 request) {
        return child_->GetFeatureViewSync(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListFeatureViewSyncsResponse>
FeatureOnlineStoreAdminServiceLogging::ListFeatureViewSyncs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListFeatureViewSyncsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListFeatureViewSyncsRequest const&
                 request) {
        return child_->ListFeatureViewSyncs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
FeatureOnlineStoreAdminServiceLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location>
FeatureOnlineStoreAdminServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy>
FeatureOnlineStoreAdminServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy>
FeatureOnlineStoreAdminServiceLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
FeatureOnlineStoreAdminServiceLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
FeatureOnlineStoreAdminServiceLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeatureOnlineStoreAdminServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status FeatureOnlineStoreAdminServiceLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status FeatureOnlineStoreAdminServiceLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation>
FeatureOnlineStoreAdminServiceLogging::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::WaitOperationRequest const& request) {
        return child_->WaitOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
FeatureOnlineStoreAdminServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> FeatureOnlineStoreAdminServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
