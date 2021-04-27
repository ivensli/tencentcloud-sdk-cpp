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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_VALUEFROM_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_VALUEFROM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/FieldRef.h>
#include <tencentcloud/tsf/v20180326/model/ResourceFieldRef.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * k8s env 的 ValueFrom
                */
                class ValueFrom : public AbstractModel
                {
                public:
                    ValueFrom();
                    ~ValueFrom() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取k8s env 的 FieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldRef k8s env 的 FieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FieldRef GetFieldRef() const;

                    /**
                     * 设置k8s env 的 FieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FieldRef k8s env 的 FieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFieldRef(const FieldRef& _fieldRef);

                    /**
                     * 判断参数 FieldRef 是否已赋值
                     * @return FieldRef 是否已赋值
                     */
                    bool FieldRefHasBeenSet() const;

                    /**
                     * 获取k8s env 的 ResourceFieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceFieldRef k8s env 的 ResourceFieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceFieldRef GetResourceFieldRef() const;

                    /**
                     * 设置k8s env 的 ResourceFieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceFieldRef k8s env 的 ResourceFieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceFieldRef(const ResourceFieldRef& _resourceFieldRef);

                    /**
                     * 判断参数 ResourceFieldRef 是否已赋值
                     * @return ResourceFieldRef 是否已赋值
                     */
                    bool ResourceFieldRefHasBeenSet() const;

                private:

                    /**
                     * k8s env 的 FieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FieldRef m_fieldRef;
                    bool m_fieldRefHasBeenSet;

                    /**
                     * k8s env 的 ResourceFieldRef
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceFieldRef m_resourceFieldRef;
                    bool m_resourceFieldRefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VALUEFROM_H_
