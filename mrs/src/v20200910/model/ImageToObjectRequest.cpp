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

#include <tencentcloud/mrs/v20200910/model/ImageToObjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ImageToObjectRequest::ImageToObjectRequest() :
    m_imageInfoListHasBeenSet(false),
    m_handleParamHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isUsedClassifyHasBeenSet(false)
{
}

string ImageToObjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageInfoList.begin(); itr != m_imageInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_handleParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_handleParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_isUsedClassifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUsedClassify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUsedClassify, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<ImageInfo> ImageToObjectRequest::GetImageInfoList() const
{
    return m_imageInfoList;
}

void ImageToObjectRequest::SetImageInfoList(const vector<ImageInfo>& _imageInfoList)
{
    m_imageInfoList = _imageInfoList;
    m_imageInfoListHasBeenSet = true;
}

bool ImageToObjectRequest::ImageInfoListHasBeenSet() const
{
    return m_imageInfoListHasBeenSet;
}

HandleParam ImageToObjectRequest::GetHandleParam() const
{
    return m_handleParam;
}

void ImageToObjectRequest::SetHandleParam(const HandleParam& _handleParam)
{
    m_handleParam = _handleParam;
    m_handleParamHasBeenSet = true;
}

bool ImageToObjectRequest::HandleParamHasBeenSet() const
{
    return m_handleParamHasBeenSet;
}

uint64_t ImageToObjectRequest::GetType() const
{
    return m_type;
}

void ImageToObjectRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageToObjectRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool ImageToObjectRequest::GetIsUsedClassify() const
{
    return m_isUsedClassify;
}

void ImageToObjectRequest::SetIsUsedClassify(const bool& _isUsedClassify)
{
    m_isUsedClassify = _isUsedClassify;
    m_isUsedClassifyHasBeenSet = true;
}

bool ImageToObjectRequest::IsUsedClassifyHasBeenSet() const
{
    return m_isUsedClassifyHasBeenSet;
}


