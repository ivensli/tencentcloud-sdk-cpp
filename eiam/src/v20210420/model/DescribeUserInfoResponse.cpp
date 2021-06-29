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

#include <tencentcloud/eiam/v20210420/model/DescribeUserInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeUserInfoResponse::DescribeUserInfoResponse() :
    m_userNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_activationTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("UserName") && !rsp["UserName"].IsNull())
    {
        if (!rsp["UserName"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(rsp["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("DisplayName") && !rsp["DisplayName"].IsNull())
    {
        if (!rsp["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(rsp["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("UserGroupIds") && !rsp["UserGroupIds"].IsNull())
    {
        if (!rsp["UserGroupIds"].IsArray())
            return CoreInternalOutcome(Error("response `UserGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UserGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userGroupIds.push_back((*itr).GetString());
        }
        m_userGroupIdsHasBeenSet = true;
    }

    if (rsp.HasMember("UserId") && !rsp["UserId"].IsNull())
    {
        if (!rsp["UserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(rsp["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (rsp.HasMember("Email") && !rsp["Email"].IsNull())
    {
        if (!rsp["Email"].IsString())
        {
            return CoreInternalOutcome(Error("response `Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(rsp["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (rsp.HasMember("Phone") && !rsp["Phone"].IsNull())
    {
        if (!rsp["Phone"].IsString())
        {
            return CoreInternalOutcome(Error("response `Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(rsp["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeId") && !rsp["OrgNodeId"].IsNull())
    {
        if (!rsp["OrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeId = string(rsp["OrgNodeId"].GetString());
        m_orgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("DataSource") && !rsp["DataSource"].IsNull())
    {
        if (!rsp["DataSource"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(rsp["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (rsp.HasMember("ExpirationTime") && !rsp["ExpirationTime"].IsNull())
    {
        if (!rsp["ExpirationTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExpirationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationTime = string(rsp["ExpirationTime"].GetString());
        m_expirationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ActivationTime") && !rsp["ActivationTime"].IsNull())
    {
        if (!rsp["ActivationTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activationTime = string(rsp["ActivationTime"].GetString());
        m_activationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeUserInfoResponse::GetUserName() const
{
    return m_userName;
}

bool DescribeUserInfoResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeUserInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeUserInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeUserInfoResponse::GetDisplayName() const
{
    return m_displayName;
}

bool DescribeUserInfoResponse::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string DescribeUserInfoResponse::GetDescription() const
{
    return m_description;
}

bool DescribeUserInfoResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> DescribeUserInfoResponse::GetUserGroupIds() const
{
    return m_userGroupIds;
}

bool DescribeUserInfoResponse::UserGroupIdsHasBeenSet() const
{
    return m_userGroupIdsHasBeenSet;
}

string DescribeUserInfoResponse::GetUserId() const
{
    return m_userId;
}

bool DescribeUserInfoResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeUserInfoResponse::GetEmail() const
{
    return m_email;
}

bool DescribeUserInfoResponse::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string DescribeUserInfoResponse::GetPhone() const
{
    return m_phone;
}

bool DescribeUserInfoResponse::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string DescribeUserInfoResponse::GetOrgNodeId() const
{
    return m_orgNodeId;
}

bool DescribeUserInfoResponse::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

string DescribeUserInfoResponse::GetDataSource() const
{
    return m_dataSource;
}

bool DescribeUserInfoResponse::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string DescribeUserInfoResponse::GetExpirationTime() const
{
    return m_expirationTime;
}

bool DescribeUserInfoResponse::ExpirationTimeHasBeenSet() const
{
    return m_expirationTimeHasBeenSet;
}

string DescribeUserInfoResponse::GetActivationTime() const
{
    return m_activationTime;
}

bool DescribeUserInfoResponse::ActivationTimeHasBeenSet() const
{
    return m_activationTimeHasBeenSet;
}

