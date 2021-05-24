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

#include <tencentcloud/cme/v20191029/model/ParseEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ParseEventRequest::ParseEventRequest() :
    m_platformHasBeenSet(false),
    m_eventContentHasBeenSet(false)
{
}

string ParseEventRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_eventContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_eventContent.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ParseEventRequest::GetPlatform() const
{
    return m_platform;
}

void ParseEventRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ParseEventRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ParseEventRequest::GetEventContent() const
{
    return m_eventContent;
}

void ParseEventRequest::SetEventContent(const string& _eventContent)
{
    m_eventContent = _eventContent;
    m_eventContentHasBeenSet = true;
}

bool ParseEventRequest::EventContentHasBeenSet() const
{
    return m_eventContentHasBeenSet;
}


