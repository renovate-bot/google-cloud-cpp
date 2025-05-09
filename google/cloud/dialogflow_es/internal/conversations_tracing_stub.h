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
// source: google/cloud/dialogflow/v2/conversation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_TRACING_STUB_H

#include "google/cloud/dialogflow_es/internal/conversations_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConversationsTracingStub : public ConversationsStub {
 public:
  ~ConversationsTracingStub() override = default;

  explicit ConversationsTracingStub(std::shared_ptr<ConversationsStub> child);

  StatusOr<google::cloud::dialogflow::v2::Conversation> CreateConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CreateConversationRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::ListConversationsResponse>
  ListConversations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::ListConversationsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Conversation> GetConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GetConversationRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Conversation> CompleteConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CompleteConversationRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::IngestContextReferencesResponse>
  IngestContextReferences(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::IngestContextReferencesRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ListMessagesResponse> ListMessages(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::ListMessagesRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
  SuggestConversationSummary(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
  GenerateStatelessSummary(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse>
  GenerateStatelessSuggestion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
  SearchKnowledge(grpc::ClientContext& context, Options const& options,
                  google::cloud::dialogflow::v2::SearchKnowledgeRequest const&
                      request) override;

  StatusOr<google::cloud::dialogflow::v2::GenerateSuggestionsResponse>
  GenerateSuggestions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GenerateSuggestionsRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ConversationsStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ConversationsStub> MakeConversationsTracingStub(
    std::shared_ptr<ConversationsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_TRACING_STUB_H
