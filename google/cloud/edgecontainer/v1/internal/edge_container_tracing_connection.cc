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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/v1/internal/edge_container_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EdgeContainerTracingConnection::EdgeContainerTracingConnection(
    std::shared_ptr<edgecontainer_v1::EdgeContainerConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerTracingConnection::ListClusters(
    google::cloud::edgecontainer::v1::ListClustersRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::ListClusters");
  internal::OTelScope scope(span);
  auto sr = child_->ListClusters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::edgecontainer::v1::Cluster>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerTracingConnection::GetCluster(
    google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCluster(request));
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerTracingConnection::CreateCluster(
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateCluster(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::CreateCluster(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateCluster(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerTracingConnection::CreateCluster(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateCluster(operation));
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerTracingConnection::UpdateCluster(
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpdateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateCluster(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::UpdateCluster(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpdateCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateCluster(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerTracingConnection::UpdateCluster(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpdateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateCluster(operation));
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerTracingConnection::UpgradeCluster(
    google::cloud::edgecontainer::v1::UpgradeClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpgradeCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeCluster(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::UpgradeCluster(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::UpgradeClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpgradeCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpgradeCluster(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerTracingConnection::UpgradeCluster(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpgradeCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeCluster(operation));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteCluster(
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteCluster(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::DeleteCluster(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteCluster(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteCluster(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteCluster(operation));
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
EdgeContainerTracingConnection::GenerateAccessToken(
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
        request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GenerateAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateAccessToken(request));
}

StatusOr<google::cloud::edgecontainer::v1::GenerateOfflineCredentialResponse>
EdgeContainerTracingConnection::GenerateOfflineCredential(
    google::cloud::edgecontainer::v1::GenerateOfflineCredentialRequest const&
        request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GenerateOfflineCredential");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateOfflineCredential(request));
}

StreamRange<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerTracingConnection::ListNodePools(
    google::cloud::edgecontainer::v1::ListNodePoolsRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::ListNodePools");
  internal::OTelScope scope(span);
  auto sr = child_->ListNodePools(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::edgecontainer::v1::NodePool>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerTracingConnection::GetNodePool(
    google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GetNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNodePool(request));
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerTracingConnection::CreateNodePool(
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateNodePool(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::CreateNodePool(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateNodePool");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateNodePool(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerTracingConnection::CreateNodePool(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateNodePool(operation));
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerTracingConnection::UpdateNodePool(
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpdateNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateNodePool(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::UpdateNodePool(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpdateNodePool");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateNodePool(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerTracingConnection::UpdateNodePool(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::UpdateNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateNodePool(operation));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteNodePool(
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteNodePool(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::DeleteNodePool(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteNodePool");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteNodePool(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteNodePool(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteNodePool");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteNodePool(operation));
}

StreamRange<google::cloud::edgecontainer::v1::Machine>
EdgeContainerTracingConnection::ListMachines(
    google::cloud::edgecontainer::v1::ListMachinesRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::ListMachines");
  internal::OTelScope scope(span);
  auto sr = child_->ListMachines(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::edgecontainer::v1::Machine>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
EdgeContainerTracingConnection::GetMachine(
    google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GetMachine");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMachine(request));
}

StreamRange<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerTracingConnection::ListVpnConnections(
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::ListVpnConnections");
  internal::OTelScope scope(span);
  auto sr = child_->ListVpnConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::edgecontainer::v1::VpnConnection>(std::move(span),
                                                       std::move(sr));
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerTracingConnection::GetVpnConnection(
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GetVpnConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVpnConnection(request));
}

future<StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>
EdgeContainerTracingConnection::CreateVpnConnection(
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateVpnConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateVpnConnection(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::CreateVpnConnection(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateVpnConnection");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateVpnConnection(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>
EdgeContainerTracingConnection::CreateVpnConnection(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CreateVpnConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateVpnConnection(operation));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteVpnConnection(
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteVpnConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteVpnConnection(request));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::DeleteVpnConnection(
    NoAwaitTag,
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteVpnConnection");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteVpnConnection(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerTracingConnection::DeleteVpnConnection(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteVpnConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteVpnConnection(operation));
}

StatusOr<google::cloud::edgecontainer::v1::ServerConfig>
EdgeContainerTracingConnection::GetServerConfig(
    google::cloud::edgecontainer::v1::GetServerConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GetServerConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServerConfig(request));
}

StreamRange<google::cloud::location::Location>
EdgeContainerTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
EdgeContainerTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
EdgeContainerTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
EdgeContainerTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status EdgeContainerTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status EdgeContainerTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "edgecontainer_v1::EdgeContainerConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<edgecontainer_v1::EdgeContainerConnection>
MakeEdgeContainerTracingConnection(
    std::shared_ptr<edgecontainer_v1::EdgeContainerConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<EdgeContainerTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google
