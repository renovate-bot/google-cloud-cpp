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
// source:
// google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_NETWORK_FIREWALL_POLICIES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_NETWORK_FIREWALL_POLICIES_TRACING_CONNECTION_H

#include "google/cloud/compute/network_firewall_policies/v1/network_firewall_policies_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class NetworkFirewallPoliciesTracingConnection
    : public compute_network_firewall_policies_v1::
          NetworkFirewallPoliciesConnection {
 public:
  ~NetworkFirewallPoliciesTracingConnection() override = default;

  explicit NetworkFirewallPoliciesTracingConnection(
      std::shared_ptr<compute_network_firewall_policies_v1::
                          NetworkFirewallPoliciesConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddAssociation(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AddAssociationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddAssociation(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      AddAssociationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddAssociation(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddPacketMirroringRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AddPacketMirroringRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddPacketMirroringRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      AddPacketMirroringRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddPacketMirroringRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AddRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      AddRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::FirewallPoliciesScopedList>>
  AggregatedListNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AggregatedListNetworkFirewallPoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> CloneRules(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          CloneRulesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> CloneRules(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      CloneRulesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> CloneRules(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewallPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          DeleteFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteFirewallPolicy(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      DeleteFirewallPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewallPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy> GetFirewallPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
  GetAssociation(google::cloud::cpp::compute::network_firewall_policies::v1::
                     GetAssociationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
  GetPacketMirroringRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetPacketMirroringRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule> GetRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewallPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          InsertFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertFirewallPolicy(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      InsertFirewallPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewallPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
  ListNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          ListNetworkFirewallPoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewallPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          PatchFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchFirewallPolicy(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      PatchFirewallPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewallPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPacketMirroringRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          PatchPacketMirroringRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchPacketMirroringRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      PatchPacketMirroringRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPacketMirroringRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          PatchRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      PatchRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveAssociation(google::cloud::cpp::compute::network_firewall_policies::v1::
                        RemoveAssociationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveAssociation(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      RemoveAssociationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveAssociation(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemovePacketMirroringRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          RemovePacketMirroringRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  RemovePacketMirroringRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      RemovePacketMirroringRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemovePacketMirroringRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> RemoveRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          RemoveRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveRule(
      NoAwaitTag, google::cloud::cpp::compute::network_firewall_policies::v1::
                      RemoveRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> RemoveRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::network_firewall_policies::
                         v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<
      compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<
    compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection>
MakeNetworkFirewallPoliciesTracingConnection(
    std::shared_ptr<
        compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_NETWORK_FIREWALL_POLICIES_TRACING_CONNECTION_H
