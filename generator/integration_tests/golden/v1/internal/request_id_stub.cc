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
// source: generator/integration_tests/test_request_id.proto

#include "generator/integration_tests/golden/v1/internal/request_id_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test_request_id.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RequestIdServiceStub::~RequestIdServiceStub() = default;

StatusOr<google::test::requestid::v1::Foo>
DefaultRequestIdServiceStub::CreateFoo(
  grpc::ClientContext& context, Options const&,
  google::test::requestid::v1::CreateFooRequest const& request) {
    google::test::requestid::v1::Foo response;
    auto status =
        grpc_stub_->CreateFoo(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRequestIdServiceStub::AsyncRenameFoo(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions,
      google::test::requestid::v1::RenameFooRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::requestid::v1::RenameFooRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::requestid::v1::RenameFooRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRenameFoo(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultRequestIdServiceStub::RenameFoo(
      grpc::ClientContext& context,
      Options,
      google::test::requestid::v1::RenameFooRequest const& request) {
    google::longrunning::Operation response;
    auto status =
        grpc_stub_->RenameFoo(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::requestid::v1::ListFoosResponse>
DefaultRequestIdServiceStub::ListFoos(
  grpc::ClientContext& context, Options const&,
  google::test::requestid::v1::ListFoosRequest const& request) {
    google::test::requestid::v1::ListFoosResponse response;
    auto status =
        grpc_stub_->ListFoos(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::test::requestid::v1::Foo>>
DefaultRequestIdServiceStub::AsyncCreateFoo(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::test::requestid::v1::CreateFooRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::test::requestid::v1::CreateFooRequest,
                                    google::test::requestid::v1::Foo>(
      cq,
      [this](grpc::ClientContext* context,
             google::test::requestid::v1::CreateFooRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFoo(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultRequestIdServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultRequestIdServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::CancelOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncCancelOperation(context, request, cq);
      },
      request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
