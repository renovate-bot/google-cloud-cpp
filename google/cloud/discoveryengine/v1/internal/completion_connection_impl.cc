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
// source: google/cloud/discoveryengine/v1/completion_service.proto

#include "google/cloud/discoveryengine/v1/internal/completion_connection_impl.h"
#include "google/cloud/discoveryengine/v1/internal/completion_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<discoveryengine_v1::CompletionServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<discoveryengine_v1::CompletionServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<discoveryengine_v1::CompletionServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    discoveryengine_v1::CompletionServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<discoveryengine_v1::
               CompletionServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<discoveryengine_v1::CompletionServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

CompletionServiceConnectionImpl::CompletionServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<discoveryengine_v1_internal::CompletionServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), CompletionServiceConnection::options())) {}

StatusOr<google::cloud::discoveryengine::v1::CompleteQueryResponse>
CompletionServiceConnectionImpl::CompleteQuery(
    google::cloud::discoveryengine::v1::CompleteQueryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CompleteQuery(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::CompleteQueryRequest const&
                 request) {
        return stub_->CompleteQuery(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::
                    ImportSuggestionDenyListEntriesResponse>>
CompletionServiceConnectionImpl::ImportSuggestionDenyListEntries(
    google::cloud::discoveryengine::v1::
        ImportSuggestionDenyListEntriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportSuggestionDenyListEntries(
          request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::discoveryengine::v1::
          ImportSuggestionDenyListEntriesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::discoveryengine::v1::
              ImportSuggestionDenyListEntriesRequest const& request) {
        return stub->AsyncImportSuggestionDenyListEntries(
            cq, std::move(context), std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::
              ImportSuggestionDenyListEntriesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CompletionServiceConnectionImpl::ImportSuggestionDenyListEntries(
    NoAwaitTag, google::cloud::discoveryengine::v1::
                    ImportSuggestionDenyListEntriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportSuggestionDenyListEntries(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::
                 ImportSuggestionDenyListEntriesRequest const& request) {
        return stub_->ImportSuggestionDenyListEntries(context, options,
                                                      request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::
                    ImportSuggestionDenyListEntriesResponse>>
CompletionServiceConnectionImpl::ImportSuggestionDenyListEntries(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::discoveryengine::v1::
                   ImportSuggestionDenyListEntriesMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::discoveryengine::v1::
                     ImportSuggestionDenyListEntriesResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ImportSuggestionDenyListEntries",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::discoveryengine::v1::
          ImportSuggestionDenyListEntriesResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::
              ImportSuggestionDenyListEntriesResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<
    google::cloud::discoveryengine::v1::PurgeSuggestionDenyListEntriesResponse>>
CompletionServiceConnectionImpl::PurgeSuggestionDenyListEntries(
    google::cloud::discoveryengine::v1::
        PurgeSuggestionDenyListEntriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeSuggestionDenyListEntries(
          request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::discoveryengine::v1::
          PurgeSuggestionDenyListEntriesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::discoveryengine::v1::
                         PurgeSuggestionDenyListEntriesRequest const& request) {
        return stub->AsyncPurgeSuggestionDenyListEntries(
            cq, std::move(context), std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::
              PurgeSuggestionDenyListEntriesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CompletionServiceConnectionImpl::PurgeSuggestionDenyListEntries(
    NoAwaitTag, google::cloud::discoveryengine::v1::
                    PurgeSuggestionDenyListEntriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PurgeSuggestionDenyListEntries(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::
                 PurgeSuggestionDenyListEntriesRequest const& request) {
        return stub_->PurgeSuggestionDenyListEntries(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<
    google::cloud::discoveryengine::v1::PurgeSuggestionDenyListEntriesResponse>>
CompletionServiceConnectionImpl::PurgeSuggestionDenyListEntries(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::discoveryengine::v1::
                   PurgeSuggestionDenyListEntriesMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::discoveryengine::v1::
                     PurgeSuggestionDenyListEntriesResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to PurgeSuggestionDenyListEntries",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::discoveryengine::v1::
          PurgeSuggestionDenyListEntriesResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::
              PurgeSuggestionDenyListEntriesResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<
    google::cloud::discoveryengine::v1::ImportCompletionSuggestionsResponse>>
CompletionServiceConnectionImpl::ImportCompletionSuggestions(
    google::cloud::discoveryengine::v1::
        ImportCompletionSuggestionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportCompletionSuggestions(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::discoveryengine::v1::ImportCompletionSuggestionsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::discoveryengine::v1::
                         ImportCompletionSuggestionsRequest const& request) {
        return stub->AsyncImportCompletionSuggestions(
            cq, std::move(context), std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::
              ImportCompletionSuggestionsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CompletionServiceConnectionImpl::ImportCompletionSuggestions(
    NoAwaitTag, google::cloud::discoveryengine::v1::
                    ImportCompletionSuggestionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportCompletionSuggestions(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::
                 ImportCompletionSuggestionsRequest const& request) {
        return stub_->ImportCompletionSuggestions(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<
    google::cloud::discoveryengine::v1::ImportCompletionSuggestionsResponse>>
CompletionServiceConnectionImpl::ImportCompletionSuggestions(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::discoveryengine::v1::
                   ImportCompletionSuggestionsMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::discoveryengine::v1::
                                          ImportCompletionSuggestionsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ImportCompletionSuggestions",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::discoveryengine::v1::ImportCompletionSuggestionsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::
              ImportCompletionSuggestionsResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsResponse>>
CompletionServiceConnectionImpl::PurgeCompletionSuggestions(
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeCompletionSuggestions(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::discoveryengine::v1::
                         PurgeCompletionSuggestionsRequest const& request) {
        return stub->AsyncPurgeCompletionSuggestions(
            cq, std::move(context), std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::
              PurgeCompletionSuggestionsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CompletionServiceConnectionImpl::PurgeCompletionSuggestions(
    NoAwaitTag,
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PurgeCompletionSuggestions(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::
                 PurgeCompletionSuggestionsRequest const& request) {
        return stub_->PurgeCompletionSuggestions(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsResponse>>
CompletionServiceConnectionImpl::PurgeCompletionSuggestions(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::discoveryengine::v1::
                   PurgeCompletionSuggestionsMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::discoveryengine::v1::
                                          PurgeCompletionSuggestionsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to PurgeCompletionSuggestions",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::
              PurgeCompletionSuggestionsResponse>,
      polling_policy(*current), __func__);
}

StreamRange<google::longrunning::Operation>
CompletionServiceConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<discoveryengine_v1::CompletionServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::longrunning::ListOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::longrunning::ListOperationsRequest const& request) {
              return stub->ListOperations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::longrunning::ListOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::longrunning::Operation>
CompletionServiceConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

Status CompletionServiceConnectionImpl::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return stub_->CancelOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
