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

#include <tencentcloud/sms/v20190711/model/DeleteSignStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20190711::Model;
using namespace rapidjson;
using namespace std;

DeleteSignStatus::DeleteSignStatus() :
    m_deleteStatusHasBeenSet(false),
    m_deleteTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeleteSignStatus::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DeleteStatus") && !value["DeleteStatus"].IsNull())
    {
        if (!value["DeleteStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeleteSignStatus.DeleteStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteStatus = string(value["DeleteStatus"].GetString());
        m_deleteStatusHasBeenSet = true;
    }

    if (value.HasMember("DeleteTime") && !value["DeleteTime"].IsNull())
    {
        if (!value["DeleteTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DeleteSignStatus.DeleteTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = value["DeleteTime"].GetUint64();
        m_deleteTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteSignStatus::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_deleteStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deleteStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteTime, allocator);
    }

}


string DeleteSignStatus::GetDeleteStatus() const
{
    return m_deleteStatus;
}

void DeleteSignStatus::SetDeleteStatus(const string& _deleteStatus)
{
    m_deleteStatus = _deleteStatus;
    m_deleteStatusHasBeenSet = true;
}

bool DeleteSignStatus::DeleteStatusHasBeenSet() const
{
    return m_deleteStatusHasBeenSet;
}

uint64_t DeleteSignStatus::GetDeleteTime() const
{
    return m_deleteTime;
}

void DeleteSignStatus::SetDeleteTime(const uint64_t& _deleteTime)
{
    m_deleteTime = _deleteTime;
    m_deleteTimeHasBeenSet = true;
}

bool DeleteSignStatus::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}
