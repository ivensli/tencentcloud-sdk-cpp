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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEATTACKDOWNLOADTASKRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEATTACKDOWNLOADTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CreateAttackDownloadTask返回参数结构体
                */
                class CreateAttackDownloadTaskResponse : public AbstractModel
                {
                public:
                    CreateAttackDownloadTaskResponse();
                    ~CreateAttackDownloadTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取任务ID
                     * @return Flow 任务ID
                     */
                    std::string GetFlow() const;

                    /**
                     * 判断参数 Flow 是否已赋值
                     * @return Flow 是否已赋值
                     */
                    bool FlowHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_flow;
                    bool m_flowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEATTACKDOWNLOADTASKRESPONSE_H_