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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_ATTRIBUTE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_ATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 提取属性内容
                */
                class Attribute : public AbstractModel
                {
                public:
                    Attribute();
                    ~Attribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetText() const;

                    /**
                     * 设置原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Text 原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取标准化提取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 标准化提取值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标准化提取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 标准化提取值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取对应上级文本位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 对应上级文本位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置对应上级文本位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Index 对应上级文本位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 标准化提取值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 对应上级文本位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_ATTRIBUTE_H_
