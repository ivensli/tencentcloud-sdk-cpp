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

#include <tencentcloud/btoe/v20210514/model/GetDepositInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Btoe::V20210514::Model;
using namespace rapidjson;
using namespace std;

GetDepositInfoRequest::GetDepositInfoRequest() :
    m_evidenceIdHasBeenSet(false)
{
}

string GetDepositInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_evidenceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvidenceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_evidenceId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetDepositInfoRequest::GetEvidenceId() const
{
    return m_evidenceId;
}

void GetDepositInfoRequest::SetEvidenceId(const string& _evidenceId)
{
    m_evidenceId = _evidenceId;
    m_evidenceIdHasBeenSet = true;
}

bool GetDepositInfoRequest::EvidenceIdHasBeenSet() const
{
    return m_evidenceIdHasBeenSet;
}


