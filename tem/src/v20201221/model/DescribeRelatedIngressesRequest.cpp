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

#include <tencentcloud/tem/v20201221/model/DescribeRelatedIngressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

DescribeRelatedIngressesRequest::DescribeRelatedIngressesRequest() :
    m_namespaceIdHasBeenSet(false),
    m_eksNamespaceHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_serviceIdHasBeenSet(false)
{
}

string DescribeRelatedIngressesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_namespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eksNamespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EksNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_eksNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRelatedIngressesRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeRelatedIngressesRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeRelatedIngressesRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string DescribeRelatedIngressesRequest::GetEksNamespace() const
{
    return m_eksNamespace;
}

void DescribeRelatedIngressesRequest::SetEksNamespace(const string& _eksNamespace)
{
    m_eksNamespace = _eksNamespace;
    m_eksNamespaceHasBeenSet = true;
}

bool DescribeRelatedIngressesRequest::EksNamespaceHasBeenSet() const
{
    return m_eksNamespaceHasBeenSet;
}

int64_t DescribeRelatedIngressesRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void DescribeRelatedIngressesRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool DescribeRelatedIngressesRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

string DescribeRelatedIngressesRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeRelatedIngressesRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeRelatedIngressesRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}


