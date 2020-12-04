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

#include <tencentcloud/cme/v20191029/model/ThirdPartyPublishInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ThirdPartyPublishInfo::ThirdPartyPublishInfo() :
    m_channelMaterialIdHasBeenSet(false),
    m_penguinMediaPlatformPublishInfoHasBeenSet(false),
    m_weiboPublishInfoHasBeenSet(false),
    m_kuaishouPublishInfoHasBeenSet(false)
{
}

CoreInternalOutcome ThirdPartyPublishInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelMaterialId") && !value["ChannelMaterialId"].IsNull())
    {
        if (!value["ChannelMaterialId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ThirdPartyPublishInfo.ChannelMaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelMaterialId = string(value["ChannelMaterialId"].GetString());
        m_channelMaterialIdHasBeenSet = true;
    }

    if (value.HasMember("PenguinMediaPlatformPublishInfo") && !value["PenguinMediaPlatformPublishInfo"].IsNull())
    {
        if (!value["PenguinMediaPlatformPublishInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ThirdPartyPublishInfo.PenguinMediaPlatformPublishInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_penguinMediaPlatformPublishInfo.Deserialize(value["PenguinMediaPlatformPublishInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_penguinMediaPlatformPublishInfoHasBeenSet = true;
    }

    if (value.HasMember("WeiboPublishInfo") && !value["WeiboPublishInfo"].IsNull())
    {
        if (!value["WeiboPublishInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ThirdPartyPublishInfo.WeiboPublishInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_weiboPublishInfo.Deserialize(value["WeiboPublishInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_weiboPublishInfoHasBeenSet = true;
    }

    if (value.HasMember("KuaishouPublishInfo") && !value["KuaishouPublishInfo"].IsNull())
    {
        if (!value["KuaishouPublishInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ThirdPartyPublishInfo.KuaishouPublishInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kuaishouPublishInfo.Deserialize(value["KuaishouPublishInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kuaishouPublishInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThirdPartyPublishInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_channelMaterialIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelMaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_channelMaterialId.c_str(), allocator).Move(), allocator);
    }

    if (m_penguinMediaPlatformPublishInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PenguinMediaPlatformPublishInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_penguinMediaPlatformPublishInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_weiboPublishInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WeiboPublishInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_weiboPublishInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kuaishouPublishInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KuaishouPublishInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_kuaishouPublishInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ThirdPartyPublishInfo::GetChannelMaterialId() const
{
    return m_channelMaterialId;
}

void ThirdPartyPublishInfo::SetChannelMaterialId(const string& _channelMaterialId)
{
    m_channelMaterialId = _channelMaterialId;
    m_channelMaterialIdHasBeenSet = true;
}

bool ThirdPartyPublishInfo::ChannelMaterialIdHasBeenSet() const
{
    return m_channelMaterialIdHasBeenSet;
}

PenguinMediaPlatformPublishInfo ThirdPartyPublishInfo::GetPenguinMediaPlatformPublishInfo() const
{
    return m_penguinMediaPlatformPublishInfo;
}

void ThirdPartyPublishInfo::SetPenguinMediaPlatformPublishInfo(const PenguinMediaPlatformPublishInfo& _penguinMediaPlatformPublishInfo)
{
    m_penguinMediaPlatformPublishInfo = _penguinMediaPlatformPublishInfo;
    m_penguinMediaPlatformPublishInfoHasBeenSet = true;
}

bool ThirdPartyPublishInfo::PenguinMediaPlatformPublishInfoHasBeenSet() const
{
    return m_penguinMediaPlatformPublishInfoHasBeenSet;
}

WeiboPublishInfo ThirdPartyPublishInfo::GetWeiboPublishInfo() const
{
    return m_weiboPublishInfo;
}

void ThirdPartyPublishInfo::SetWeiboPublishInfo(const WeiboPublishInfo& _weiboPublishInfo)
{
    m_weiboPublishInfo = _weiboPublishInfo;
    m_weiboPublishInfoHasBeenSet = true;
}

bool ThirdPartyPublishInfo::WeiboPublishInfoHasBeenSet() const
{
    return m_weiboPublishInfoHasBeenSet;
}

KuaishouPublishInfo ThirdPartyPublishInfo::GetKuaishouPublishInfo() const
{
    return m_kuaishouPublishInfo;
}

void ThirdPartyPublishInfo::SetKuaishouPublishInfo(const KuaishouPublishInfo& _kuaishouPublishInfo)
{
    m_kuaishouPublishInfo = _kuaishouPublishInfo;
    m_kuaishouPublishInfoHasBeenSet = true;
}

bool ThirdPartyPublishInfo::KuaishouPublishInfoHasBeenSet() const
{
    return m_kuaishouPublishInfoHasBeenSet;
}

