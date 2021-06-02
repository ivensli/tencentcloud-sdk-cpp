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

#include <tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

DeleteMultipleSecurityPolicyRequest::DeleteMultipleSecurityPolicyRequest() :
    m_registryIdHasBeenSet(false),
    m_securityGroupPolicySetHasBeenSet(false)
{
}

string DeleteMultipleSecurityPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupPolicySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupPolicySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityGroupPolicySet.begin(); itr != m_securityGroupPolicySet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteMultipleSecurityPolicyRequest::GetRegistryId() const
{
    return m_registryId;
}

void DeleteMultipleSecurityPolicyRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DeleteMultipleSecurityPolicyRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

vector<SecurityPolicy> DeleteMultipleSecurityPolicyRequest::GetSecurityGroupPolicySet() const
{
    return m_securityGroupPolicySet;
}

void DeleteMultipleSecurityPolicyRequest::SetSecurityGroupPolicySet(const vector<SecurityPolicy>& _securityGroupPolicySet)
{
    m_securityGroupPolicySet = _securityGroupPolicySet;
    m_securityGroupPolicySetHasBeenSet = true;
}

bool DeleteMultipleSecurityPolicyRequest::SecurityGroupPolicySetHasBeenSet() const
{
    return m_securityGroupPolicySetHasBeenSet;
}


