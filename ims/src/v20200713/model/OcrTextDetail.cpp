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

#include <tencentcloud/ims/v20200713/model/OcrTextDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ims::V20200713::Model;
using namespace rapidjson;
using namespace std;

OcrTextDetail::OcrTextDetail() :
    m_textHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_libIdHasBeenSet(false),
    m_libNameHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome OcrTextDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `OcrTextDetail.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `OcrTextDetail.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("LibId") && !value["LibId"].IsNull())
    {
        if (!value["LibId"].IsString())
        {
            return CoreInternalOutcome(Error("response `OcrTextDetail.LibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libId = string(value["LibId"].GetString());
        m_libIdHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Error("response `OcrTextDetail.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `OcrTextDetail.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OcrTextDetail.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OcrTextDetail.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OcrTextDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_libIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_libId.c_str(), allocator).Move(), allocator);
    }

    if (m_libNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_libName.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_locationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OcrTextDetail::GetText() const
{
    return m_text;
}

void OcrTextDetail::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool OcrTextDetail::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string OcrTextDetail::GetLabel() const
{
    return m_label;
}

void OcrTextDetail::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool OcrTextDetail::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string OcrTextDetail::GetLibId() const
{
    return m_libId;
}

void OcrTextDetail::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool OcrTextDetail::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string OcrTextDetail::GetLibName() const
{
    return m_libName;
}

void OcrTextDetail::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool OcrTextDetail::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

vector<string> OcrTextDetail::GetKeywords() const
{
    return m_keywords;
}

void OcrTextDetail::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool OcrTextDetail::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

uint64_t OcrTextDetail::GetScore() const
{
    return m_score;
}

void OcrTextDetail::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool OcrTextDetail::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

Location OcrTextDetail::GetLocation() const
{
    return m_location;
}

void OcrTextDetail::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool OcrTextDetail::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

