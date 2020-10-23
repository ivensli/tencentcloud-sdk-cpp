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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEUNIT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 诊断报告单元信息
                */
                class DiagnoseUnit : public AbstractModel
                {
                public:
                    DiagnoseUnit();
                    ~DiagnoseUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容单元英文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 内容单元英文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKey() const;

                    /**
                     * 设置内容单元英文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Key 内容单元英文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取内容单元中文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyText 内容单元中文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKeyText() const;

                    /**
                     * 设置内容单元中文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KeyText 内容单元中文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeyText(const std::string& _keyText);

                    /**
                     * 判断参数 KeyText 是否已赋值
                     * @return KeyText 是否已赋值
                     */
                    bool KeyTextHasBeenSet() const;

                    /**
                     * 获取报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueText 报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValueText() const;

                    /**
                     * 设置报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ValueText 报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValueText(const std::string& _valueText);

                    /**
                     * 判断参数 ValueText 是否已赋值
                     * @return ValueText 是否已赋值
                     */
                    bool ValueTextHasBeenSet() const;

                private:

                    /**
                     * 内容单元英文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 内容单元中文名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyText;
                    bool m_keyTextHasBeenSet;

                    /**
                     * 报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 报告内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueText;
                    bool m_valueTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEUNIT_H_
