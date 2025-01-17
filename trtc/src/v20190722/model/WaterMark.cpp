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

#include <tencentcloud/trtc/v20190722/model/WaterMark.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

WaterMark::WaterMark() :
    m_waterMarkTypeHasBeenSet(false),
    m_waterMarkImageHasBeenSet(false)
{
}

CoreInternalOutcome WaterMark::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WaterMarkType") && !value["WaterMarkType"].IsNull())
    {
        if (!value["WaterMarkType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMark.WaterMarkType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkType = value["WaterMarkType"].GetUint64();
        m_waterMarkTypeHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkImage") && !value["WaterMarkImage"].IsNull())
    {
        if (!value["WaterMarkImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMark.WaterMarkImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waterMarkImage.Deserialize(value["WaterMarkImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waterMarkImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaterMark::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_waterMarkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterMarkType, allocator);
    }

    if (m_waterMarkImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waterMarkImage.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t WaterMark::GetWaterMarkType() const
{
    return m_waterMarkType;
}

void WaterMark::SetWaterMarkType(const uint64_t& _waterMarkType)
{
    m_waterMarkType = _waterMarkType;
    m_waterMarkTypeHasBeenSet = true;
}

bool WaterMark::WaterMarkTypeHasBeenSet() const
{
    return m_waterMarkTypeHasBeenSet;
}

WaterMarkImage WaterMark::GetWaterMarkImage() const
{
    return m_waterMarkImage;
}

void WaterMark::SetWaterMarkImage(const WaterMarkImage& _waterMarkImage)
{
    m_waterMarkImage = _waterMarkImage;
    m_waterMarkImageHasBeenSet = true;
}

bool WaterMark::WaterMarkImageHasBeenSet() const
{
    return m_waterMarkImageHasBeenSet;
}

