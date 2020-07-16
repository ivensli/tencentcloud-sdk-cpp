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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SearchItem.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeClusterNodes请求参数结构体
                */
                class DescribeClusterNodesRequest : public AbstractModel
                {
                public:
                    DescribeClusterNodesRequest();
                    ~DescribeClusterNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID,实例ID形如: emr-xxxxxxxx
                     * @return InstanceId 集群实例ID,实例ID形如: emr-xxxxxxxx
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID,实例ID形如: emr-xxxxxxxx
                     * @param InstanceId 集群实例ID,实例ID形如: emr-xxxxxxxx
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点标识，取值为：
<li>all：表示获取全部类型节点，cdb信息除外。</li>
<li>master：表示获取master节点信息。</li>
<li>core：表示获取core节点信息。</li>
<li>task：表示获取task节点信息。</li>
<li>common：表示获取common节点信息。</li>
<li>router：表示获取router节点信息。</li>
<li>db：表示获取正常状态的cdb信息。</li>
<li>recyle：表示获取回收站隔离中的节点信息，包括cdb信息。</li>
<li>renew：表示获取所有待续费的节点信息，包括cdb信息，自动续费节点不会返回。</li>
注意：现在只支持以上取值，输入其他值会导致错误。
                     * @return NodeFlag 节点标识，取值为：
<li>all：表示获取全部类型节点，cdb信息除外。</li>
<li>master：表示获取master节点信息。</li>
<li>core：表示获取core节点信息。</li>
<li>task：表示获取task节点信息。</li>
<li>common：表示获取common节点信息。</li>
<li>router：表示获取router节点信息。</li>
<li>db：表示获取正常状态的cdb信息。</li>
<li>recyle：表示获取回收站隔离中的节点信息，包括cdb信息。</li>
<li>renew：表示获取所有待续费的节点信息，包括cdb信息，自动续费节点不会返回。</li>
注意：现在只支持以上取值，输入其他值会导致错误。
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置节点标识，取值为：
<li>all：表示获取全部类型节点，cdb信息除外。</li>
<li>master：表示获取master节点信息。</li>
<li>core：表示获取core节点信息。</li>
<li>task：表示获取task节点信息。</li>
<li>common：表示获取common节点信息。</li>
<li>router：表示获取router节点信息。</li>
<li>db：表示获取正常状态的cdb信息。</li>
<li>recyle：表示获取回收站隔离中的节点信息，包括cdb信息。</li>
<li>renew：表示获取所有待续费的节点信息，包括cdb信息，自动续费节点不会返回。</li>
注意：现在只支持以上取值，输入其他值会导致错误。
                     * @param NodeFlag 节点标识，取值为：
<li>all：表示获取全部类型节点，cdb信息除外。</li>
<li>master：表示获取master节点信息。</li>
<li>core：表示获取core节点信息。</li>
<li>task：表示获取task节点信息。</li>
<li>common：表示获取common节点信息。</li>
<li>router：表示获取router节点信息。</li>
<li>db：表示获取正常状态的cdb信息。</li>
<li>recyle：表示获取回收站隔离中的节点信息，包括cdb信息。</li>
<li>renew：表示获取所有待续费的节点信息，包括cdb信息，自动续费节点不会返回。</li>
注意：现在只支持以上取值，输入其他值会导致错误。
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取页编号，默认值为0，表示第一页。
                     * @return Offset 页编号，默认值为0，表示第一页。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页编号，默认值为0，表示第一页。
                     * @param Offset 页编号，默认值为0，表示第一页。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页返回数量，默认值为100，最大值为100。
                     * @return Limit 每页返回数量，默认值为100，最大值为100。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页返回数量，默认值为100，最大值为100。
                     * @param Limit 每页返回数量，默认值为100，最大值为100。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取资源类型:支持all/host/pod，默认为all
                     * @return HardwareResourceType 资源类型:支持all/host/pod，默认为all
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置资源类型:支持all/host/pod，默认为all
                     * @param HardwareResourceType 资源类型:支持all/host/pod，默认为all
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取支持搜索的字段
                     * @return SearchFields 支持搜索的字段
                     */
                    std::vector<SearchItem> GetSearchFields() const;

                    /**
                     * 设置支持搜索的字段
                     * @param SearchFields 支持搜索的字段
                     */
                    void SetSearchFields(const std::vector<SearchItem>& _searchFields);

                    /**
                     * 判断参数 SearchFields 是否已赋值
                     * @return SearchFields 是否已赋值
                     */
                    bool SearchFieldsHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID,实例ID形如: emr-xxxxxxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点标识，取值为：
<li>all：表示获取全部类型节点，cdb信息除外。</li>
<li>master：表示获取master节点信息。</li>
<li>core：表示获取core节点信息。</li>
<li>task：表示获取task节点信息。</li>
<li>common：表示获取common节点信息。</li>
<li>router：表示获取router节点信息。</li>
<li>db：表示获取正常状态的cdb信息。</li>
<li>recyle：表示获取回收站隔离中的节点信息，包括cdb信息。</li>
<li>renew：表示获取所有待续费的节点信息，包括cdb信息，自动续费节点不会返回。</li>
注意：现在只支持以上取值，输入其他值会导致错误。
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * 页编号，默认值为0，表示第一页。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页返回数量，默认值为100，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资源类型:支持all/host/pod，默认为all
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * 支持搜索的字段
                     */
                    std::vector<SearchItem> m_searchFields;
                    bool m_searchFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESREQUEST_H_
