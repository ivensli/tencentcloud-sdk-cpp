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

#include <tencentcloud/dlc/v20210125/model/WorkGroupIdSetOfUserId.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

WorkGroupIdSetOfUserId::WorkGroupIdSetOfUserId() :
    m_userIdHasBeenSet(false),
    m_workGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome WorkGroupIdSetOfUserId::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `WorkGroupIdSetOfUserId.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("WorkGroupIds") && !value["WorkGroupIds"].IsNull())
    {
        if (!value["WorkGroupIds"].IsArray())
            return CoreInternalOutcome(Error("response `WorkGroupIdSetOfUserId.WorkGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_workGroupIds.push_back((*itr).GetInt64());
        }
        m_workGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkGroupIdSetOfUserId::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_workGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workGroupIds.begin(); itr != m_workGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string WorkGroupIdSetOfUserId::GetUserId() const
{
    return m_userId;
}

void WorkGroupIdSetOfUserId::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool WorkGroupIdSetOfUserId::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<int64_t> WorkGroupIdSetOfUserId::GetWorkGroupIds() const
{
    return m_workGroupIds;
}

void WorkGroupIdSetOfUserId::SetWorkGroupIds(const vector<int64_t>& _workGroupIds)
{
    m_workGroupIds = _workGroupIds;
    m_workGroupIdsHasBeenSet = true;
}

bool WorkGroupIdSetOfUserId::WorkGroupIdsHasBeenSet() const
{
    return m_workGroupIdsHasBeenSet;
}

