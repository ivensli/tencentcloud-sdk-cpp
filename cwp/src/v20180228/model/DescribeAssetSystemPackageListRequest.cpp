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

#include <tencentcloud/cwp/v20180228/model/DescribeAssetSystemPackageListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAssetSystemPackageListRequest::DescribeAssetSystemPackageListRequest() :
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false)
{
}

string DescribeAssetSystemPackageListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAssetSystemPackageListRequest::GetUuid() const
{
    return m_uuid;
}

void DescribeAssetSystemPackageListRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DescribeAssetSystemPackageListRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string DescribeAssetSystemPackageListRequest::GetQuuid() const
{
    return m_quuid;
}

void DescribeAssetSystemPackageListRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool DescribeAssetSystemPackageListRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t DescribeAssetSystemPackageListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAssetSystemPackageListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAssetSystemPackageListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAssetSystemPackageListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAssetSystemPackageListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAssetSystemPackageListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeAssetSystemPackageListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAssetSystemPackageListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAssetSystemPackageListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeAssetSystemPackageListRequest::GetOrder() const
{
    return m_order;
}

void DescribeAssetSystemPackageListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAssetSystemPackageListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeAssetSystemPackageListRequest::GetBy() const
{
    return m_by;
}

void DescribeAssetSystemPackageListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeAssetSystemPackageListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}


