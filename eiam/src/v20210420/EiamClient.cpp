/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/eiam/v20210420/EiamClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Eiam::V20210420;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-20";
    const string ENDPOINT = "eiam.tencentcloudapi.com";
}

EiamClient::EiamClient(const Credential &credential, const string &region) :
    EiamClient(credential, region, ClientProfile())
{
}

EiamClient::EiamClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EiamClient::AddUserToUserGroupOutcome EiamClient::AddUserToUserGroup(const AddUserToUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserToUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserToUserGroupResponse rsp = AddUserToUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserToUserGroupOutcome(rsp);
        else
            return AddUserToUserGroupOutcome(o.GetError());
    }
    else
    {
        return AddUserToUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::AddUserToUserGroupAsync(const AddUserToUserGroupRequest& request, const AddUserToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUserToUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::AddUserToUserGroupOutcomeCallable EiamClient::AddUserToUserGroupCallable(const AddUserToUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUserToUserGroupOutcome()>>(
        [this, request]()
        {
            return this->AddUserToUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::CreateOrgNodeOutcome EiamClient::CreateOrgNode(const CreateOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrgNodeResponse rsp = CreateOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrgNodeOutcome(rsp);
        else
            return CreateOrgNodeOutcome(o.GetError());
    }
    else
    {
        return CreateOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::CreateOrgNodeAsync(const CreateOrgNodeRequest& request, const CreateOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrgNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::CreateOrgNodeOutcomeCallable EiamClient::CreateOrgNodeCallable(const CreateOrgNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrgNodeOutcome()>>(
        [this, request]()
        {
            return this->CreateOrgNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::CreateUserOutcome EiamClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void EiamClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::CreateUserOutcomeCallable EiamClient::CreateUserCallable(const CreateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
        [this, request]()
        {
            return this->CreateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::CreateUserGroupOutcome EiamClient::CreateUserGroup(const CreateUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserGroupResponse rsp = CreateUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserGroupOutcome(rsp);
        else
            return CreateUserGroupOutcome(o.GetError());
    }
    else
    {
        return CreateUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::CreateUserGroupOutcomeCallable EiamClient::CreateUserGroupCallable(const CreateUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::DeleteOrgNodeOutcome EiamClient::DeleteOrgNode(const DeleteOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrgNodeResponse rsp = DeleteOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrgNodeOutcome(rsp);
        else
            return DeleteOrgNodeOutcome(o.GetError());
    }
    else
    {
        return DeleteOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::DeleteOrgNodeAsync(const DeleteOrgNodeRequest& request, const DeleteOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrgNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::DeleteOrgNodeOutcomeCallable EiamClient::DeleteOrgNodeCallable(const DeleteOrgNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrgNodeOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrgNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::DeleteUserOutcome EiamClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void EiamClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::DeleteUserOutcomeCallable EiamClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::DeleteUserGroupOutcome EiamClient::DeleteUserGroup(const DeleteUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserGroupResponse rsp = DeleteUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserGroupOutcome(rsp);
        else
            return DeleteUserGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::DeleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::DeleteUserGroupOutcomeCallable EiamClient::DeleteUserGroupCallable(const DeleteUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::DescribeApplicationOutcome EiamClient::DescribeApplication(const DescribeApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationResponse rsp = DescribeApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationOutcome(rsp);
        else
            return DescribeApplicationOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::DescribeApplicationOutcomeCallable EiamClient::DescribeApplicationCallable(const DescribeApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::DescribeOrgNodeOutcome EiamClient::DescribeOrgNode(const DescribeOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrgNodeResponse rsp = DescribeOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrgNodeOutcome(rsp);
        else
            return DescribeOrgNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeOrgNodeAsync(const DescribeOrgNodeRequest& request, const DescribeOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrgNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::DescribeOrgNodeOutcomeCallable EiamClient::DescribeOrgNodeCallable(const DescribeOrgNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrgNodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrgNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::DescribePublicKeyOutcome EiamClient::DescribePublicKey(const DescribePublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicKeyResponse rsp = DescribePublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicKeyOutcome(rsp);
        else
            return DescribePublicKeyOutcome(o.GetError());
    }
    else
    {
        return DescribePublicKeyOutcome(outcome.GetError());
    }
}

void EiamClient::DescribePublicKeyAsync(const DescribePublicKeyRequest& request, const DescribePublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::DescribePublicKeyOutcomeCallable EiamClient::DescribePublicKeyCallable(const DescribePublicKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::DescribeUserGroupOutcome EiamClient::DescribeUserGroup(const DescribeUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserGroupResponse rsp = DescribeUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserGroupOutcome(rsp);
        else
            return DescribeUserGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeUserGroupAsync(const DescribeUserGroupRequest& request, const DescribeUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::DescribeUserGroupOutcomeCallable EiamClient::DescribeUserGroupCallable(const DescribeUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::DescribeUserInfoOutcome EiamClient::DescribeUserInfo(const DescribeUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInfoResponse rsp = DescribeUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInfoOutcome(rsp);
        else
            return DescribeUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInfoOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeUserInfoAsync(const DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::DescribeUserInfoOutcomeCallable EiamClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListApplicationAuthorizationsOutcome EiamClient::ListApplicationAuthorizations(const ListApplicationAuthorizationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListApplicationAuthorizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListApplicationAuthorizationsResponse rsp = ListApplicationAuthorizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListApplicationAuthorizationsOutcome(rsp);
        else
            return ListApplicationAuthorizationsOutcome(o.GetError());
    }
    else
    {
        return ListApplicationAuthorizationsOutcome(outcome.GetError());
    }
}

void EiamClient::ListApplicationAuthorizationsAsync(const ListApplicationAuthorizationsRequest& request, const ListApplicationAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListApplicationAuthorizations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListApplicationAuthorizationsOutcomeCallable EiamClient::ListApplicationAuthorizationsCallable(const ListApplicationAuthorizationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListApplicationAuthorizationsOutcome()>>(
        [this, request]()
        {
            return this->ListApplicationAuthorizations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListApplicationsOutcome EiamClient::ListApplications(const ListApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListApplicationsResponse rsp = ListApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListApplicationsOutcome(rsp);
        else
            return ListApplicationsOutcome(o.GetError());
    }
    else
    {
        return ListApplicationsOutcome(outcome.GetError());
    }
}

void EiamClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListApplicationsOutcomeCallable EiamClient::ListApplicationsCallable(const ListApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListApplicationsOutcome()>>(
        [this, request]()
        {
            return this->ListApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListAuthorizedApplicationsToOrgNodeOutcome EiamClient::ListAuthorizedApplicationsToOrgNode(const ListAuthorizedApplicationsToOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "ListAuthorizedApplicationsToOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAuthorizedApplicationsToOrgNodeResponse rsp = ListAuthorizedApplicationsToOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAuthorizedApplicationsToOrgNodeOutcome(rsp);
        else
            return ListAuthorizedApplicationsToOrgNodeOutcome(o.GetError());
    }
    else
    {
        return ListAuthorizedApplicationsToOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::ListAuthorizedApplicationsToOrgNodeAsync(const ListAuthorizedApplicationsToOrgNodeRequest& request, const ListAuthorizedApplicationsToOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAuthorizedApplicationsToOrgNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListAuthorizedApplicationsToOrgNodeOutcomeCallable EiamClient::ListAuthorizedApplicationsToOrgNodeCallable(const ListAuthorizedApplicationsToOrgNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAuthorizedApplicationsToOrgNodeOutcome()>>(
        [this, request]()
        {
            return this->ListAuthorizedApplicationsToOrgNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListAuthorizedApplicationsToUserOutcome EiamClient::ListAuthorizedApplicationsToUser(const ListAuthorizedApplicationsToUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListAuthorizedApplicationsToUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAuthorizedApplicationsToUserResponse rsp = ListAuthorizedApplicationsToUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAuthorizedApplicationsToUserOutcome(rsp);
        else
            return ListAuthorizedApplicationsToUserOutcome(o.GetError());
    }
    else
    {
        return ListAuthorizedApplicationsToUserOutcome(outcome.GetError());
    }
}

void EiamClient::ListAuthorizedApplicationsToUserAsync(const ListAuthorizedApplicationsToUserRequest& request, const ListAuthorizedApplicationsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAuthorizedApplicationsToUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListAuthorizedApplicationsToUserOutcomeCallable EiamClient::ListAuthorizedApplicationsToUserCallable(const ListAuthorizedApplicationsToUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAuthorizedApplicationsToUserOutcome()>>(
        [this, request]()
        {
            return this->ListAuthorizedApplicationsToUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListAuthorizedApplicationsToUserGroupOutcome EiamClient::ListAuthorizedApplicationsToUserGroup(const ListAuthorizedApplicationsToUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ListAuthorizedApplicationsToUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAuthorizedApplicationsToUserGroupResponse rsp = ListAuthorizedApplicationsToUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAuthorizedApplicationsToUserGroupOutcome(rsp);
        else
            return ListAuthorizedApplicationsToUserGroupOutcome(o.GetError());
    }
    else
    {
        return ListAuthorizedApplicationsToUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::ListAuthorizedApplicationsToUserGroupAsync(const ListAuthorizedApplicationsToUserGroupRequest& request, const ListAuthorizedApplicationsToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAuthorizedApplicationsToUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListAuthorizedApplicationsToUserGroupOutcomeCallable EiamClient::ListAuthorizedApplicationsToUserGroupCallable(const ListAuthorizedApplicationsToUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAuthorizedApplicationsToUserGroupOutcome()>>(
        [this, request]()
        {
            return this->ListAuthorizedApplicationsToUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListUserGroupsOutcome EiamClient::ListUserGroups(const ListUserGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserGroupsResponse rsp = ListUserGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserGroupsOutcome(rsp);
        else
            return ListUserGroupsOutcome(o.GetError());
    }
    else
    {
        return ListUserGroupsOutcome(outcome.GetError());
    }
}

void EiamClient::ListUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUserGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListUserGroupsOutcomeCallable EiamClient::ListUserGroupsCallable(const ListUserGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUserGroupsOutcome()>>(
        [this, request]()
        {
            return this->ListUserGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListUserGroupsOfUserOutcome EiamClient::ListUserGroupsOfUser(const ListUserGroupsOfUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserGroupsOfUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserGroupsOfUserResponse rsp = ListUserGroupsOfUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserGroupsOfUserOutcome(rsp);
        else
            return ListUserGroupsOfUserOutcome(o.GetError());
    }
    else
    {
        return ListUserGroupsOfUserOutcome(outcome.GetError());
    }
}

void EiamClient::ListUserGroupsOfUserAsync(const ListUserGroupsOfUserRequest& request, const ListUserGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUserGroupsOfUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListUserGroupsOfUserOutcomeCallable EiamClient::ListUserGroupsOfUserCallable(const ListUserGroupsOfUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUserGroupsOfUserOutcome()>>(
        [this, request]()
        {
            return this->ListUserGroupsOfUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListUsersOutcome EiamClient::ListUsers(const ListUsersRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersResponse rsp = ListUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersOutcome(rsp);
        else
            return ListUsersOutcome(o.GetError());
    }
    else
    {
        return ListUsersOutcome(outcome.GetError());
    }
}

void EiamClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListUsersOutcomeCallable EiamClient::ListUsersCallable(const ListUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
        [this, request]()
        {
            return this->ListUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListUsersInOrgNodeOutcome EiamClient::ListUsersInOrgNode(const ListUsersInOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsersInOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersInOrgNodeResponse rsp = ListUsersInOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersInOrgNodeOutcome(rsp);
        else
            return ListUsersInOrgNodeOutcome(o.GetError());
    }
    else
    {
        return ListUsersInOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::ListUsersInOrgNodeAsync(const ListUsersInOrgNodeRequest& request, const ListUsersInOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUsersInOrgNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListUsersInOrgNodeOutcomeCallable EiamClient::ListUsersInOrgNodeCallable(const ListUsersInOrgNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUsersInOrgNodeOutcome()>>(
        [this, request]()
        {
            return this->ListUsersInOrgNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ListUsersInUserGroupOutcome EiamClient::ListUsersInUserGroup(const ListUsersInUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsersInUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersInUserGroupResponse rsp = ListUsersInUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersInUserGroupOutcome(rsp);
        else
            return ListUsersInUserGroupOutcome(o.GetError());
    }
    else
    {
        return ListUsersInUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::ListUsersInUserGroupAsync(const ListUsersInUserGroupRequest& request, const ListUsersInUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUsersInUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ListUsersInUserGroupOutcomeCallable EiamClient::ListUsersInUserGroupCallable(const ListUsersInUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUsersInUserGroupOutcome()>>(
        [this, request]()
        {
            return this->ListUsersInUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::ModifyUserInfoOutcome EiamClient::ModifyUserInfo(const ModifyUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserInfoResponse rsp = ModifyUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserInfoOutcome(rsp);
        else
            return ModifyUserInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyUserInfoOutcome(outcome.GetError());
    }
}

void EiamClient::ModifyUserInfoAsync(const ModifyUserInfoRequest& request, const ModifyUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::ModifyUserInfoOutcomeCallable EiamClient::ModifyUserInfoCallable(const ModifyUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::RemoveUserFromUserGroupOutcome EiamClient::RemoveUserFromUserGroup(const RemoveUserFromUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserFromUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserFromUserGroupResponse rsp = RemoveUserFromUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserFromUserGroupOutcome(rsp);
        else
            return RemoveUserFromUserGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveUserFromUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::RemoveUserFromUserGroupAsync(const RemoveUserFromUserGroupRequest& request, const RemoveUserFromUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUserFromUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::RemoveUserFromUserGroupOutcomeCallable EiamClient::RemoveUserFromUserGroupCallable(const RemoveUserFromUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserFromUserGroupOutcome()>>(
        [this, request]()
        {
            return this->RemoveUserFromUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EiamClient::UpdateOrgNodeOutcome EiamClient::UpdateOrgNode(const UpdateOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrgNodeResponse rsp = UpdateOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrgNodeOutcome(rsp);
        else
            return UpdateOrgNodeOutcome(o.GetError());
    }
    else
    {
        return UpdateOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::UpdateOrgNodeAsync(const UpdateOrgNodeRequest& request, const UpdateOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOrgNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EiamClient::UpdateOrgNodeOutcomeCallable EiamClient::UpdateOrgNodeCallable(const UpdateOrgNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOrgNodeOutcome()>>(
        [this, request]()
        {
            return this->UpdateOrgNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

