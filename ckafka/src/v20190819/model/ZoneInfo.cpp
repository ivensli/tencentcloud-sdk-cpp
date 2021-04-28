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

#include <tencentcloud/ckafka/v20190819/model/ZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

ZoneInfo::ZoneInfo() :
    m_zoneIdHasBeenSet(false),
    m_isInternalAppHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneStatusHasBeenSet(false),
    m_exflagHasBeenSet(false),
    m_soldOutHasBeenSet(false)
{
}

CoreInternalOutcome ZoneInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("IsInternalApp") && !value["IsInternalApp"].IsNull())
    {
        if (!value["IsInternalApp"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.IsInternalApp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isInternalApp = value["IsInternalApp"].GetInt64();
        m_isInternalAppHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.Flag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_flag = value["Flag"].GetBool();
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneStatus") && !value["ZoneStatus"].IsNull())
    {
        if (!value["ZoneStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneStatus = value["ZoneStatus"].GetInt64();
        m_zoneStatusHasBeenSet = true;
    }

    if (value.HasMember("Exflag") && !value["Exflag"].IsNull())
    {
        if (!value["Exflag"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.Exflag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exflag = string(value["Exflag"].GetString());
        m_exflagHasBeenSet = true;
    }

    if (value.HasMember("SoldOut") && !value["SoldOut"].IsNull())
    {
        if (!value["SoldOut"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.SoldOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_soldOut = string(value["SoldOut"].GetString());
        m_soldOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_isInternalAppHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsInternalApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInternalApp, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_flagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flag, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneStatus, allocator);
    }

    if (m_exflagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Exflag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_exflag.c_str(), allocator).Move(), allocator);
    }

    if (m_soldOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoldOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_soldOut.c_str(), allocator).Move(), allocator);
    }

}


string ZoneInfo::GetZoneId() const
{
    return m_zoneId;
}

void ZoneInfo::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t ZoneInfo::GetIsInternalApp() const
{
    return m_isInternalApp;
}

void ZoneInfo::SetIsInternalApp(const int64_t& _isInternalApp)
{
    m_isInternalApp = _isInternalApp;
    m_isInternalAppHasBeenSet = true;
}

bool ZoneInfo::IsInternalAppHasBeenSet() const
{
    return m_isInternalAppHasBeenSet;
}

int64_t ZoneInfo::GetAppId() const
{
    return m_appId;
}

void ZoneInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ZoneInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

bool ZoneInfo::GetFlag() const
{
    return m_flag;
}

void ZoneInfo::SetFlag(const bool& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool ZoneInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string ZoneInfo::GetZoneName() const
{
    return m_zoneName;
}

void ZoneInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

int64_t ZoneInfo::GetZoneStatus() const
{
    return m_zoneStatus;
}

void ZoneInfo::SetZoneStatus(const int64_t& _zoneStatus)
{
    m_zoneStatus = _zoneStatus;
    m_zoneStatusHasBeenSet = true;
}

bool ZoneInfo::ZoneStatusHasBeenSet() const
{
    return m_zoneStatusHasBeenSet;
}

string ZoneInfo::GetExflag() const
{
    return m_exflag;
}

void ZoneInfo::SetExflag(const string& _exflag)
{
    m_exflag = _exflag;
    m_exflagHasBeenSet = true;
}

bool ZoneInfo::ExflagHasBeenSet() const
{
    return m_exflagHasBeenSet;
}

string ZoneInfo::GetSoldOut() const
{
    return m_soldOut;
}

void ZoneInfo::SetSoldOut(const string& _soldOut)
{
    m_soldOut = _soldOut;
    m_soldOutHasBeenSet = true;
}

bool ZoneInfo::SoldOutHasBeenSet() const
{
    return m_soldOutHasBeenSet;
}
