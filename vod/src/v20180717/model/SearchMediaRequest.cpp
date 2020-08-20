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

#include <tencentcloud/vod/v20180717/model/SearchMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

SearchMediaRequest::SearchMediaRequest() :
    m_tagsHasBeenSet(false),
    m_classIdsHasBeenSet(false),
    m_streamIdsHasBeenSet(false),
    m_vidsHasBeenSet(false),
    m_sourceTypesHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_namePrefixesHasBeenSet(false),
    m_descriptionsHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_vidHasBeenSet(false),
    m_textHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

string SearchMediaRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_classIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_classIds.begin(); itr != m_classIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_streamIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_streamIds.begin(); itr != m_streamIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vidsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_vids.begin(); itr != m_vids.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_sourceTypes.begin(); itr != m_sourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoriesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Categories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_categories.begin(); itr != m_categories.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_createTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fileIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Names";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_names.begin(); itr != m_names.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namePrefixesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamePrefixes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_namePrefixes.begin(); itr != m_namePrefixes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Descriptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_descriptions.begin(); itr != m_descriptions.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_streamIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_vidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vid.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> SearchMediaRequest::GetTags() const
{
    return m_tags;
}

void SearchMediaRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SearchMediaRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<int64_t> SearchMediaRequest::GetClassIds() const
{
    return m_classIds;
}

void SearchMediaRequest::SetClassIds(const vector<int64_t>& _classIds)
{
    m_classIds = _classIds;
    m_classIdsHasBeenSet = true;
}

bool SearchMediaRequest::ClassIdsHasBeenSet() const
{
    return m_classIdsHasBeenSet;
}

vector<string> SearchMediaRequest::GetStreamIds() const
{
    return m_streamIds;
}

void SearchMediaRequest::SetStreamIds(const vector<string>& _streamIds)
{
    m_streamIds = _streamIds;
    m_streamIdsHasBeenSet = true;
}

bool SearchMediaRequest::StreamIdsHasBeenSet() const
{
    return m_streamIdsHasBeenSet;
}

vector<string> SearchMediaRequest::GetVids() const
{
    return m_vids;
}

void SearchMediaRequest::SetVids(const vector<string>& _vids)
{
    m_vids = _vids;
    m_vidsHasBeenSet = true;
}

bool SearchMediaRequest::VidsHasBeenSet() const
{
    return m_vidsHasBeenSet;
}

vector<string> SearchMediaRequest::GetSourceTypes() const
{
    return m_sourceTypes;
}

void SearchMediaRequest::SetSourceTypes(const vector<string>& _sourceTypes)
{
    m_sourceTypes = _sourceTypes;
    m_sourceTypesHasBeenSet = true;
}

bool SearchMediaRequest::SourceTypesHasBeenSet() const
{
    return m_sourceTypesHasBeenSet;
}

vector<string> SearchMediaRequest::GetCategories() const
{
    return m_categories;
}

void SearchMediaRequest::SetCategories(const vector<string>& _categories)
{
    m_categories = _categories;
    m_categoriesHasBeenSet = true;
}

bool SearchMediaRequest::CategoriesHasBeenSet() const
{
    return m_categoriesHasBeenSet;
}

TimeRange SearchMediaRequest::GetCreateTime() const
{
    return m_createTime;
}

void SearchMediaRequest::SetCreateTime(const TimeRange& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SearchMediaRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> SearchMediaRequest::GetFileIds() const
{
    return m_fileIds;
}

void SearchMediaRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool SearchMediaRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

vector<string> SearchMediaRequest::GetNames() const
{
    return m_names;
}

void SearchMediaRequest::SetNames(const vector<string>& _names)
{
    m_names = _names;
    m_namesHasBeenSet = true;
}

bool SearchMediaRequest::NamesHasBeenSet() const
{
    return m_namesHasBeenSet;
}

vector<string> SearchMediaRequest::GetNamePrefixes() const
{
    return m_namePrefixes;
}

void SearchMediaRequest::SetNamePrefixes(const vector<string>& _namePrefixes)
{
    m_namePrefixes = _namePrefixes;
    m_namePrefixesHasBeenSet = true;
}

bool SearchMediaRequest::NamePrefixesHasBeenSet() const
{
    return m_namePrefixesHasBeenSet;
}

vector<string> SearchMediaRequest::GetDescriptions() const
{
    return m_descriptions;
}

void SearchMediaRequest::SetDescriptions(const vector<string>& _descriptions)
{
    m_descriptions = _descriptions;
    m_descriptionsHasBeenSet = true;
}

bool SearchMediaRequest::DescriptionsHasBeenSet() const
{
    return m_descriptionsHasBeenSet;
}

SortBy SearchMediaRequest::GetSort() const
{
    return m_sort;
}

void SearchMediaRequest::SetSort(const SortBy& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool SearchMediaRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t SearchMediaRequest::GetOffset() const
{
    return m_offset;
}

void SearchMediaRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchMediaRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t SearchMediaRequest::GetLimit() const
{
    return m_limit;
}

void SearchMediaRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchMediaRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> SearchMediaRequest::GetFilters() const
{
    return m_filters;
}

void SearchMediaRequest::SetFilters(const vector<string>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool SearchMediaRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t SearchMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SearchMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SearchMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string SearchMediaRequest::GetStreamId() const
{
    return m_streamId;
}

void SearchMediaRequest::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool SearchMediaRequest::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

string SearchMediaRequest::GetVid() const
{
    return m_vid;
}

void SearchMediaRequest::SetVid(const string& _vid)
{
    m_vid = _vid;
    m_vidHasBeenSet = true;
}

bool SearchMediaRequest::VidHasBeenSet() const
{
    return m_vidHasBeenSet;
}

string SearchMediaRequest::GetText() const
{
    return m_text;
}

void SearchMediaRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SearchMediaRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string SearchMediaRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchMediaRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchMediaRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchMediaRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchMediaRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchMediaRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SearchMediaRequest::GetSourceType() const
{
    return m_sourceType;
}

void SearchMediaRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool SearchMediaRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}


