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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOKER_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/ScheduleSettings.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 执行器信息。
                */
                class Invoker : public AbstractModel
                {
                public:
                    Invoker();
                    ~Invoker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行器ID。
                     * @return InvokerId 执行器ID。
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置执行器ID。
                     * @param InvokerId 执行器ID。
                     */
                    void SetInvokerId(const std::string& _invokerId);

                    /**
                     * 判断参数 InvokerId 是否已赋值
                     * @return InvokerId 是否已赋值
                     */
                    bool InvokerIdHasBeenSet() const;

                    /**
                     * 获取执行器名称。
                     * @return Name 执行器名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置执行器名称。
                     * @param Name 执行器名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取执行器类型。
                     * @return Type 执行器类型。
                     */
                    std::string GetType() const;

                    /**
                     * 设置执行器类型。
                     * @param Type 执行器类型。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取命令ID。
                     * @return CommandId 命令ID。
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置命令ID。
                     * @param CommandId 命令ID。
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取用户名。
                     * @return Username 用户名。
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名。
                     * @param Username 用户名。
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取自定义参数。
                     * @return Parameters 自定义参数。
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置自定义参数。
                     * @param Parameters 自定义参数。
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取实例ID列表。
                     * @return InstanceIds 实例ID列表。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表。
                     * @param InstanceIds 实例ID列表。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取执行器是否启用。
                     * @return Enable 执行器是否启用。
                     */
                    bool GetEnable() const;

                    /**
                     * 设置执行器是否启用。
                     * @param Enable 执行器是否启用。
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取执行器周期计划。周期执行器会返回此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleSettings 执行器周期计划。周期执行器会返回此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置执行器周期计划。周期执行器会返回此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScheduleSettings 执行器周期计划。周期执行器会返回此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScheduleSettings(const ScheduleSettings& _scheduleSettings);

                    /**
                     * 判断参数 ScheduleSettings 是否已赋值
                     * @return ScheduleSettings 是否已赋值
                     */
                    bool ScheduleSettingsHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreatedTime 创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取修改时间。
                     * @return UpdatedTime 修改时间。
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置修改时间。
                     * @param UpdatedTime 修改时间。
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * 执行器ID。
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                    /**
                     * 执行器名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行器类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 命令ID。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 自定义参数。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 实例ID列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 执行器是否启用。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 执行器周期计划。周期执行器会返回此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 修改时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOKER_H_
