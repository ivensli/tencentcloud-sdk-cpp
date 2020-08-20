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

#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

MLIDCardOCRResponse::MLIDCardOCRResponse() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_warnHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_advancedInfoHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_birthdayHasBeenSet(false)
{
}

CoreInternalOutcome MLIDCardOCRResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("Warn") && !rsp["Warn"].IsNull())
    {
        if (!rsp["Warn"].IsArray())
            return CoreInternalOutcome(Error("response `Warn` is not array type"));

        const Value &tmpValue = rsp["Warn"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warn.push_back((*itr).GetInt64());
        }
        m_warnHasBeenSet = true;
    }

    if (rsp.HasMember("Image") && !rsp["Image"].IsNull())
    {
        if (!rsp["Image"].IsString())
        {
            return CoreInternalOutcome(Error("response `Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(rsp["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedInfo") && !rsp["AdvancedInfo"].IsNull())
    {
        if (!rsp["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(rsp["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Birthday") && !rsp["Birthday"].IsNull())
    {
        if (!rsp["Birthday"].IsString())
        {
            return CoreInternalOutcome(Error("response `Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(rsp["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string MLIDCardOCRResponse::GetID() const
{
    return m_iD;
}

bool MLIDCardOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MLIDCardOCRResponse::GetName() const
{
    return m_name;
}

bool MLIDCardOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MLIDCardOCRResponse::GetAddress() const
{
    return m_address;
}

bool MLIDCardOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string MLIDCardOCRResponse::GetSex() const
{
    return m_sex;
}

bool MLIDCardOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

vector<int64_t> MLIDCardOCRResponse::GetWarn() const
{
    return m_warn;
}

bool MLIDCardOCRResponse::WarnHasBeenSet() const
{
    return m_warnHasBeenSet;
}

string MLIDCardOCRResponse::GetImage() const
{
    return m_image;
}

bool MLIDCardOCRResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string MLIDCardOCRResponse::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

bool MLIDCardOCRResponse::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

string MLIDCardOCRResponse::GetType() const
{
    return m_type;
}

bool MLIDCardOCRResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MLIDCardOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool MLIDCardOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}


