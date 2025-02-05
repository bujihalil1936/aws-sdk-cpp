﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/secretsmanager/model/CancelRotateSecretResult.h>
#include <aws/secretsmanager/model/CreateSecretResult.h>
#include <aws/secretsmanager/model/DeleteResourcePolicyResult.h>
#include <aws/secretsmanager/model/DeleteSecretResult.h>
#include <aws/secretsmanager/model/DescribeSecretResult.h>
#include <aws/secretsmanager/model/GetRandomPasswordResult.h>
#include <aws/secretsmanager/model/GetResourcePolicyResult.h>
#include <aws/secretsmanager/model/GetSecretValueResult.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsResult.h>
#include <aws/secretsmanager/model/ListSecretsResult.h>
#include <aws/secretsmanager/model/PutResourcePolicyResult.h>
#include <aws/secretsmanager/model/PutSecretValueResult.h>
#include <aws/secretsmanager/model/RemoveRegionsFromReplicationResult.h>
#include <aws/secretsmanager/model/ReplicateSecretToRegionsResult.h>
#include <aws/secretsmanager/model/RestoreSecretResult.h>
#include <aws/secretsmanager/model/RotateSecretResult.h>
#include <aws/secretsmanager/model/StopReplicationToReplicaResult.h>
#include <aws/secretsmanager/model/UpdateSecretResult.h>
#include <aws/secretsmanager/model/UpdateSecretVersionStageResult.h>
#include <aws/secretsmanager/model/ValidateResourcePolicyResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace SecretsManager
{

namespace Model
{
        class CancelRotateSecretRequest;
        class CreateSecretRequest;
        class DeleteResourcePolicyRequest;
        class DeleteSecretRequest;
        class DescribeSecretRequest;
        class GetRandomPasswordRequest;
        class GetResourcePolicyRequest;
        class GetSecretValueRequest;
        class ListSecretVersionIdsRequest;
        class ListSecretsRequest;
        class PutResourcePolicyRequest;
        class PutSecretValueRequest;
        class RemoveRegionsFromReplicationRequest;
        class ReplicateSecretToRegionsRequest;
        class RestoreSecretRequest;
        class RotateSecretRequest;
        class StopReplicationToReplicaRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateSecretRequest;
        class UpdateSecretVersionStageRequest;
        class ValidateResourcePolicyRequest;

        typedef Aws::Utils::Outcome<CancelRotateSecretResult, SecretsManagerError> CancelRotateSecretOutcome;
        typedef Aws::Utils::Outcome<CreateSecretResult, SecretsManagerError> CreateSecretOutcome;
        typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, SecretsManagerError> DeleteResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteSecretResult, SecretsManagerError> DeleteSecretOutcome;
        typedef Aws::Utils::Outcome<DescribeSecretResult, SecretsManagerError> DescribeSecretOutcome;
        typedef Aws::Utils::Outcome<GetRandomPasswordResult, SecretsManagerError> GetRandomPasswordOutcome;
        typedef Aws::Utils::Outcome<GetResourcePolicyResult, SecretsManagerError> GetResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<GetSecretValueResult, SecretsManagerError> GetSecretValueOutcome;
        typedef Aws::Utils::Outcome<ListSecretVersionIdsResult, SecretsManagerError> ListSecretVersionIdsOutcome;
        typedef Aws::Utils::Outcome<ListSecretsResult, SecretsManagerError> ListSecretsOutcome;
        typedef Aws::Utils::Outcome<PutResourcePolicyResult, SecretsManagerError> PutResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<PutSecretValueResult, SecretsManagerError> PutSecretValueOutcome;
        typedef Aws::Utils::Outcome<RemoveRegionsFromReplicationResult, SecretsManagerError> RemoveRegionsFromReplicationOutcome;
        typedef Aws::Utils::Outcome<ReplicateSecretToRegionsResult, SecretsManagerError> ReplicateSecretToRegionsOutcome;
        typedef Aws::Utils::Outcome<RestoreSecretResult, SecretsManagerError> RestoreSecretOutcome;
        typedef Aws::Utils::Outcome<RotateSecretResult, SecretsManagerError> RotateSecretOutcome;
        typedef Aws::Utils::Outcome<StopReplicationToReplicaResult, SecretsManagerError> StopReplicationToReplicaOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SecretsManagerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SecretsManagerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateSecretResult, SecretsManagerError> UpdateSecretOutcome;
        typedef Aws::Utils::Outcome<UpdateSecretVersionStageResult, SecretsManagerError> UpdateSecretVersionStageOutcome;
        typedef Aws::Utils::Outcome<ValidateResourcePolicyResult, SecretsManagerError> ValidateResourcePolicyOutcome;

        typedef std::future<CancelRotateSecretOutcome> CancelRotateSecretOutcomeCallable;
        typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
        typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
        typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
        typedef std::future<DescribeSecretOutcome> DescribeSecretOutcomeCallable;
        typedef std::future<GetRandomPasswordOutcome> GetRandomPasswordOutcomeCallable;
        typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
        typedef std::future<GetSecretValueOutcome> GetSecretValueOutcomeCallable;
        typedef std::future<ListSecretVersionIdsOutcome> ListSecretVersionIdsOutcomeCallable;
        typedef std::future<ListSecretsOutcome> ListSecretsOutcomeCallable;
        typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
        typedef std::future<PutSecretValueOutcome> PutSecretValueOutcomeCallable;
        typedef std::future<RemoveRegionsFromReplicationOutcome> RemoveRegionsFromReplicationOutcomeCallable;
        typedef std::future<ReplicateSecretToRegionsOutcome> ReplicateSecretToRegionsOutcomeCallable;
        typedef std::future<RestoreSecretOutcome> RestoreSecretOutcomeCallable;
        typedef std::future<RotateSecretOutcome> RotateSecretOutcomeCallable;
        typedef std::future<StopReplicationToReplicaOutcome> StopReplicationToReplicaOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateSecretOutcome> UpdateSecretOutcomeCallable;
        typedef std::future<UpdateSecretVersionStageOutcome> UpdateSecretVersionStageOutcomeCallable;
        typedef std::future<ValidateResourcePolicyOutcome> ValidateResourcePolicyOutcomeCallable;
} // namespace Model

  class SecretsManagerClient;

    typedef std::function<void(const SecretsManagerClient*, const Model::CancelRotateSecretRequest&, const Model::CancelRotateSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelRotateSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::CreateSecretRequest&, const Model::CreateSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::DeleteSecretRequest&, const Model::DeleteSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::DescribeSecretRequest&, const Model::DescribeSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::GetRandomPasswordRequest&, const Model::GetRandomPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRandomPasswordResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::GetSecretValueRequest&, const Model::GetSecretValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSecretValueResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::ListSecretVersionIdsRequest&, const Model::ListSecretVersionIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecretVersionIdsResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::ListSecretsRequest&, const Model::ListSecretsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecretsResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::PutSecretValueRequest&, const Model::PutSecretValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSecretValueResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::RemoveRegionsFromReplicationRequest&, const Model::RemoveRegionsFromReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRegionsFromReplicationResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::ReplicateSecretToRegionsRequest&, const Model::ReplicateSecretToRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplicateSecretToRegionsResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::RestoreSecretRequest&, const Model::RestoreSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::RotateSecretRequest&, const Model::RotateSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RotateSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::StopReplicationToReplicaRequest&, const Model::StopReplicationToReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopReplicationToReplicaResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::UpdateSecretRequest&, const Model::UpdateSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::UpdateSecretVersionStageRequest&, const Model::UpdateSecretVersionStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecretVersionStageResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::ValidateResourcePolicyRequest&, const Model::ValidateResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateResourcePolicyResponseReceivedHandler;

  /**
   * <fullname>Amazon Web Services Secrets Manager</fullname> <p>Amazon Web Services
   * Secrets Manager provides a service to enable you to store, manage, and retrieve,
   * secrets.</p> <p>This guide provides descriptions of the Secrets Manager API. For
   * more information about using this service, see the <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">Amazon
   * Web Services Secrets Manager User Guide</a>.</p> <p> <b>API Version</b> </p>
   * <p>This version of the Secrets Manager API Reference documents the Secrets
   * Manager API version 2017-10-17.</p>  <p>As an alternative to using the
   * API, you can use one of the Amazon Web Services SDKs, which consist of libraries
   * and sample code for various programming languages and platforms such as Java,
   * Ruby, .NET, iOS, and Android. The SDKs provide a convenient way to create
   * programmatic access to Amazon Web Services Secrets Manager. For example, the
   * SDKs provide cryptographically signing requests, managing errors, and retrying
   * requests automatically. For more information about the Amazon Web Services SDKs,
   * including downloading and installing them, see <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   *  <p>We recommend you use the Amazon Web Services SDKs to make
   * programmatic API calls to Secrets Manager. However, you also can use the Secrets
   * Manager HTTP Query API to make direct calls to the Secrets Manager web service.
   * To learn more about the Secrets Manager HTTP Query API, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/query-requests.html">Making
   * Query Requests</a> in the <i>Amazon Web Services Secrets Manager User Guide</i>.
   * </p> <p>Secrets Manager API supports GET and POST requests for all actions, and
   * doesn't require you to use GET for some actions and POST for others. However,
   * GET requests are subject to the limitation size of a URL. Therefore, for
   * operations that require larger sizes, use a POST request.</p> <p> <b>Support and
   * Feedback for Amazon Web Services Secrets Manager</b> </p> <p>We welcome your
   * feedback. Send your comments to <a
   * href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>,
   * or post your feedback and questions in the <a
   * href="http://forums.aws.amazon.com/forum.jspa?forumID=296">Amazon Web Services
   * Secrets Manager Discussion Forum</a>. For more information about the Amazon Web
   * Services Discussion Forums, see <a
   * href="http://forums.aws.amazon.com/help.jspa">Forums Help</a>.</p> <p> <b>How
   * examples are presented</b> </p> <p>The JSON that Amazon Web Services Secrets
   * Manager expects as your request parameters and the service returns as a response
   * to HTTP query requests contain single, long strings without line breaks or white
   * space formatting. The JSON shown in the examples displays the code formatted
   * with both line breaks and white space to improve readability. When example input
   * parameters can also cause long strings extending beyond the screen, you can
   * insert line breaks to enhance readability. You should always submit the input as
   * a single JSON text string.</p> <p> <b>Logging API Requests</b> </p> <p>Amazon
   * Web Services Secrets Manager supports Amazon Web Services CloudTrail, a service
   * that records Amazon Web Services API calls for your Amazon Web Services account
   * and delivers log files to an Amazon S3 bucket. By using information that's
   * collected by Amazon Web Services CloudTrail, you can determine the requests
   * successfully made to Secrets Manager, who made the request, when it was made,
   * and so on. For more about Amazon Web Services Secrets Manager and support for
   * Amazon Web Services CloudTrail, see <a
   * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging
   * Amazon Web Services Secrets Manager Events with Amazon Web Services
   * CloudTrail</a> in the <i>Amazon Web Services Secrets Manager User Guide</i>. To
   * learn more about CloudTrail, including enabling it and find your log files, see
   * the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">Amazon
   * Web Services CloudTrail User Guide</a>.</p>
   */
  class AWS_SECRETSMANAGER_API SecretsManagerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecretsManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecretsManagerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecretsManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SecretsManagerClient();


        /**
         * <p>Disables automatic scheduled rotation and cancels the rotation of a secret if
         * currently in progress.</p> <p>To re-enable scheduled rotation, call
         * <a>RotateSecret</a> with <code>AutomaticallyRotateAfterDays</code> set to a
         * value greater than 0. This immediately rotates your secret and then enables the
         * automatic schedule.</p>  <p>If you cancel a rotation while in progress, it
         * can leave the <code>VersionStage</code> labels in an unexpected state. Depending
         * on the step of the rotation in progress, you might need to remove the staging
         * label <code>AWSPENDING</code> from the partially created version, specified by
         * the <code>VersionId</code> response value. You should also evaluate the
         * partially rotated new version to see if it should be deleted, which you can do
         * by removing all staging labels from the new version <code>VersionStage</code>
         * field.</p>  <p>To successfully start a rotation, the staging label
         * <code>AWSPENDING</code> must be in one of the following states:</p> <ul> <li>
         * <p>Not attached to any version at all</p> </li> <li> <p>Attached to the same
         * version as the staging label <code>AWSCURRENT</code> </p> </li> </ul> <p>If the
         * staging label <code>AWSPENDING</code> attached to a different version than the
         * version with <code>AWSCURRENT</code> then the attempt to rotate fails.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:CancelRotateSecret</p>
         * </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To configure
         * rotation for a secret or to manually trigger a rotation, use
         * <a>RotateSecret</a>.</p> </li> <li> <p>To get the rotation configuration details
         * for a secret, use <a>DescribeSecret</a>.</p> </li> <li> <p>To list all of the
         * currently available secrets, use <a>ListSecrets</a>.</p> </li> <li> <p>To list
         * all of the versions currently associated with a secret, use
         * <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CancelRotateSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelRotateSecretOutcome CancelRotateSecret(const Model::CancelRotateSecretRequest& request) const;

        /**
         * <p>Disables automatic scheduled rotation and cancels the rotation of a secret if
         * currently in progress.</p> <p>To re-enable scheduled rotation, call
         * <a>RotateSecret</a> with <code>AutomaticallyRotateAfterDays</code> set to a
         * value greater than 0. This immediately rotates your secret and then enables the
         * automatic schedule.</p>  <p>If you cancel a rotation while in progress, it
         * can leave the <code>VersionStage</code> labels in an unexpected state. Depending
         * on the step of the rotation in progress, you might need to remove the staging
         * label <code>AWSPENDING</code> from the partially created version, specified by
         * the <code>VersionId</code> response value. You should also evaluate the
         * partially rotated new version to see if it should be deleted, which you can do
         * by removing all staging labels from the new version <code>VersionStage</code>
         * field.</p>  <p>To successfully start a rotation, the staging label
         * <code>AWSPENDING</code> must be in one of the following states:</p> <ul> <li>
         * <p>Not attached to any version at all</p> </li> <li> <p>Attached to the same
         * version as the staging label <code>AWSCURRENT</code> </p> </li> </ul> <p>If the
         * staging label <code>AWSPENDING</code> attached to a different version than the
         * version with <code>AWSCURRENT</code> then the attempt to rotate fails.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:CancelRotateSecret</p>
         * </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To configure
         * rotation for a secret or to manually trigger a rotation, use
         * <a>RotateSecret</a>.</p> </li> <li> <p>To get the rotation configuration details
         * for a secret, use <a>DescribeSecret</a>.</p> </li> <li> <p>To list all of the
         * currently available secrets, use <a>ListSecrets</a>.</p> </li> <li> <p>To list
         * all of the versions currently associated with a secret, use
         * <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CancelRotateSecret">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelRotateSecretOutcomeCallable CancelRotateSecretCallable(const Model::CancelRotateSecretRequest& request) const;

        /**
         * <p>Disables automatic scheduled rotation and cancels the rotation of a secret if
         * currently in progress.</p> <p>To re-enable scheduled rotation, call
         * <a>RotateSecret</a> with <code>AutomaticallyRotateAfterDays</code> set to a
         * value greater than 0. This immediately rotates your secret and then enables the
         * automatic schedule.</p>  <p>If you cancel a rotation while in progress, it
         * can leave the <code>VersionStage</code> labels in an unexpected state. Depending
         * on the step of the rotation in progress, you might need to remove the staging
         * label <code>AWSPENDING</code> from the partially created version, specified by
         * the <code>VersionId</code> response value. You should also evaluate the
         * partially rotated new version to see if it should be deleted, which you can do
         * by removing all staging labels from the new version <code>VersionStage</code>
         * field.</p>  <p>To successfully start a rotation, the staging label
         * <code>AWSPENDING</code> must be in one of the following states:</p> <ul> <li>
         * <p>Not attached to any version at all</p> </li> <li> <p>Attached to the same
         * version as the staging label <code>AWSCURRENT</code> </p> </li> </ul> <p>If the
         * staging label <code>AWSPENDING</code> attached to a different version than the
         * version with <code>AWSCURRENT</code> then the attempt to rotate fails.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:CancelRotateSecret</p>
         * </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To configure
         * rotation for a secret or to manually trigger a rotation, use
         * <a>RotateSecret</a>.</p> </li> <li> <p>To get the rotation configuration details
         * for a secret, use <a>DescribeSecret</a>.</p> </li> <li> <p>To list all of the
         * currently available secrets, use <a>ListSecrets</a>.</p> </li> <li> <p>To list
         * all of the versions currently associated with a secret, use
         * <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CancelRotateSecret">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelRotateSecretAsync(const Model::CancelRotateSecretRequest& request, const CancelRotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new secret. A secret in Secrets Manager consists of both the
         * protected secret data and the important information needed to manage the
         * secret.</p> <p>Secrets Manager stores the encrypted secret data in one of a
         * collection of "versions" associated with the secret. Each version contains a
         * copy of the encrypted secret data. Each version is associated with one or more
         * "staging labels" that identify where the version is in the rotation cycle. The
         * <code>SecretVersionsToStages</code> field of the secret contains the mapping of
         * staging labels to the active versions of the secret. Versions without a staging
         * label are considered deprecated and not included in the list.</p> <p>You provide
         * the secret data to be encrypted by putting text in either the
         * <code>SecretString</code> parameter or binary data in the
         * <code>SecretBinary</code> parameter, but not both. If you include
         * <code>SecretString</code> or <code>SecretBinary</code> then Secrets Manager also
         * creates an initial secret version and automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version.</p>  <ul> <li> <p>If you call
         * an operation to encrypt or decrypt the <code>SecretString</code> or
         * <code>SecretBinary</code> for a secret in the same account as the calling user
         * and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> </p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you must
         * have the following permissions:</p> <ul> <li> <p>secretsmanager:CreateSecret</p>
         * </li> <li> <p>kms:GenerateDataKey - needed only if you use a customer-managed
         * Amazon Web Services KMS key to encrypt the secret. You do not need this
         * permission to use the account default Amazon Web Services managed CMK for
         * Secrets Manager.</p> </li> <li> <p>kms:Decrypt - needed only if you use a
         * customer-managed Amazon Web Services KMS key to encrypt the secret. You do not
         * need this permission to use the account default Amazon Web Services managed CMK
         * for Secrets Manager.</p> </li> <li> <p>secretsmanager:TagResource - needed only
         * if you include the <code>Tags</code> parameter. </p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To delete a secret, use
         * <a>DeleteSecret</a>.</p> </li> <li> <p>To modify an existing secret, use
         * <a>UpdateSecret</a>.</p> </li> <li> <p>To create a new version of a secret, use
         * <a>PutSecretValue</a>.</p> </li> <li> <p>To retrieve the encrypted secure string
         * and secure binary values, use <a>GetSecretValue</a>.</p> </li> <li> <p>To
         * retrieve all other details for a secret, use <a>DescribeSecret</a>. This does
         * not include the encrypted secure string and secure binary values.</p> </li> <li>
         * <p>To retrieve the list of secret versions associated with the current secret,
         * use <a>DescribeSecret</a> and examine the <code>SecretVersionsToStages</code>
         * response value.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CreateSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecretOutcome CreateSecret(const Model::CreateSecretRequest& request) const;

        /**
         * <p>Creates a new secret. A secret in Secrets Manager consists of both the
         * protected secret data and the important information needed to manage the
         * secret.</p> <p>Secrets Manager stores the encrypted secret data in one of a
         * collection of "versions" associated with the secret. Each version contains a
         * copy of the encrypted secret data. Each version is associated with one or more
         * "staging labels" that identify where the version is in the rotation cycle. The
         * <code>SecretVersionsToStages</code> field of the secret contains the mapping of
         * staging labels to the active versions of the secret. Versions without a staging
         * label are considered deprecated and not included in the list.</p> <p>You provide
         * the secret data to be encrypted by putting text in either the
         * <code>SecretString</code> parameter or binary data in the
         * <code>SecretBinary</code> parameter, but not both. If you include
         * <code>SecretString</code> or <code>SecretBinary</code> then Secrets Manager also
         * creates an initial secret version and automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version.</p>  <ul> <li> <p>If you call
         * an operation to encrypt or decrypt the <code>SecretString</code> or
         * <code>SecretBinary</code> for a secret in the same account as the calling user
         * and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> </p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you must
         * have the following permissions:</p> <ul> <li> <p>secretsmanager:CreateSecret</p>
         * </li> <li> <p>kms:GenerateDataKey - needed only if you use a customer-managed
         * Amazon Web Services KMS key to encrypt the secret. You do not need this
         * permission to use the account default Amazon Web Services managed CMK for
         * Secrets Manager.</p> </li> <li> <p>kms:Decrypt - needed only if you use a
         * customer-managed Amazon Web Services KMS key to encrypt the secret. You do not
         * need this permission to use the account default Amazon Web Services managed CMK
         * for Secrets Manager.</p> </li> <li> <p>secretsmanager:TagResource - needed only
         * if you include the <code>Tags</code> parameter. </p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To delete a secret, use
         * <a>DeleteSecret</a>.</p> </li> <li> <p>To modify an existing secret, use
         * <a>UpdateSecret</a>.</p> </li> <li> <p>To create a new version of a secret, use
         * <a>PutSecretValue</a>.</p> </li> <li> <p>To retrieve the encrypted secure string
         * and secure binary values, use <a>GetSecretValue</a>.</p> </li> <li> <p>To
         * retrieve all other details for a secret, use <a>DescribeSecret</a>. This does
         * not include the encrypted secure string and secure binary values.</p> </li> <li>
         * <p>To retrieve the list of secret versions associated with the current secret,
         * use <a>DescribeSecret</a> and examine the <code>SecretVersionsToStages</code>
         * response value.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CreateSecret">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecretOutcomeCallable CreateSecretCallable(const Model::CreateSecretRequest& request) const;

        /**
         * <p>Creates a new secret. A secret in Secrets Manager consists of both the
         * protected secret data and the important information needed to manage the
         * secret.</p> <p>Secrets Manager stores the encrypted secret data in one of a
         * collection of "versions" associated with the secret. Each version contains a
         * copy of the encrypted secret data. Each version is associated with one or more
         * "staging labels" that identify where the version is in the rotation cycle. The
         * <code>SecretVersionsToStages</code> field of the secret contains the mapping of
         * staging labels to the active versions of the secret. Versions without a staging
         * label are considered deprecated and not included in the list.</p> <p>You provide
         * the secret data to be encrypted by putting text in either the
         * <code>SecretString</code> parameter or binary data in the
         * <code>SecretBinary</code> parameter, but not both. If you include
         * <code>SecretString</code> or <code>SecretBinary</code> then Secrets Manager also
         * creates an initial secret version and automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version.</p>  <ul> <li> <p>If you call
         * an operation to encrypt or decrypt the <code>SecretString</code> or
         * <code>SecretBinary</code> for a secret in the same account as the calling user
         * and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> </p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you must
         * have the following permissions:</p> <ul> <li> <p>secretsmanager:CreateSecret</p>
         * </li> <li> <p>kms:GenerateDataKey - needed only if you use a customer-managed
         * Amazon Web Services KMS key to encrypt the secret. You do not need this
         * permission to use the account default Amazon Web Services managed CMK for
         * Secrets Manager.</p> </li> <li> <p>kms:Decrypt - needed only if you use a
         * customer-managed Amazon Web Services KMS key to encrypt the secret. You do not
         * need this permission to use the account default Amazon Web Services managed CMK
         * for Secrets Manager.</p> </li> <li> <p>secretsmanager:TagResource - needed only
         * if you include the <code>Tags</code> parameter. </p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To delete a secret, use
         * <a>DeleteSecret</a>.</p> </li> <li> <p>To modify an existing secret, use
         * <a>UpdateSecret</a>.</p> </li> <li> <p>To create a new version of a secret, use
         * <a>PutSecretValue</a>.</p> </li> <li> <p>To retrieve the encrypted secure string
         * and secure binary values, use <a>GetSecretValue</a>.</p> </li> <li> <p>To
         * retrieve all other details for a secret, use <a>DescribeSecret</a>. This does
         * not include the encrypted secure string and secure binary values.</p> </li> <li>
         * <p>To retrieve the list of secret versions associated with the current secret,
         * use <a>DescribeSecret</a> and examine the <code>SecretVersionsToStages</code>
         * response value.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CreateSecret">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecretAsync(const Model::CreateSecretRequest& request, const CreateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the resource-based permission policy attached to the secret.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:DeleteResourcePolicy</p>
         * </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To attach a resource
         * policy to a secret, use <a>PutResourcePolicy</a>.</p> </li> <li> <p>To retrieve
         * the current resource-based policy attached to a secret, use
         * <a>GetResourcePolicy</a>.</p> </li> <li> <p>To list all of the currently
         * available secrets, use <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Deletes the resource-based permission policy attached to the secret.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:DeleteResourcePolicy</p>
         * </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To attach a resource
         * policy to a secret, use <a>PutResourcePolicy</a>.</p> </li> <li> <p>To retrieve
         * the current resource-based policy attached to a secret, use
         * <a>GetResourcePolicy</a>.</p> </li> <li> <p>To list all of the currently
         * available secrets, use <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Deletes the resource-based permission policy attached to the secret.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:DeleteResourcePolicy</p>
         * </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To attach a resource
         * policy to a secret, use <a>PutResourcePolicy</a>.</p> </li> <li> <p>To retrieve
         * the current resource-based policy attached to a secret, use
         * <a>GetResourcePolicy</a>.</p> </li> <li> <p>To list all of the currently
         * available secrets, use <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an entire secret and all of the versions. You can optionally include
         * a recovery window during which you can restore the secret. If you don't specify
         * a recovery window value, the operation defaults to 30 days. Secrets Manager
         * attaches a <code>DeletionDate</code> stamp to the secret that specifies the end
         * of the recovery window. At the end of the recovery window, Secrets Manager
         * deletes the secret permanently.</p> <p>At any time before recovery window ends,
         * you can use <a>RestoreSecret</a> to remove the <code>DeletionDate</code> and
         * cancel the deletion of the secret.</p> <p>You cannot access the encrypted secret
         * information in any secret scheduled for deletion. If you need to access that
         * information, you must cancel the deletion with <a>RestoreSecret</a> and then
         * retrieve the information.</p>  <ul> <li> <p>There is no explicit operation
         * to delete a version of a secret. Instead, remove all staging labels from the
         * <code>VersionStage</code> field of a version. That marks the version as
         * deprecated and allows Secrets Manager to delete it as needed. Versions without
         * any staging labels do not show up in <a>ListSecretVersionIds</a> unless you
         * specify <code>IncludeDeprecated</code>.</p> </li> <li> <p>The permanent secret
         * deletion at the end of the waiting period is performed as a background task with
         * low priority. There is no guarantee of a specific time after the recovery window
         * for the actual delete operation to occur.</p> </li> </ul>  <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:DeleteSecret</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To cancel deletion of a version of a
         * secret before the recovery window has expired, use <a>RestoreSecret</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DeleteSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecretOutcome DeleteSecret(const Model::DeleteSecretRequest& request) const;

        /**
         * <p>Deletes an entire secret and all of the versions. You can optionally include
         * a recovery window during which you can restore the secret. If you don't specify
         * a recovery window value, the operation defaults to 30 days. Secrets Manager
         * attaches a <code>DeletionDate</code> stamp to the secret that specifies the end
         * of the recovery window. At the end of the recovery window, Secrets Manager
         * deletes the secret permanently.</p> <p>At any time before recovery window ends,
         * you can use <a>RestoreSecret</a> to remove the <code>DeletionDate</code> and
         * cancel the deletion of the secret.</p> <p>You cannot access the encrypted secret
         * information in any secret scheduled for deletion. If you need to access that
         * information, you must cancel the deletion with <a>RestoreSecret</a> and then
         * retrieve the information.</p>  <ul> <li> <p>There is no explicit operation
         * to delete a version of a secret. Instead, remove all staging labels from the
         * <code>VersionStage</code> field of a version. That marks the version as
         * deprecated and allows Secrets Manager to delete it as needed. Versions without
         * any staging labels do not show up in <a>ListSecretVersionIds</a> unless you
         * specify <code>IncludeDeprecated</code>.</p> </li> <li> <p>The permanent secret
         * deletion at the end of the waiting period is performed as a background task with
         * low priority. There is no guarantee of a specific time after the recovery window
         * for the actual delete operation to occur.</p> </li> </ul>  <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:DeleteSecret</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To cancel deletion of a version of a
         * secret before the recovery window has expired, use <a>RestoreSecret</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DeleteSecret">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecretOutcomeCallable DeleteSecretCallable(const Model::DeleteSecretRequest& request) const;

        /**
         * <p>Deletes an entire secret and all of the versions. You can optionally include
         * a recovery window during which you can restore the secret. If you don't specify
         * a recovery window value, the operation defaults to 30 days. Secrets Manager
         * attaches a <code>DeletionDate</code> stamp to the secret that specifies the end
         * of the recovery window. At the end of the recovery window, Secrets Manager
         * deletes the secret permanently.</p> <p>At any time before recovery window ends,
         * you can use <a>RestoreSecret</a> to remove the <code>DeletionDate</code> and
         * cancel the deletion of the secret.</p> <p>You cannot access the encrypted secret
         * information in any secret scheduled for deletion. If you need to access that
         * information, you must cancel the deletion with <a>RestoreSecret</a> and then
         * retrieve the information.</p>  <ul> <li> <p>There is no explicit operation
         * to delete a version of a secret. Instead, remove all staging labels from the
         * <code>VersionStage</code> field of a version. That marks the version as
         * deprecated and allows Secrets Manager to delete it as needed. Versions without
         * any staging labels do not show up in <a>ListSecretVersionIds</a> unless you
         * specify <code>IncludeDeprecated</code>.</p> </li> <li> <p>The permanent secret
         * deletion at the end of the waiting period is performed as a background task with
         * low priority. There is no guarantee of a specific time after the recovery window
         * for the actual delete operation to occur.</p> </li> </ul>  <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:DeleteSecret</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To cancel deletion of a version of a
         * secret before the recovery window has expired, use <a>RestoreSecret</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DeleteSecret">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecretAsync(const Model::DeleteSecretRequest& request, const DeleteSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of a secret. It does not include the encrypted fields.
         * Secrets Manager only returns fields populated with a value in the response. </p>
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:DescribeSecret</p> </li>
         * </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To modify a secret, use
         * <a>UpdateSecret</a>.</p> </li> <li> <p>To retrieve the encrypted secret
         * information in a version of the secret, use <a>GetSecretValue</a>.</p> </li>
         * <li> <p>To list all of the secrets in the Amazon Web Services account, use
         * <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DescribeSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecretOutcome DescribeSecret(const Model::DescribeSecretRequest& request) const;

        /**
         * <p>Retrieves the details of a secret. It does not include the encrypted fields.
         * Secrets Manager only returns fields populated with a value in the response. </p>
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:DescribeSecret</p> </li>
         * </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To modify a secret, use
         * <a>UpdateSecret</a>.</p> </li> <li> <p>To retrieve the encrypted secret
         * information in a version of the secret, use <a>GetSecretValue</a>.</p> </li>
         * <li> <p>To list all of the secrets in the Amazon Web Services account, use
         * <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DescribeSecret">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecretOutcomeCallable DescribeSecretCallable(const Model::DescribeSecretRequest& request) const;

        /**
         * <p>Retrieves the details of a secret. It does not include the encrypted fields.
         * Secrets Manager only returns fields populated with a value in the response. </p>
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:DescribeSecret</p> </li>
         * </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To modify a secret, use
         * <a>UpdateSecret</a>.</p> </li> <li> <p>To retrieve the encrypted secret
         * information in a version of the secret, use <a>GetSecretValue</a>.</p> </li>
         * <li> <p>To list all of the secrets in the Amazon Web Services account, use
         * <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DescribeSecret">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecretAsync(const Model::DescribeSecretRequest& request, const DescribeSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a random password of the specified complexity. This operation is
         * intended for use in the Lambda rotation function. Per best practice, we
         * recommend that you specify the maximum length and include every character type
         * that the system you are generating a password for can support.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:GetRandomPassword</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetRandomPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRandomPasswordOutcome GetRandomPassword(const Model::GetRandomPasswordRequest& request) const;

        /**
         * <p>Generates a random password of the specified complexity. This operation is
         * intended for use in the Lambda rotation function. Per best practice, we
         * recommend that you specify the maximum length and include every character type
         * that the system you are generating a password for can support.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:GetRandomPassword</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetRandomPassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRandomPasswordOutcomeCallable GetRandomPasswordCallable(const Model::GetRandomPasswordRequest& request) const;

        /**
         * <p>Generates a random password of the specified complexity. This operation is
         * intended for use in the Lambda rotation function. Per best practice, we
         * recommend that you specify the maximum length and include every character type
         * that the system you are generating a password for can support.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:GetRandomPassword</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetRandomPassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRandomPasswordAsync(const Model::GetRandomPasswordRequest& request, const GetRandomPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the JSON text of the resource-based policy document attached to the
         * specified secret. The JSON request string input and response output displays
         * formatted code with white space and line breaks for better readability. Submit
         * your input as a single line JSON string.</p> <p> <b>Minimum permissions</b> </p>
         * <p>To run this command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:GetResourcePolicy</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To attach a resource policy to a secret, use
         * <a>PutResourcePolicy</a>.</p> </li> <li> <p>To delete the resource-based policy
         * attached to a secret, use <a>DeleteResourcePolicy</a>.</p> </li> <li> <p>To list
         * all of the currently available secrets, use <a>ListSecrets</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * <p>Retrieves the JSON text of the resource-based policy document attached to the
         * specified secret. The JSON request string input and response output displays
         * formatted code with white space and line breaks for better readability. Submit
         * your input as a single line JSON string.</p> <p> <b>Minimum permissions</b> </p>
         * <p>To run this command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:GetResourcePolicy</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To attach a resource policy to a secret, use
         * <a>PutResourcePolicy</a>.</p> </li> <li> <p>To delete the resource-based policy
         * attached to a secret, use <a>DeleteResourcePolicy</a>.</p> </li> <li> <p>To list
         * all of the currently available secrets, use <a>ListSecrets</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * <p>Retrieves the JSON text of the resource-based policy document attached to the
         * specified secret. The JSON request string input and response output displays
         * formatted code with white space and line breaks for better readability. Submit
         * your input as a single line JSON string.</p> <p> <b>Minimum permissions</b> </p>
         * <p>To run this command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:GetResourcePolicy</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To attach a resource policy to a secret, use
         * <a>PutResourcePolicy</a>.</p> </li> <li> <p>To delete the resource-based policy
         * attached to a secret, use <a>DeleteResourcePolicy</a>.</p> </li> <li> <p>To list
         * all of the currently available secrets, use <a>ListSecrets</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the contents of the encrypted fields <code>SecretString</code> or
         * <code>SecretBinary</code> from the specified version of a secret, whichever
         * contains content.</p> <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:GetSecretValue</p> </li> <li> <p>kms:Decrypt - required only
         * if you use a customer-managed Amazon Web Services KMS key to encrypt the secret.
         * You do not need this permission to use the account's default Amazon Web Services
         * managed CMK for Secrets Manager.</p> </li> </ul> <p> <b>Related operations</b>
         * </p> <ul> <li> <p>To create a new version of the secret with different encrypted
         * information, use <a>PutSecretValue</a>.</p> </li> <li> <p>To retrieve the
         * non-encrypted details for the secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetSecretValue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecretValueOutcome GetSecretValue(const Model::GetSecretValueRequest& request) const;

        /**
         * <p>Retrieves the contents of the encrypted fields <code>SecretString</code> or
         * <code>SecretBinary</code> from the specified version of a secret, whichever
         * contains content.</p> <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:GetSecretValue</p> </li> <li> <p>kms:Decrypt - required only
         * if you use a customer-managed Amazon Web Services KMS key to encrypt the secret.
         * You do not need this permission to use the account's default Amazon Web Services
         * managed CMK for Secrets Manager.</p> </li> </ul> <p> <b>Related operations</b>
         * </p> <ul> <li> <p>To create a new version of the secret with different encrypted
         * information, use <a>PutSecretValue</a>.</p> </li> <li> <p>To retrieve the
         * non-encrypted details for the secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetSecretValue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSecretValueOutcomeCallable GetSecretValueCallable(const Model::GetSecretValueRequest& request) const;

        /**
         * <p>Retrieves the contents of the encrypted fields <code>SecretString</code> or
         * <code>SecretBinary</code> from the specified version of a secret, whichever
         * contains content.</p> <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:GetSecretValue</p> </li> <li> <p>kms:Decrypt - required only
         * if you use a customer-managed Amazon Web Services KMS key to encrypt the secret.
         * You do not need this permission to use the account's default Amazon Web Services
         * managed CMK for Secrets Manager.</p> </li> </ul> <p> <b>Related operations</b>
         * </p> <ul> <li> <p>To create a new version of the secret with different encrypted
         * information, use <a>PutSecretValue</a>.</p> </li> <li> <p>To retrieve the
         * non-encrypted details for the secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetSecretValue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSecretValueAsync(const Model::GetSecretValueRequest& request, const GetSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the versions attached to the specified secret. The output does
         * not include the <code>SecretString</code> or <code>SecretBinary</code> fields.
         * By default, the list includes only versions that have at least one staging label
         * in <code>VersionStage</code> attached.</p>  <p>Always check the
         * <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can occasionally return an empty
         * or shorter than expected list of results even when there more results become
         * available. When this happens, the <code>NextToken</code> response parameter
         * contains a value to pass to the next call to the same API to request the next
         * part of the list.</p>  <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:ListSecretVersionIds</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To list the secrets in an account, use
         * <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ListSecretVersionIds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecretVersionIdsOutcome ListSecretVersionIds(const Model::ListSecretVersionIdsRequest& request) const;

        /**
         * <p>Lists all of the versions attached to the specified secret. The output does
         * not include the <code>SecretString</code> or <code>SecretBinary</code> fields.
         * By default, the list includes only versions that have at least one staging label
         * in <code>VersionStage</code> attached.</p>  <p>Always check the
         * <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can occasionally return an empty
         * or shorter than expected list of results even when there more results become
         * available. When this happens, the <code>NextToken</code> response parameter
         * contains a value to pass to the next call to the same API to request the next
         * part of the list.</p>  <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:ListSecretVersionIds</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To list the secrets in an account, use
         * <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ListSecretVersionIds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecretVersionIdsOutcomeCallable ListSecretVersionIdsCallable(const Model::ListSecretVersionIdsRequest& request) const;

        /**
         * <p>Lists all of the versions attached to the specified secret. The output does
         * not include the <code>SecretString</code> or <code>SecretBinary</code> fields.
         * By default, the list includes only versions that have at least one staging label
         * in <code>VersionStage</code> attached.</p>  <p>Always check the
         * <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can occasionally return an empty
         * or shorter than expected list of results even when there more results become
         * available. When this happens, the <code>NextToken</code> response parameter
         * contains a value to pass to the next call to the same API to request the next
         * part of the list.</p>  <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:ListSecretVersionIds</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To list the secrets in an account, use
         * <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ListSecretVersionIds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecretVersionIdsAsync(const Model::ListSecretVersionIdsRequest& request, const ListSecretVersionIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the secrets that are stored by Secrets Manager in the Amazon Web
         * Services account. To list the versions currently stored for a specific secret,
         * use <a>ListSecretVersionIds</a>. The encrypted fields <code>SecretString</code>
         * and <code>SecretBinary</code> are not included in the output. To get that
         * information, call the <a>GetSecretValue</a> operation.</p>  <p>Always
         * check the <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can occasionally return an empty
         * or shorter than expected list of results even when there more results become
         * available. When this happens, the <code>NextToken</code> response parameter
         * contains a value to pass to the next call to the same API to request the next
         * part of the list.</p>  <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:ListSecrets</p> </li> </ul> <p> <b>Related operations</b> </p>
         * <ul> <li> <p>To list the versions attached to a secret, use
         * <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ListSecrets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecretsOutcome ListSecrets(const Model::ListSecretsRequest& request) const;

        /**
         * <p>Lists all of the secrets that are stored by Secrets Manager in the Amazon Web
         * Services account. To list the versions currently stored for a specific secret,
         * use <a>ListSecretVersionIds</a>. The encrypted fields <code>SecretString</code>
         * and <code>SecretBinary</code> are not included in the output. To get that
         * information, call the <a>GetSecretValue</a> operation.</p>  <p>Always
         * check the <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can occasionally return an empty
         * or shorter than expected list of results even when there more results become
         * available. When this happens, the <code>NextToken</code> response parameter
         * contains a value to pass to the next call to the same API to request the next
         * part of the list.</p>  <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:ListSecrets</p> </li> </ul> <p> <b>Related operations</b> </p>
         * <ul> <li> <p>To list the versions attached to a secret, use
         * <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ListSecrets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecretsOutcomeCallable ListSecretsCallable(const Model::ListSecretsRequest& request) const;

        /**
         * <p>Lists all of the secrets that are stored by Secrets Manager in the Amazon Web
         * Services account. To list the versions currently stored for a specific secret,
         * use <a>ListSecretVersionIds</a>. The encrypted fields <code>SecretString</code>
         * and <code>SecretBinary</code> are not included in the output. To get that
         * information, call the <a>GetSecretValue</a> operation.</p>  <p>Always
         * check the <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can occasionally return an empty
         * or shorter than expected list of results even when there more results become
         * available. When this happens, the <code>NextToken</code> response parameter
         * contains a value to pass to the next call to the same API to request the next
         * part of the list.</p>  <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:ListSecrets</p> </li> </ul> <p> <b>Related operations</b> </p>
         * <ul> <li> <p>To list the versions attached to a secret, use
         * <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ListSecrets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecretsAsync(const Model::ListSecretsRequest& request, const ListSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the contents of the specified resource-based permission policy to a
         * secret. A resource-based policy is optional. Alternatively, you can use IAM
         * identity-based policies that specify the secret's Amazon Resource Name (ARN) in
         * the policy statement's <code>Resources</code> element. You can also use a
         * combination of both identity-based and resource-based policies. The affected
         * users and roles receive the permissions that are permitted by all of the
         * relevant policies. For more information, see <a
         * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_resource-based-policies.html">Using
         * Resource-Based Policies for Amazon Web Services Secrets Manager</a>. For the
         * complete description of the Amazon Web Services policy syntax and grammar, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
         * JSON Policy Reference</a> in the <i>IAM User Guide</i>.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:PutResourcePolicy</p> </li> </ul>
         * <p> <b>Related operations</b> </p> <ul> <li> <p>To retrieve the resource policy
         * attached to a secret, use <a>GetResourcePolicy</a>.</p> </li> <li> <p>To delete
         * the resource-based policy attached to a secret, use
         * <a>DeleteResourcePolicy</a>.</p> </li> <li> <p>To list all of the currently
         * available secrets, use <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>Attaches the contents of the specified resource-based permission policy to a
         * secret. A resource-based policy is optional. Alternatively, you can use IAM
         * identity-based policies that specify the secret's Amazon Resource Name (ARN) in
         * the policy statement's <code>Resources</code> element. You can also use a
         * combination of both identity-based and resource-based policies. The affected
         * users and roles receive the permissions that are permitted by all of the
         * relevant policies. For more information, see <a
         * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_resource-based-policies.html">Using
         * Resource-Based Policies for Amazon Web Services Secrets Manager</a>. For the
         * complete description of the Amazon Web Services policy syntax and grammar, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
         * JSON Policy Reference</a> in the <i>IAM User Guide</i>.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:PutResourcePolicy</p> </li> </ul>
         * <p> <b>Related operations</b> </p> <ul> <li> <p>To retrieve the resource policy
         * attached to a secret, use <a>GetResourcePolicy</a>.</p> </li> <li> <p>To delete
         * the resource-based policy attached to a secret, use
         * <a>DeleteResourcePolicy</a>.</p> </li> <li> <p>To list all of the currently
         * available secrets, use <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>Attaches the contents of the specified resource-based permission policy to a
         * secret. A resource-based policy is optional. Alternatively, you can use IAM
         * identity-based policies that specify the secret's Amazon Resource Name (ARN) in
         * the policy statement's <code>Resources</code> element. You can also use a
         * combination of both identity-based and resource-based policies. The affected
         * users and roles receive the permissions that are permitted by all of the
         * relevant policies. For more information, see <a
         * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_resource-based-policies.html">Using
         * Resource-Based Policies for Amazon Web Services Secrets Manager</a>. For the
         * complete description of the Amazon Web Services policy syntax and grammar, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
         * JSON Policy Reference</a> in the <i>IAM User Guide</i>.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:PutResourcePolicy</p> </li> </ul>
         * <p> <b>Related operations</b> </p> <ul> <li> <p>To retrieve the resource policy
         * attached to a secret, use <a>GetResourcePolicy</a>.</p> </li> <li> <p>To delete
         * the resource-based policy attached to a secret, use
         * <a>DeleteResourcePolicy</a>.</p> </li> <li> <p>To list all of the currently
         * available secrets, use <a>ListSecrets</a>.</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stores a new encrypted secret value in the specified secret. To do this, the
         * operation creates a new version and attaches it to the secret. The version can
         * contain a new <code>SecretString</code> value or a new <code>SecretBinary</code>
         * value. You can also specify the staging labels that are initially attached to
         * the new version.</p> <p>We recommend you avoid calling
         * <code>PutSecretValue</code> at a sustained rate of more than once every 10
         * minutes. When you update the secret value, Secrets Manager creates a new version
         * of the secret. Secrets Manager removes outdated versions when there are more
         * than 100, but it does not remove versions created less than 24 hours ago. If you
         * call <code>PutSecretValue</code> more than once every 10 minutes, you create
         * more versions than Secrets Manager removes, and you will reach the quota for
         * secret versions.</p> <ul> <li> <p>If this operation creates the first version
         * for the secret then Secrets Manager automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version.</p> </li> <li> <p>If you do not
         * specify a value for VersionStages then Secrets Manager automatically moves the
         * staging label <code>AWSCURRENT</code> to this new version.</p> </li> <li> <p>If
         * this operation moves the staging label <code>AWSCURRENT</code> from another
         * version to this version, then Secrets Manager also automatically moves the
         * staging label <code>AWSPREVIOUS</code> to the version that
         * <code>AWSCURRENT</code> was removed from.</p> </li> <li> <p>This operation is
         * idempotent. If a version with a <code>VersionId</code> with the same value as
         * the <code>ClientRequestToken</code> parameter already exists and you specify the
         * same secret data, the operation succeeds but does nothing. However, if the
         * secret data is different, then the operation fails because you cannot modify an
         * existing version; you can only create new ones.</p> </li> </ul>  <ul> <li>
         * <p>If you call an operation to encrypt or decrypt the <code>SecretString</code>
         * or <code>SecretBinary</code> for a secret in the same account as the calling
         * user and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:PutSecretValue</p> </li>
         * <li> <p>kms:GenerateDataKey - needed only if you use a customer-managed Amazon
         * Web Services KMS key to encrypt the secret. You do not need this permission to
         * use the account's default Amazon Web Services managed CMK for Secrets
         * Manager.</p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To
         * retrieve the encrypted value you store in the version of a secret, use
         * <a>GetSecretValue</a>.</p> </li> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To get the details for a secret, use
         * <a>DescribeSecret</a>.</p> </li> <li> <p>To list the versions attached to a
         * secret, use <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/PutSecretValue">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSecretValueOutcome PutSecretValue(const Model::PutSecretValueRequest& request) const;

        /**
         * <p>Stores a new encrypted secret value in the specified secret. To do this, the
         * operation creates a new version and attaches it to the secret. The version can
         * contain a new <code>SecretString</code> value or a new <code>SecretBinary</code>
         * value. You can also specify the staging labels that are initially attached to
         * the new version.</p> <p>We recommend you avoid calling
         * <code>PutSecretValue</code> at a sustained rate of more than once every 10
         * minutes. When you update the secret value, Secrets Manager creates a new version
         * of the secret. Secrets Manager removes outdated versions when there are more
         * than 100, but it does not remove versions created less than 24 hours ago. If you
         * call <code>PutSecretValue</code> more than once every 10 minutes, you create
         * more versions than Secrets Manager removes, and you will reach the quota for
         * secret versions.</p> <ul> <li> <p>If this operation creates the first version
         * for the secret then Secrets Manager automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version.</p> </li> <li> <p>If you do not
         * specify a value for VersionStages then Secrets Manager automatically moves the
         * staging label <code>AWSCURRENT</code> to this new version.</p> </li> <li> <p>If
         * this operation moves the staging label <code>AWSCURRENT</code> from another
         * version to this version, then Secrets Manager also automatically moves the
         * staging label <code>AWSPREVIOUS</code> to the version that
         * <code>AWSCURRENT</code> was removed from.</p> </li> <li> <p>This operation is
         * idempotent. If a version with a <code>VersionId</code> with the same value as
         * the <code>ClientRequestToken</code> parameter already exists and you specify the
         * same secret data, the operation succeeds but does nothing. However, if the
         * secret data is different, then the operation fails because you cannot modify an
         * existing version; you can only create new ones.</p> </li> </ul>  <ul> <li>
         * <p>If you call an operation to encrypt or decrypt the <code>SecretString</code>
         * or <code>SecretBinary</code> for a secret in the same account as the calling
         * user and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:PutSecretValue</p> </li>
         * <li> <p>kms:GenerateDataKey - needed only if you use a customer-managed Amazon
         * Web Services KMS key to encrypt the secret. You do not need this permission to
         * use the account's default Amazon Web Services managed CMK for Secrets
         * Manager.</p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To
         * retrieve the encrypted value you store in the version of a secret, use
         * <a>GetSecretValue</a>.</p> </li> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To get the details for a secret, use
         * <a>DescribeSecret</a>.</p> </li> <li> <p>To list the versions attached to a
         * secret, use <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/PutSecretValue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSecretValueOutcomeCallable PutSecretValueCallable(const Model::PutSecretValueRequest& request) const;

        /**
         * <p>Stores a new encrypted secret value in the specified secret. To do this, the
         * operation creates a new version and attaches it to the secret. The version can
         * contain a new <code>SecretString</code> value or a new <code>SecretBinary</code>
         * value. You can also specify the staging labels that are initially attached to
         * the new version.</p> <p>We recommend you avoid calling
         * <code>PutSecretValue</code> at a sustained rate of more than once every 10
         * minutes. When you update the secret value, Secrets Manager creates a new version
         * of the secret. Secrets Manager removes outdated versions when there are more
         * than 100, but it does not remove versions created less than 24 hours ago. If you
         * call <code>PutSecretValue</code> more than once every 10 minutes, you create
         * more versions than Secrets Manager removes, and you will reach the quota for
         * secret versions.</p> <ul> <li> <p>If this operation creates the first version
         * for the secret then Secrets Manager automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version.</p> </li> <li> <p>If you do not
         * specify a value for VersionStages then Secrets Manager automatically moves the
         * staging label <code>AWSCURRENT</code> to this new version.</p> </li> <li> <p>If
         * this operation moves the staging label <code>AWSCURRENT</code> from another
         * version to this version, then Secrets Manager also automatically moves the
         * staging label <code>AWSPREVIOUS</code> to the version that
         * <code>AWSCURRENT</code> was removed from.</p> </li> <li> <p>This operation is
         * idempotent. If a version with a <code>VersionId</code> with the same value as
         * the <code>ClientRequestToken</code> parameter already exists and you specify the
         * same secret data, the operation succeeds but does nothing. However, if the
         * secret data is different, then the operation fails because you cannot modify an
         * existing version; you can only create new ones.</p> </li> </ul>  <ul> <li>
         * <p>If you call an operation to encrypt or decrypt the <code>SecretString</code>
         * or <code>SecretBinary</code> for a secret in the same account as the calling
         * user and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:PutSecretValue</p> </li>
         * <li> <p>kms:GenerateDataKey - needed only if you use a customer-managed Amazon
         * Web Services KMS key to encrypt the secret. You do not need this permission to
         * use the account's default Amazon Web Services managed CMK for Secrets
         * Manager.</p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To
         * retrieve the encrypted value you store in the version of a secret, use
         * <a>GetSecretValue</a>.</p> </li> <li> <p>To create a secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To get the details for a secret, use
         * <a>DescribeSecret</a>.</p> </li> <li> <p>To list the versions attached to a
         * secret, use <a>ListSecretVersionIds</a>.</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/PutSecretValue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSecretValueAsync(const Model::PutSecretValueRequest& request, const PutSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove regions from replication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RemoveRegionsFromReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRegionsFromReplicationOutcome RemoveRegionsFromReplication(const Model::RemoveRegionsFromReplicationRequest& request) const;

        /**
         * <p>Remove regions from replication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RemoveRegionsFromReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRegionsFromReplicationOutcomeCallable RemoveRegionsFromReplicationCallable(const Model::RemoveRegionsFromReplicationRequest& request) const;

        /**
         * <p>Remove regions from replication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RemoveRegionsFromReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRegionsFromReplicationAsync(const Model::RemoveRegionsFromReplicationRequest& request, const RemoveRegionsFromReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Converts an existing secret to a multi-Region secret and begins replication
         * the secret to a list of new regions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ReplicateSecretToRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplicateSecretToRegionsOutcome ReplicateSecretToRegions(const Model::ReplicateSecretToRegionsRequest& request) const;

        /**
         * <p>Converts an existing secret to a multi-Region secret and begins replication
         * the secret to a list of new regions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ReplicateSecretToRegions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplicateSecretToRegionsOutcomeCallable ReplicateSecretToRegionsCallable(const Model::ReplicateSecretToRegionsRequest& request) const;

        /**
         * <p>Converts an existing secret to a multi-Region secret and begins replication
         * the secret to a list of new regions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ReplicateSecretToRegions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplicateSecretToRegionsAsync(const Model::ReplicateSecretToRegionsRequest& request, const ReplicateSecretToRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the scheduled deletion of a secret by removing the
         * <code>DeletedDate</code> time stamp. This makes the secret accessible to query
         * once again.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you
         * must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:RestoreSecret</p> </li> </ul> <p> <b>Related operations</b>
         * </p> <ul> <li> <p>To delete a secret, use <a>DeleteSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RestoreSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreSecretOutcome RestoreSecret(const Model::RestoreSecretRequest& request) const;

        /**
         * <p>Cancels the scheduled deletion of a secret by removing the
         * <code>DeletedDate</code> time stamp. This makes the secret accessible to query
         * once again.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you
         * must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:RestoreSecret</p> </li> </ul> <p> <b>Related operations</b>
         * </p> <ul> <li> <p>To delete a secret, use <a>DeleteSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RestoreSecret">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreSecretOutcomeCallable RestoreSecretCallable(const Model::RestoreSecretRequest& request) const;

        /**
         * <p>Cancels the scheduled deletion of a secret by removing the
         * <code>DeletedDate</code> time stamp. This makes the secret accessible to query
         * once again.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you
         * must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:RestoreSecret</p> </li> </ul> <p> <b>Related operations</b>
         * </p> <ul> <li> <p>To delete a secret, use <a>DeleteSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RestoreSecret">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreSecretAsync(const Model::RestoreSecretRequest& request, const RestoreSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures and starts the asynchronous process of rotating this secret. If
         * you include the configuration parameters, the operation sets those values for
         * the secret and then immediately starts a rotation. If you do not include the
         * configuration parameters, the operation starts a rotation with the values
         * already stored in the secret. After the rotation completes, the protected
         * service and its clients all use the new version of the secret. </p> <p>This
         * required configuration information includes the ARN of an Amazon Web Services
         * Lambda function and optionally, the time between scheduled rotations. The Lambda
         * rotation function creates a new version of the secret and creates or updates the
         * credentials on the protected service to match. After testing the new
         * credentials, the function marks the new secret with the staging label
         * <code>AWSCURRENT</code> so that your clients all immediately begin to use the
         * new version. For more information about rotating secrets and how to configure a
         * Lambda function to rotate the secrets for your protected service, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets.html">Rotating
         * Secrets in Amazon Web Services Secrets Manager</a> in the <i>Amazon Web Services
         * Secrets Manager User Guide</i>.</p> <p>Secrets Manager schedules the next
         * rotation when the previous one completes. Secrets Manager schedules the date by
         * adding the rotation interval (number of days) to the actual date of the last
         * rotation. The service chooses the hour within that 24-hour date window randomly.
         * The minute is also chosen somewhat randomly, but weighted towards the top of the
         * hour and influenced by a variety of factors that help distribute load.</p>
         * <p>The rotation function must end with the versions of the secret in one of two
         * states:</p> <ul> <li> <p>The <code>AWSPENDING</code> and <code>AWSCURRENT</code>
         * staging labels are attached to the same version of the secret, or</p> </li> <li>
         * <p>The <code>AWSPENDING</code> staging label is not attached to any version of
         * the secret.</p> </li> </ul> <p>If the <code>AWSPENDING</code> staging label is
         * present but not attached to the same version as <code>AWSCURRENT</code> then any
         * later invocation of <code>RotateSecret</code> assumes that a previous rotation
         * request is still in progress and returns an error.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:RotateSecret</p> </li> <li>
         * <p>lambda:InvokeFunction (on the function specified in the secret's
         * metadata)</p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To
         * list the secrets in your account, use <a>ListSecrets</a>.</p> </li> <li> <p>To
         * get the details for a version of a secret, use <a>DescribeSecret</a>.</p> </li>
         * <li> <p>To create a new version of a secret, use <a>CreateSecret</a>.</p> </li>
         * <li> <p>To attach staging labels to or remove staging labels from a version of a
         * secret, use <a>UpdateSecretVersionStage</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RotateSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::RotateSecretOutcome RotateSecret(const Model::RotateSecretRequest& request) const;

        /**
         * <p>Configures and starts the asynchronous process of rotating this secret. If
         * you include the configuration parameters, the operation sets those values for
         * the secret and then immediately starts a rotation. If you do not include the
         * configuration parameters, the operation starts a rotation with the values
         * already stored in the secret. After the rotation completes, the protected
         * service and its clients all use the new version of the secret. </p> <p>This
         * required configuration information includes the ARN of an Amazon Web Services
         * Lambda function and optionally, the time between scheduled rotations. The Lambda
         * rotation function creates a new version of the secret and creates or updates the
         * credentials on the protected service to match. After testing the new
         * credentials, the function marks the new secret with the staging label
         * <code>AWSCURRENT</code> so that your clients all immediately begin to use the
         * new version. For more information about rotating secrets and how to configure a
         * Lambda function to rotate the secrets for your protected service, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets.html">Rotating
         * Secrets in Amazon Web Services Secrets Manager</a> in the <i>Amazon Web Services
         * Secrets Manager User Guide</i>.</p> <p>Secrets Manager schedules the next
         * rotation when the previous one completes. Secrets Manager schedules the date by
         * adding the rotation interval (number of days) to the actual date of the last
         * rotation. The service chooses the hour within that 24-hour date window randomly.
         * The minute is also chosen somewhat randomly, but weighted towards the top of the
         * hour and influenced by a variety of factors that help distribute load.</p>
         * <p>The rotation function must end with the versions of the secret in one of two
         * states:</p> <ul> <li> <p>The <code>AWSPENDING</code> and <code>AWSCURRENT</code>
         * staging labels are attached to the same version of the secret, or</p> </li> <li>
         * <p>The <code>AWSPENDING</code> staging label is not attached to any version of
         * the secret.</p> </li> </ul> <p>If the <code>AWSPENDING</code> staging label is
         * present but not attached to the same version as <code>AWSCURRENT</code> then any
         * later invocation of <code>RotateSecret</code> assumes that a previous rotation
         * request is still in progress and returns an error.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:RotateSecret</p> </li> <li>
         * <p>lambda:InvokeFunction (on the function specified in the secret's
         * metadata)</p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To
         * list the secrets in your account, use <a>ListSecrets</a>.</p> </li> <li> <p>To
         * get the details for a version of a secret, use <a>DescribeSecret</a>.</p> </li>
         * <li> <p>To create a new version of a secret, use <a>CreateSecret</a>.</p> </li>
         * <li> <p>To attach staging labels to or remove staging labels from a version of a
         * secret, use <a>UpdateSecretVersionStage</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RotateSecret">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RotateSecretOutcomeCallable RotateSecretCallable(const Model::RotateSecretRequest& request) const;

        /**
         * <p>Configures and starts the asynchronous process of rotating this secret. If
         * you include the configuration parameters, the operation sets those values for
         * the secret and then immediately starts a rotation. If you do not include the
         * configuration parameters, the operation starts a rotation with the values
         * already stored in the secret. After the rotation completes, the protected
         * service and its clients all use the new version of the secret. </p> <p>This
         * required configuration information includes the ARN of an Amazon Web Services
         * Lambda function and optionally, the time between scheduled rotations. The Lambda
         * rotation function creates a new version of the secret and creates or updates the
         * credentials on the protected service to match. After testing the new
         * credentials, the function marks the new secret with the staging label
         * <code>AWSCURRENT</code> so that your clients all immediately begin to use the
         * new version. For more information about rotating secrets and how to configure a
         * Lambda function to rotate the secrets for your protected service, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets.html">Rotating
         * Secrets in Amazon Web Services Secrets Manager</a> in the <i>Amazon Web Services
         * Secrets Manager User Guide</i>.</p> <p>Secrets Manager schedules the next
         * rotation when the previous one completes. Secrets Manager schedules the date by
         * adding the rotation interval (number of days) to the actual date of the last
         * rotation. The service chooses the hour within that 24-hour date window randomly.
         * The minute is also chosen somewhat randomly, but weighted towards the top of the
         * hour and influenced by a variety of factors that help distribute load.</p>
         * <p>The rotation function must end with the versions of the secret in one of two
         * states:</p> <ul> <li> <p>The <code>AWSPENDING</code> and <code>AWSCURRENT</code>
         * staging labels are attached to the same version of the secret, or</p> </li> <li>
         * <p>The <code>AWSPENDING</code> staging label is not attached to any version of
         * the secret.</p> </li> </ul> <p>If the <code>AWSPENDING</code> staging label is
         * present but not attached to the same version as <code>AWSCURRENT</code> then any
         * later invocation of <code>RotateSecret</code> assumes that a previous rotation
         * request is still in progress and returns an error.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:RotateSecret</p> </li> <li>
         * <p>lambda:InvokeFunction (on the function specified in the secret's
         * metadata)</p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>To
         * list the secrets in your account, use <a>ListSecrets</a>.</p> </li> <li> <p>To
         * get the details for a version of a secret, use <a>DescribeSecret</a>.</p> </li>
         * <li> <p>To create a new version of a secret, use <a>CreateSecret</a>.</p> </li>
         * <li> <p>To attach staging labels to or remove staging labels from a version of a
         * secret, use <a>UpdateSecretVersionStage</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RotateSecret">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RotateSecretAsync(const Model::RotateSecretRequest& request, const RotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the secret from replication and promotes the secret to a regional
         * secret in the replica Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/StopReplicationToReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::StopReplicationToReplicaOutcome StopReplicationToReplica(const Model::StopReplicationToReplicaRequest& request) const;

        /**
         * <p>Removes the secret from replication and promotes the secret to a regional
         * secret in the replica Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/StopReplicationToReplica">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopReplicationToReplicaOutcomeCallable StopReplicationToReplicaCallable(const Model::StopReplicationToReplicaRequest& request) const;

        /**
         * <p>Removes the secret from replication and promotes the secret to a regional
         * secret in the replica Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/StopReplicationToReplica">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopReplicationToReplicaAsync(const Model::StopReplicationToReplicaRequest& request, const StopReplicationToReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches one or more tags, each consisting of a key name and a value, to the
         * specified secret. Tags are part of the secret's overall metadata, and are not
         * associated with any specific version of the secret. This operation only appends
         * tags to the existing list of tags. To remove tags, you must use
         * <a>UntagResource</a>.</p> <p>The following basic restrictions apply to tags:</p>
         * <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li> <p>Maximum key
         * length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value
         * length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and values are
         * case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code> prefix in
         * your tag names or values because Amazon Web Services reserves it for Amazon Web
         * Services use. You can't edit or delete tag names or values with this prefix.
         * Tags with this prefix do not count against your tags per secret limit.</p> </li>
         * <li> <p>If you use your tagging schema across multiple services and resources,
         * remember other services might have restrictions on allowed characters. Generally
         * allowed characters: letters, spaces, and numbers representable in UTF-8, plus
         * the following special characters: + - = . _ : / @.</p> </li> </ul> 
         * <p>If you use tags as part of your security strategy, then adding or removing a
         * tag can change permissions. If successfully completing this operation would
         * result in you losing your permissions for this secret, then the operation is
         * blocked and returns an Access Denied error.</p>  <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:TagResource</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To remove one or more tags from the
         * collection attached to a secret, use <a>UntagResource</a>.</p> </li> <li> <p>To
         * view the list of tags attached to a secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Attaches one or more tags, each consisting of a key name and a value, to the
         * specified secret. Tags are part of the secret's overall metadata, and are not
         * associated with any specific version of the secret. This operation only appends
         * tags to the existing list of tags. To remove tags, you must use
         * <a>UntagResource</a>.</p> <p>The following basic restrictions apply to tags:</p>
         * <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li> <p>Maximum key
         * length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value
         * length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and values are
         * case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code> prefix in
         * your tag names or values because Amazon Web Services reserves it for Amazon Web
         * Services use. You can't edit or delete tag names or values with this prefix.
         * Tags with this prefix do not count against your tags per secret limit.</p> </li>
         * <li> <p>If you use your tagging schema across multiple services and resources,
         * remember other services might have restrictions on allowed characters. Generally
         * allowed characters: letters, spaces, and numbers representable in UTF-8, plus
         * the following special characters: + - = . _ : / @.</p> </li> </ul> 
         * <p>If you use tags as part of your security strategy, then adding or removing a
         * tag can change permissions. If successfully completing this operation would
         * result in you losing your permissions for this secret, then the operation is
         * blocked and returns an Access Denied error.</p>  <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:TagResource</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To remove one or more tags from the
         * collection attached to a secret, use <a>UntagResource</a>.</p> </li> <li> <p>To
         * view the list of tags attached to a secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Attaches one or more tags, each consisting of a key name and a value, to the
         * specified secret. Tags are part of the secret's overall metadata, and are not
         * associated with any specific version of the secret. This operation only appends
         * tags to the existing list of tags. To remove tags, you must use
         * <a>UntagResource</a>.</p> <p>The following basic restrictions apply to tags:</p>
         * <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li> <p>Maximum key
         * length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value
         * length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and values are
         * case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code> prefix in
         * your tag names or values because Amazon Web Services reserves it for Amazon Web
         * Services use. You can't edit or delete tag names or values with this prefix.
         * Tags with this prefix do not count against your tags per secret limit.</p> </li>
         * <li> <p>If you use your tagging schema across multiple services and resources,
         * remember other services might have restrictions on allowed characters. Generally
         * allowed characters: letters, spaces, and numbers representable in UTF-8, plus
         * the following special characters: + - = . _ : / @.</p> </li> </ul> 
         * <p>If you use tags as part of your security strategy, then adding or removing a
         * tag can change permissions. If successfully completing this operation would
         * result in you losing your permissions for this secret, then the operation is
         * blocked and returns an Access Denied error.</p>  <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p>secretsmanager:TagResource</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To remove one or more tags from the
         * collection attached to a secret, use <a>UntagResource</a>.</p> </li> <li> <p>To
         * view the list of tags attached to a secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified secret.</p> <p>This operation is
         * idempotent. If a requested tag is not attached to the secret, no error is
         * returned and the secret metadata is unchanged.</p>  <p>If you use
         * tags as part of your security strategy, then removing a tag can change
         * permissions. If successfully completing this operation would result in you
         * losing your permissions for this secret, then the operation is blocked and
         * returns an Access Denied error.</p>  <p> <b>Minimum permissions</b>
         * </p> <p>To run this command, you must have the following permissions:</p> <ul>
         * <li> <p>secretsmanager:UntagResource</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To add one or more tags to the collection
         * attached to a secret, use <a>TagResource</a>.</p> </li> <li> <p>To view the list
         * of tags attached to a secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified secret.</p> <p>This operation is
         * idempotent. If a requested tag is not attached to the secret, no error is
         * returned and the secret metadata is unchanged.</p>  <p>If you use
         * tags as part of your security strategy, then removing a tag can change
         * permissions. If successfully completing this operation would result in you
         * losing your permissions for this secret, then the operation is blocked and
         * returns an Access Denied error.</p>  <p> <b>Minimum permissions</b>
         * </p> <p>To run this command, you must have the following permissions:</p> <ul>
         * <li> <p>secretsmanager:UntagResource</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To add one or more tags to the collection
         * attached to a secret, use <a>TagResource</a>.</p> </li> <li> <p>To view the list
         * of tags attached to a secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified secret.</p> <p>This operation is
         * idempotent. If a requested tag is not attached to the secret, no error is
         * returned and the secret metadata is unchanged.</p>  <p>If you use
         * tags as part of your security strategy, then removing a tag can change
         * permissions. If successfully completing this operation would result in you
         * losing your permissions for this secret, then the operation is blocked and
         * returns an Access Denied error.</p>  <p> <b>Minimum permissions</b>
         * </p> <p>To run this command, you must have the following permissions:</p> <ul>
         * <li> <p>secretsmanager:UntagResource</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To add one or more tags to the collection
         * attached to a secret, use <a>TagResource</a>.</p> </li> <li> <p>To view the list
         * of tags attached to a secret, use <a>DescribeSecret</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies many of the details of the specified secret. </p> <p>To change the
         * secret value, you can also use <a>PutSecretValue</a>.</p> <p>To change the
         * rotation configuration of a secret, use <a>RotateSecret</a> instead.</p> <p>We
         * recommend you avoid calling <code>UpdateSecret</code> at a sustained rate of
         * more than once every 10 minutes. When you call <code>UpdateSecret</code> to
         * update the secret value, Secrets Manager creates a new version of the secret.
         * Secrets Manager removes outdated versions when there are more than 100, but it
         * does not remove versions created less than 24 hours ago. If you update the
         * secret value more than once every 10 minutes, you create more versions than
         * Secrets Manager removes, and you will reach the quota for secret versions.</p>
         *  <p>The Secrets Manager console uses only the <code>SecretString</code>
         * parameter and therefore limits you to encrypting and storing only a text string.
         * To encrypt and store binary data as part of the version of a secret, you must
         * use either the Amazon Web Services CLI or one of the Amazon Web Services
         * SDKs.</p>  <ul> <li> <p>If a version with a <code>VersionId</code> with
         * the same value as the <code>ClientRequestToken</code> parameter already exists,
         * the operation results in an error. You cannot modify an existing version, you
         * can only create a new version.</p> </li> <li> <p>If you include
         * <code>SecretString</code> or <code>SecretBinary</code> to create a new secret
         * version, Secrets Manager automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version. </p> </li> </ul>  <ul> <li>
         * <p>If you call an operation to encrypt or decrypt the <code>SecretString</code>
         * or <code>SecretBinary</code> for a secret in the same account as the calling
         * user and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:UpdateSecret</p> </li>
         * <li> <p>kms:GenerateDataKey - needed only if you use a custom Amazon Web
         * Services KMS key to encrypt the secret. You do not need this permission to use
         * the account's Amazon Web Services managed CMK for Secrets Manager.</p> </li>
         * <li> <p>kms:Decrypt - needed only if you use a custom Amazon Web Services KMS
         * key to encrypt the secret. You do not need this permission to use the account's
         * Amazon Web Services managed CMK for Secrets Manager.</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To create a new secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To add only a new version to an existing
         * secret, use <a>PutSecretValue</a>.</p> </li> <li> <p>To get the details for a
         * secret, use <a>DescribeSecret</a>.</p> </li> <li> <p>To list the versions
         * contained in a secret, use <a>ListSecretVersionIds</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UpdateSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecretOutcome UpdateSecret(const Model::UpdateSecretRequest& request) const;

        /**
         * <p>Modifies many of the details of the specified secret. </p> <p>To change the
         * secret value, you can also use <a>PutSecretValue</a>.</p> <p>To change the
         * rotation configuration of a secret, use <a>RotateSecret</a> instead.</p> <p>We
         * recommend you avoid calling <code>UpdateSecret</code> at a sustained rate of
         * more than once every 10 minutes. When you call <code>UpdateSecret</code> to
         * update the secret value, Secrets Manager creates a new version of the secret.
         * Secrets Manager removes outdated versions when there are more than 100, but it
         * does not remove versions created less than 24 hours ago. If you update the
         * secret value more than once every 10 minutes, you create more versions than
         * Secrets Manager removes, and you will reach the quota for secret versions.</p>
         *  <p>The Secrets Manager console uses only the <code>SecretString</code>
         * parameter and therefore limits you to encrypting and storing only a text string.
         * To encrypt and store binary data as part of the version of a secret, you must
         * use either the Amazon Web Services CLI or one of the Amazon Web Services
         * SDKs.</p>  <ul> <li> <p>If a version with a <code>VersionId</code> with
         * the same value as the <code>ClientRequestToken</code> parameter already exists,
         * the operation results in an error. You cannot modify an existing version, you
         * can only create a new version.</p> </li> <li> <p>If you include
         * <code>SecretString</code> or <code>SecretBinary</code> to create a new secret
         * version, Secrets Manager automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version. </p> </li> </ul>  <ul> <li>
         * <p>If you call an operation to encrypt or decrypt the <code>SecretString</code>
         * or <code>SecretBinary</code> for a secret in the same account as the calling
         * user and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:UpdateSecret</p> </li>
         * <li> <p>kms:GenerateDataKey - needed only if you use a custom Amazon Web
         * Services KMS key to encrypt the secret. You do not need this permission to use
         * the account's Amazon Web Services managed CMK for Secrets Manager.</p> </li>
         * <li> <p>kms:Decrypt - needed only if you use a custom Amazon Web Services KMS
         * key to encrypt the secret. You do not need this permission to use the account's
         * Amazon Web Services managed CMK for Secrets Manager.</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To create a new secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To add only a new version to an existing
         * secret, use <a>PutSecretValue</a>.</p> </li> <li> <p>To get the details for a
         * secret, use <a>DescribeSecret</a>.</p> </li> <li> <p>To list the versions
         * contained in a secret, use <a>ListSecretVersionIds</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UpdateSecret">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecretOutcomeCallable UpdateSecretCallable(const Model::UpdateSecretRequest& request) const;

        /**
         * <p>Modifies many of the details of the specified secret. </p> <p>To change the
         * secret value, you can also use <a>PutSecretValue</a>.</p> <p>To change the
         * rotation configuration of a secret, use <a>RotateSecret</a> instead.</p> <p>We
         * recommend you avoid calling <code>UpdateSecret</code> at a sustained rate of
         * more than once every 10 minutes. When you call <code>UpdateSecret</code> to
         * update the secret value, Secrets Manager creates a new version of the secret.
         * Secrets Manager removes outdated versions when there are more than 100, but it
         * does not remove versions created less than 24 hours ago. If you update the
         * secret value more than once every 10 minutes, you create more versions than
         * Secrets Manager removes, and you will reach the quota for secret versions.</p>
         *  <p>The Secrets Manager console uses only the <code>SecretString</code>
         * parameter and therefore limits you to encrypting and storing only a text string.
         * To encrypt and store binary data as part of the version of a secret, you must
         * use either the Amazon Web Services CLI or one of the Amazon Web Services
         * SDKs.</p>  <ul> <li> <p>If a version with a <code>VersionId</code> with
         * the same value as the <code>ClientRequestToken</code> parameter already exists,
         * the operation results in an error. You cannot modify an existing version, you
         * can only create a new version.</p> </li> <li> <p>If you include
         * <code>SecretString</code> or <code>SecretBinary</code> to create a new secret
         * version, Secrets Manager automatically attaches the staging label
         * <code>AWSCURRENT</code> to the new version. </p> </li> </ul>  <ul> <li>
         * <p>If you call an operation to encrypt or decrypt the <code>SecretString</code>
         * or <code>SecretBinary</code> for a secret in the same account as the calling
         * user and that secret doesn't specify a Amazon Web Services KMS encryption key,
         * Secrets Manager uses the account's default Amazon Web Services managed customer
         * master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
         * doesn't already exist in your account then Secrets Manager creates it for you
         * automatically. All users and roles in the same Amazon Web Services account
         * automatically have access to use the default CMK. Note that if an Secrets
         * Manager API call results in Amazon Web Services creating the account's Amazon
         * Web Services-managed CMK, it can result in a one-time significant delay in
         * returning the result.</p> </li> <li> <p>If the secret resides in a different
         * Amazon Web Services account from the credentials calling an API that requires
         * encryption or decryption of the secret value then you must create and use a
         * custom Amazon Web Services KMS CMK because you can't access the default CMK for
         * the account using credentials from a different Amazon Web Services account.
         * Store the ARN of the CMK in the secret when you create the secret or when you
         * update it by including it in the <code>KMSKeyId</code>. If you call an API that
         * must encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code>
         * using credentials from a different account then the Amazon Web Services KMS key
         * policy must grant cross-account access to that other account's user or role for
         * both the kms:GenerateDataKey and kms:Decrypt operations.</p> </li> </ul> 
         * <p> <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>secretsmanager:UpdateSecret</p> </li>
         * <li> <p>kms:GenerateDataKey - needed only if you use a custom Amazon Web
         * Services KMS key to encrypt the secret. You do not need this permission to use
         * the account's Amazon Web Services managed CMK for Secrets Manager.</p> </li>
         * <li> <p>kms:Decrypt - needed only if you use a custom Amazon Web Services KMS
         * key to encrypt the secret. You do not need this permission to use the account's
         * Amazon Web Services managed CMK for Secrets Manager.</p> </li> </ul> <p>
         * <b>Related operations</b> </p> <ul> <li> <p>To create a new secret, use
         * <a>CreateSecret</a>.</p> </li> <li> <p>To add only a new version to an existing
         * secret, use <a>PutSecretValue</a>.</p> </li> <li> <p>To get the details for a
         * secret, use <a>DescribeSecret</a>.</p> </li> <li> <p>To list the versions
         * contained in a secret, use <a>ListSecretVersionIds</a>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UpdateSecret">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecretAsync(const Model::UpdateSecretRequest& request, const UpdateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the staging labels attached to a version of a secret. Staging labels
         * are used to track a version as it progresses through the secret rotation
         * process. You can attach a staging label to only one version of a secret at a
         * time. If a staging label to be added is already attached to another version,
         * then it is moved--removed from the other version first and then attached to this
         * one. For more information about staging labels, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/terms-concepts.html#term_staging-label">Staging
         * Labels</a> in the <i>Amazon Web Services Secrets Manager User Guide</i>. </p>
         * <p>The staging labels that you specify in the <code>VersionStage</code>
         * parameter are added to the existing list of staging labels--they don't replace
         * it.</p> <p>You can move the <code>AWSCURRENT</code> staging label to this
         * version by including it in this call.</p>  <p>Whenever you move
         * <code>AWSCURRENT</code>, Secrets Manager automatically moves the label
         * <code>AWSPREVIOUS</code> to the version that <code>AWSCURRENT</code> was removed
         * from.</p>  <p>If this action results in the last label being removed from
         * a version, then the version is considered to be 'deprecated' and can be deleted
         * by Secrets Manager.</p> <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:UpdateSecretVersionStage</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To get the list of staging labels that are
         * currently associated with a version of a secret, use <code>
         * <a>DescribeSecret</a> </code> and examine the
         * <code>SecretVersionsToStages</code> response value. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UpdateSecretVersionStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecretVersionStageOutcome UpdateSecretVersionStage(const Model::UpdateSecretVersionStageRequest& request) const;

        /**
         * <p>Modifies the staging labels attached to a version of a secret. Staging labels
         * are used to track a version as it progresses through the secret rotation
         * process. You can attach a staging label to only one version of a secret at a
         * time. If a staging label to be added is already attached to another version,
         * then it is moved--removed from the other version first and then attached to this
         * one. For more information about staging labels, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/terms-concepts.html#term_staging-label">Staging
         * Labels</a> in the <i>Amazon Web Services Secrets Manager User Guide</i>. </p>
         * <p>The staging labels that you specify in the <code>VersionStage</code>
         * parameter are added to the existing list of staging labels--they don't replace
         * it.</p> <p>You can move the <code>AWSCURRENT</code> staging label to this
         * version by including it in this call.</p>  <p>Whenever you move
         * <code>AWSCURRENT</code>, Secrets Manager automatically moves the label
         * <code>AWSPREVIOUS</code> to the version that <code>AWSCURRENT</code> was removed
         * from.</p>  <p>If this action results in the last label being removed from
         * a version, then the version is considered to be 'deprecated' and can be deleted
         * by Secrets Manager.</p> <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:UpdateSecretVersionStage</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To get the list of staging labels that are
         * currently associated with a version of a secret, use <code>
         * <a>DescribeSecret</a> </code> and examine the
         * <code>SecretVersionsToStages</code> response value. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UpdateSecretVersionStage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecretVersionStageOutcomeCallable UpdateSecretVersionStageCallable(const Model::UpdateSecretVersionStageRequest& request) const;

        /**
         * <p>Modifies the staging labels attached to a version of a secret. Staging labels
         * are used to track a version as it progresses through the secret rotation
         * process. You can attach a staging label to only one version of a secret at a
         * time. If a staging label to be added is already attached to another version,
         * then it is moved--removed from the other version first and then attached to this
         * one. For more information about staging labels, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/terms-concepts.html#term_staging-label">Staging
         * Labels</a> in the <i>Amazon Web Services Secrets Manager User Guide</i>. </p>
         * <p>The staging labels that you specify in the <code>VersionStage</code>
         * parameter are added to the existing list of staging labels--they don't replace
         * it.</p> <p>You can move the <code>AWSCURRENT</code> staging label to this
         * version by including it in this call.</p>  <p>Whenever you move
         * <code>AWSCURRENT</code>, Secrets Manager automatically moves the label
         * <code>AWSPREVIOUS</code> to the version that <code>AWSCURRENT</code> was removed
         * from.</p>  <p>If this action results in the last label being removed from
         * a version, then the version is considered to be 'deprecated' and can be deleted
         * by Secrets Manager.</p> <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li>
         * <p>secretsmanager:UpdateSecretVersionStage</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p>To get the list of staging labels that are
         * currently associated with a version of a secret, use <code>
         * <a>DescribeSecret</a> </code> and examine the
         * <code>SecretVersionsToStages</code> response value. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UpdateSecretVersionStage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecretVersionStageAsync(const Model::UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates that the resource policy does not grant a wide range of IAM
         * principals access to your secret. The JSON request string input and response
         * output displays formatted code with white space and line breaks for better
         * readability. Submit your input as a single line JSON string. A resource-based
         * policy is optional for secrets.</p> <p>The API performs three checks when
         * validating the secret:</p> <ul> <li> <p>Sends a call to <a
         * href="https://aws.amazon.com/blogs/security/protect-sensitive-data-in-the-cloud-with-automated-reasoning-zelkova/">Zelkova</a>,
         * an automated reasoning engine, to ensure your Resource Policy does not allow
         * broad access to your secret.</p> </li> <li> <p>Checks for correct syntax in a
         * policy.</p> </li> <li> <p>Verifies the policy does not lock out a caller.</p>
         * </li> </ul> <p> <b>Minimum Permissions</b> </p> <p>You must have the permissions
         * required to access the following APIs:</p> <ul> <li> <p>
         * <code>secretsmanager:PutResourcePolicy</code> </p> </li> <li> <p>
         * <code>secretsmanager:ValidateResourcePolicy</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ValidateResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateResourcePolicyOutcome ValidateResourcePolicy(const Model::ValidateResourcePolicyRequest& request) const;

        /**
         * <p>Validates that the resource policy does not grant a wide range of IAM
         * principals access to your secret. The JSON request string input and response
         * output displays formatted code with white space and line breaks for better
         * readability. Submit your input as a single line JSON string. A resource-based
         * policy is optional for secrets.</p> <p>The API performs three checks when
         * validating the secret:</p> <ul> <li> <p>Sends a call to <a
         * href="https://aws.amazon.com/blogs/security/protect-sensitive-data-in-the-cloud-with-automated-reasoning-zelkova/">Zelkova</a>,
         * an automated reasoning engine, to ensure your Resource Policy does not allow
         * broad access to your secret.</p> </li> <li> <p>Checks for correct syntax in a
         * policy.</p> </li> <li> <p>Verifies the policy does not lock out a caller.</p>
         * </li> </ul> <p> <b>Minimum Permissions</b> </p> <p>You must have the permissions
         * required to access the following APIs:</p> <ul> <li> <p>
         * <code>secretsmanager:PutResourcePolicy</code> </p> </li> <li> <p>
         * <code>secretsmanager:ValidateResourcePolicy</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ValidateResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateResourcePolicyOutcomeCallable ValidateResourcePolicyCallable(const Model::ValidateResourcePolicyRequest& request) const;

        /**
         * <p>Validates that the resource policy does not grant a wide range of IAM
         * principals access to your secret. The JSON request string input and response
         * output displays formatted code with white space and line breaks for better
         * readability. Submit your input as a single line JSON string. A resource-based
         * policy is optional for secrets.</p> <p>The API performs three checks when
         * validating the secret:</p> <ul> <li> <p>Sends a call to <a
         * href="https://aws.amazon.com/blogs/security/protect-sensitive-data-in-the-cloud-with-automated-reasoning-zelkova/">Zelkova</a>,
         * an automated reasoning engine, to ensure your Resource Policy does not allow
         * broad access to your secret.</p> </li> <li> <p>Checks for correct syntax in a
         * policy.</p> </li> <li> <p>Verifies the policy does not lock out a caller.</p>
         * </li> </ul> <p> <b>Minimum Permissions</b> </p> <p>You must have the permissions
         * required to access the following APIs:</p> <ul> <li> <p>
         * <code>secretsmanager:PutResourcePolicy</code> </p> </li> <li> <p>
         * <code>secretsmanager:ValidateResourcePolicy</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ValidateResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateResourcePolicyAsync(const Model::ValidateResourcePolicyRequest& request, const ValidateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelRotateSecretAsyncHelper(const Model::CancelRotateSecretRequest& request, const CancelRotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSecretAsyncHelper(const Model::CreateSecretRequest& request, const CreateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourcePolicyAsyncHelper(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSecretAsyncHelper(const Model::DeleteSecretRequest& request, const DeleteSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSecretAsyncHelper(const Model::DescribeSecretRequest& request, const DescribeSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRandomPasswordAsyncHelper(const Model::GetRandomPasswordRequest& request, const GetRandomPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcePolicyAsyncHelper(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSecretValueAsyncHelper(const Model::GetSecretValueRequest& request, const GetSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecretVersionIdsAsyncHelper(const Model::ListSecretVersionIdsRequest& request, const ListSecretVersionIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecretsAsyncHelper(const Model::ListSecretsRequest& request, const ListSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourcePolicyAsyncHelper(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSecretValueAsyncHelper(const Model::PutSecretValueRequest& request, const PutSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveRegionsFromReplicationAsyncHelper(const Model::RemoveRegionsFromReplicationRequest& request, const RemoveRegionsFromReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReplicateSecretToRegionsAsyncHelper(const Model::ReplicateSecretToRegionsRequest& request, const ReplicateSecretToRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreSecretAsyncHelper(const Model::RestoreSecretRequest& request, const RestoreSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RotateSecretAsyncHelper(const Model::RotateSecretRequest& request, const RotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopReplicationToReplicaAsyncHelper(const Model::StopReplicationToReplicaRequest& request, const StopReplicationToReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSecretAsyncHelper(const Model::UpdateSecretRequest& request, const UpdateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSecretVersionStageAsyncHelper(const Model::UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ValidateResourcePolicyAsyncHelper(const Model::ValidateResourcePolicyRequest& request, const ValidateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SecretsManager
} // namespace Aws
