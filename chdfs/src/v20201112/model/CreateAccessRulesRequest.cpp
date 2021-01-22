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

#include <tencentcloud/chdfs/v20201112/model/CreateAccessRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace rapidjson;
using namespace std;

CreateAccessRulesRequest::CreateAccessRulesRequest() :
    m_accessRulesHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false)
{
}

string CreateAccessRulesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessRulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessRules.begin(); itr != m_accessRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accessGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accessGroupId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<AccessRule> CreateAccessRulesRequest::GetAccessRules() const
{
    return m_accessRules;
}

void CreateAccessRulesRequest::SetAccessRules(const vector<AccessRule>& _accessRules)
{
    m_accessRules = _accessRules;
    m_accessRulesHasBeenSet = true;
}

bool CreateAccessRulesRequest::AccessRulesHasBeenSet() const
{
    return m_accessRulesHasBeenSet;
}

string CreateAccessRulesRequest::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void CreateAccessRulesRequest::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool CreateAccessRulesRequest::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}

