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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALHISTORY_H_

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
                * 个人史
                */
                class PersonalHistory : public AbstractModel
                {
                public:
                    PersonalHistory();
                    ~PersonalHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出生地
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthPlace 出生地
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置出生地
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BirthPlace 出生地
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBirthPlace(const std::string& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取工作史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Job 工作史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJob() const;

                    /**
                     * 设置工作史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Job 工作史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJob(const std::string& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取旅居史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivePlace 旅居史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLivePlace() const;

                    /**
                     * 设置旅居史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LivePlace 旅居史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLivePlace(const std::string& _livePlace);

                    /**
                     * 判断参数 LivePlace 是否已赋值
                     * @return LivePlace 是否已赋值
                     */
                    bool LivePlaceHasBeenSet() const;

                    /**
                     * 获取个人史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Personal 个人史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPersonal() const;

                    /**
                     * 设置个人史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Personal 个人史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPersonal(const std::string& _personal);

                    /**
                     * 判断参数 Personal 是否已赋值
                     * @return Personal 是否已赋值
                     */
                    bool PersonalHasBeenSet() const;

                    /**
                     * 获取吸烟史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Smoke 吸烟史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSmoke() const;

                    /**
                     * 设置吸烟史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Smoke 吸烟史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSmoke(const std::string& _smoke);

                    /**
                     * 判断参数 Smoke 是否已赋值
                     * @return Smoke 是否已赋值
                     */
                    bool SmokeHasBeenSet() const;

                    /**
                     * 获取饮酒史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alcoholic 饮酒史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlcoholic() const;

                    /**
                     * 设置饮酒史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Alcoholic 饮酒史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlcoholic(const std::string& _alcoholic);

                    /**
                     * 判断参数 Alcoholic 是否已赋值
                     * @return Alcoholic 是否已赋值
                     */
                    bool AlcoholicHasBeenSet() const;

                private:

                    /**
                     * 出生地
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 工作史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 旅居史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_livePlace;
                    bool m_livePlaceHasBeenSet;

                    /**
                     * 个人史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_personal;
                    bool m_personalHasBeenSet;

                    /**
                     * 吸烟史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_smoke;
                    bool m_smokeHasBeenSet;

                    /**
                     * 饮酒史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alcoholic;
                    bool m_alcoholicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALHISTORY_H_
