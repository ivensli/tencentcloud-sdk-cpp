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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_EVENTBUS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_EVENTBUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 事件集信息
                */
                class EventBus : public AbstractModel
                {
                public:
                    EventBus();
                    ~EventBus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取更新时间
                     * @return ModTime 更新时间
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置更新时间
                     * @param ModTime 更新时间
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取事件集描述，不限字符类型，200字符描述以内
                     * @return Description 事件集描述，不限字符类型，200字符描述以内
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件集描述，不限字符类型，200字符描述以内
                     * @param Description 事件集描述，不限字符类型，200字符描述以内
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return AddTime 创建时间
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
                     * @param AddTime 创建时间
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     * @return EventBusName 事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     */
                    std::string GetEventBusName() const;

                    /**
                     * 设置事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     * @param EventBusName 事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     */
                    void SetEventBusName(const std::string& _eventBusName);

                    /**
                     * 判断参数 EventBusName 是否已赋值
                     * @return EventBusName 是否已赋值
                     */
                    bool EventBusNameHasBeenSet() const;

                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param EventBusId 事件集ID
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取事件集类型
                     * @return Type 事件集类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件集类型
                     * @param Type 事件集类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 更新时间
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * 事件集描述，不限字符类型，200字符描述以内
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     */
                    std::string m_eventBusName;
                    bool m_eventBusNameHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 事件集类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_EVENTBUS_H_
