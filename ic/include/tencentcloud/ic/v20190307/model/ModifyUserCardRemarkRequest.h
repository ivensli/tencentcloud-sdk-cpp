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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_MODIFYUSERCARDREMARKREQUEST_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_MODIFYUSERCARDREMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * ModifyUserCardRemark请求参数结构体
                */
                class ModifyUserCardRemarkRequest : public AbstractModel
                {
                public:
                    ModifyUserCardRemarkRequest();
                    ~ModifyUserCardRemarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return Sdkappid 应用ID
                     */
                    int64_t GetSdkappid() const;

                    /**
                     * 设置应用ID
                     * @param Sdkappid 应用ID
                     */
                    void SetSdkappid(const int64_t& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     */
                    bool SdkappidHasBeenSet() const;

                    /**
                     * 获取物联卡ICCID
                     * @return Iccid 物联卡ICCID
                     */
                    std::string GetIccid() const;

                    /**
                     * 设置物联卡ICCID
                     * @param Iccid 物联卡ICCID
                     */
                    void SetIccid(const std::string& _iccid);

                    /**
                     * 判断参数 Iccid 是否已赋值
                     * @return Iccid 是否已赋值
                     */
                    bool IccidHasBeenSet() const;

                    /**
                     * 获取备注信息，限50字
                     * @return Remark 备注信息，限50字
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息，限50字
                     * @param Remark 备注信息，限50字
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    int64_t m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                    /**
                     * 物联卡ICCID
                     */
                    std::string m_iccid;
                    bool m_iccidHasBeenSet;

                    /**
                     * 备注信息，限50字
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_MODIFYUSERCARDREMARKREQUEST_H_