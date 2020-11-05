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

#include <tencentcloud/gpm/v20200820/model/ModifyTokenResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace rapidjson;
using namespace std;

ModifyTokenResponse::ModifyTokenResponse() :
    m_matchTokenHasBeenSet(false),
    m_compatibleSpanHasBeenSet(false)
{
}

CoreInternalOutcome ModifyTokenResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MatchToken") && !rsp["MatchToken"].IsNull())
    {
        if (!rsp["MatchToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `MatchToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchToken = string(rsp["MatchToken"].GetString());
        m_matchTokenHasBeenSet = true;
    }

    if (rsp.HasMember("CompatibleSpan") && !rsp["CompatibleSpan"].IsNull())
    {
        if (!rsp["CompatibleSpan"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CompatibleSpan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_compatibleSpan = rsp["CompatibleSpan"].GetUint64();
        m_compatibleSpanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ModifyTokenResponse::GetMatchToken() const
{
    return m_matchToken;
}

bool ModifyTokenResponse::MatchTokenHasBeenSet() const
{
    return m_matchTokenHasBeenSet;
}

uint64_t ModifyTokenResponse::GetCompatibleSpan() const
{
    return m_compatibleSpan;
}

bool ModifyTokenResponse::CompatibleSpanHasBeenSet() const
{
    return m_compatibleSpanHasBeenSet;
}


