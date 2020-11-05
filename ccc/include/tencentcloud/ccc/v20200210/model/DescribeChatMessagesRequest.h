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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECHATMESSAGESREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECHATMESSAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeChatMessages请求参数结构体
                */
                class DescribeChatMessagesRequest : public AbstractModel
                {
                public:
                    DescribeChatMessagesRequest();
                    ~DescribeChatMessagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务记录ID
                     * @return CdrId 服务记录ID
                     */
                    std::string GetCdrId() const;

                    /**
                     * 设置服务记录ID
                     * @param CdrId 服务记录ID
                     */
                    void SetCdrId(const std::string& _cdrId);

                    /**
                     * 判断参数 CdrId 是否已赋值
                     * @return CdrId 是否已赋值
                     */
                    bool CdrIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return SdkAppId 应用ID
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID
                     * @param SdkAppId 应用ID
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取返回记录条数 最大为100默认20
                     * @return Limit 返回记录条数 最大为100默认20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数 最大为100默认20
                     * @param Limit 返回记录条数 最大为100默认20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取返回记录偏移 默认为0
                     * @return Offset 返回记录偏移 默认为0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置返回记录偏移 默认为0
                     * @param Offset 返回记录偏移 默认为0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取1为从早到晚，2为从晚到早，默认为2
                     * @return Order 1为从早到晚，2为从晚到早，默认为2
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置1为从早到晚，2为从晚到早，默认为2
                     * @param Order 1为从早到晚，2为从晚到早，默认为2
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 服务记录ID
                     */
                    std::string m_cdrId;
                    bool m_cdrIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 应用ID
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 返回记录条数 最大为100默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回记录偏移 默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 1为从早到晚，2为从晚到早，默认为2
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECHATMESSAGESREQUEST_H_
