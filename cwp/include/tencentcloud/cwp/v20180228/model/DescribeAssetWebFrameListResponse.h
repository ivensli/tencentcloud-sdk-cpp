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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBFRAMELISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBFRAMELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetWebFrameBaseInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetWebFrameList返回参数结构体
                */
                class DescribeAssetWebFrameListResponse : public AbstractModel
                {
                public:
                    DescribeAssetWebFrameListResponse();
                    ~DescribeAssetWebFrameListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总数
                     * @return Total 记录总数
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebFrames 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetWebFrameBaseInfo> GetWebFrames() const;

                    /**
                     * 判断参数 WebFrames 是否已赋值
                     * @return WebFrames 是否已赋值
                     */
                    bool WebFramesHasBeenSet() const;

                private:

                    /**
                     * 记录总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetWebFrameBaseInfo> m_webFrames;
                    bool m_webFramesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBFRAMELISTRESPONSE_H_
