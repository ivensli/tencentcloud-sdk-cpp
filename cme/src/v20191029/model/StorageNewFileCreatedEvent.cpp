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

#include <tencentcloud/cme/v20191029/model/StorageNewFileCreatedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

StorageNewFileCreatedEvent::StorageNewFileCreatedEvent() :
    m_fileIdHasBeenSet(false),
    m_materialIdHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_classPathHasBeenSet(false)
{
}

CoreInternalOutcome StorageNewFileCreatedEvent::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageNewFileCreatedEvent.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageNewFileCreatedEvent.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageNewFileCreatedEvent.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageNewFileCreatedEvent.OperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = string(value["OperationType"].GetString());
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Error("response `StorageNewFileCreatedEvent.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("ClassPath") && !value["ClassPath"].IsNull())
    {
        if (!value["ClassPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageNewFileCreatedEvent.ClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classPath = string(value["ClassPath"].GetString());
        m_classPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageNewFileCreatedEvent::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_materialIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

}


string StorageNewFileCreatedEvent::GetFileId() const
{
    return m_fileId;
}

void StorageNewFileCreatedEvent::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool StorageNewFileCreatedEvent::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string StorageNewFileCreatedEvent::GetMaterialId() const
{
    return m_materialId;
}

void StorageNewFileCreatedEvent::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool StorageNewFileCreatedEvent::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

string StorageNewFileCreatedEvent::GetOperator() const
{
    return m_operator;
}

void StorageNewFileCreatedEvent::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool StorageNewFileCreatedEvent::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string StorageNewFileCreatedEvent::GetOperationType() const
{
    return m_operationType;
}

void StorageNewFileCreatedEvent::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool StorageNewFileCreatedEvent::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

Entity StorageNewFileCreatedEvent::GetOwner() const
{
    return m_owner;
}

void StorageNewFileCreatedEvent::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool StorageNewFileCreatedEvent::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string StorageNewFileCreatedEvent::GetClassPath() const
{
    return m_classPath;
}

void StorageNewFileCreatedEvent::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool StorageNewFileCreatedEvent::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

