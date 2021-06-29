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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DECRIBEPUBLICKEYREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DECRIBEPUBLICKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DecribePublicKey请求参数结构体
                */
                class DecribePublicKeyRequest : public AbstractModel
                {
                public:
                    DecribePublicKeyRequest();
                    ~DecribePublicKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，是应用的全局唯一标识。
                     * @return ApplicationId 应用ID，是应用的全局唯一标识。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID，是应用的全局唯一标识。
                     * @param ApplicationId 应用ID，是应用的全局唯一标识。
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID，是应用的全局唯一标识。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DECRIBEPUBLICKEYREQUEST_H_