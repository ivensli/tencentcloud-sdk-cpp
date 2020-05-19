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

#include <tencentcloud/tione/v20191022/model/CreateTrainingJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace rapidjson;
using namespace std;

CreateTrainingJobRequest::CreateTrainingJobRequest() :
    m_algorithmSpecificationHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_trainingJobNameHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_envConfigHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

string CreateTrainingJobRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_algorithmSpecificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlgorithmSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_algorithmSpecification.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_inputDataConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputDataConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputDataConfig.begin(); itr != m_inputDataConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputDataConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputDataConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_outputDataConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_resourceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_trainingJobNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TrainingJobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_trainingJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_stoppingConditionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StoppingCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_stoppingCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hyperParametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HyperParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_hyperParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_envConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envConfig.begin(); itr != m_envConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_roleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_roleName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


AlgorithmSpecification CreateTrainingJobRequest::GetAlgorithmSpecification() const
{
    return m_algorithmSpecification;
}

void CreateTrainingJobRequest::SetAlgorithmSpecification(const AlgorithmSpecification& _algorithmSpecification)
{
    m_algorithmSpecification = _algorithmSpecification;
    m_algorithmSpecificationHasBeenSet = true;
}

bool CreateTrainingJobRequest::AlgorithmSpecificationHasBeenSet() const
{
    return m_algorithmSpecificationHasBeenSet;
}

vector<InputDataConfig> CreateTrainingJobRequest::GetInputDataConfig() const
{
    return m_inputDataConfig;
}

void CreateTrainingJobRequest::SetInputDataConfig(const vector<InputDataConfig>& _inputDataConfig)
{
    m_inputDataConfig = _inputDataConfig;
    m_inputDataConfigHasBeenSet = true;
}

bool CreateTrainingJobRequest::InputDataConfigHasBeenSet() const
{
    return m_inputDataConfigHasBeenSet;
}

OutputDataConfig CreateTrainingJobRequest::GetOutputDataConfig() const
{
    return m_outputDataConfig;
}

void CreateTrainingJobRequest::SetOutputDataConfig(const OutputDataConfig& _outputDataConfig)
{
    m_outputDataConfig = _outputDataConfig;
    m_outputDataConfigHasBeenSet = true;
}

bool CreateTrainingJobRequest::OutputDataConfigHasBeenSet() const
{
    return m_outputDataConfigHasBeenSet;
}

ResourceConfig CreateTrainingJobRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void CreateTrainingJobRequest::SetResourceConfig(const ResourceConfig& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool CreateTrainingJobRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string CreateTrainingJobRequest::GetTrainingJobName() const
{
    return m_trainingJobName;
}

void CreateTrainingJobRequest::SetTrainingJobName(const string& _trainingJobName)
{
    m_trainingJobName = _trainingJobName;
    m_trainingJobNameHasBeenSet = true;
}

bool CreateTrainingJobRequest::TrainingJobNameHasBeenSet() const
{
    return m_trainingJobNameHasBeenSet;
}

StoppingCondition CreateTrainingJobRequest::GetStoppingCondition() const
{
    return m_stoppingCondition;
}

void CreateTrainingJobRequest::SetStoppingCondition(const StoppingCondition& _stoppingCondition)
{
    m_stoppingCondition = _stoppingCondition;
    m_stoppingConditionHasBeenSet = true;
}

bool CreateTrainingJobRequest::StoppingConditionHasBeenSet() const
{
    return m_stoppingConditionHasBeenSet;
}

VpcConfig CreateTrainingJobRequest::GetVpcConfig() const
{
    return m_vpcConfig;
}

void CreateTrainingJobRequest::SetVpcConfig(const VpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool CreateTrainingJobRequest::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string CreateTrainingJobRequest::GetHyperParameters() const
{
    return m_hyperParameters;
}

void CreateTrainingJobRequest::SetHyperParameters(const string& _hyperParameters)
{
    m_hyperParameters = _hyperParameters;
    m_hyperParametersHasBeenSet = true;
}

bool CreateTrainingJobRequest::HyperParametersHasBeenSet() const
{
    return m_hyperParametersHasBeenSet;
}

vector<EnvConfig> CreateTrainingJobRequest::GetEnvConfig() const
{
    return m_envConfig;
}

void CreateTrainingJobRequest::SetEnvConfig(const vector<EnvConfig>& _envConfig)
{
    m_envConfig = _envConfig;
    m_envConfigHasBeenSet = true;
}

bool CreateTrainingJobRequest::EnvConfigHasBeenSet() const
{
    return m_envConfigHasBeenSet;
}

string CreateTrainingJobRequest::GetRoleName() const
{
    return m_roleName;
}

void CreateTrainingJobRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool CreateTrainingJobRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

