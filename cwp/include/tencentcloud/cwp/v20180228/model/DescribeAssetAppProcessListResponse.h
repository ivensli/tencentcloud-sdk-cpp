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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPPROCESSLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPPROCESSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetAppProcessInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetAppProcessList返回参数结构体
                */
                class DescribeAssetAppProcessListResponse : public AbstractModel
                {
                public:
                    DescribeAssetAppProcessListResponse();
                    ~DescribeAssetAppProcessListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取进程列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Process 进程列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetAppProcessInfo> GetProcess() const;

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取分区总数
                     * @return Total 分区总数
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 进程列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetAppProcessInfo> m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 分区总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPPROCESSLISTRESPONSE_H_
