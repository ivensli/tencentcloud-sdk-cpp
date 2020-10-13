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

#include <tencentcloud/tcb/v20180608/model/DescribeDownloadFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

DescribeDownloadFileRequest::DescribeDownloadFileRequest() :
    m_codeUriHasBeenSet(false)
{
}

string DescribeDownloadFileRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_codeUriHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CodeUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_codeUri.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDownloadFileRequest::GetCodeUri() const
{
    return m_codeUri;
}

void DescribeDownloadFileRequest::SetCodeUri(const string& _codeUri)
{
    m_codeUri = _codeUri;
    m_codeUriHasBeenSet = true;
}

bool DescribeDownloadFileRequest::CodeUriHasBeenSet() const
{
    return m_codeUriHasBeenSet;
}


