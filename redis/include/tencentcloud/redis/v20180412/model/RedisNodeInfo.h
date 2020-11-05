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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODEINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 描述Redis实例的主节点或者副本节点信息
                */
                class RedisNodeInfo : public AbstractModel
                {
                public:
                    RedisNodeInfo();
                    ~RedisNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点类型，0 为主节点，1 为副本节点
                     * @return NodeType 节点类型，0 为主节点，1 为副本节点
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置节点类型，0 为主节点，1 为副本节点
                     * @param NodeType 节点类型，0 为主节点，1 为副本节点
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取主节点或者副本节点的可用区ID
                     * @return ZoneId 主节点或者副本节点的可用区ID
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置主节点或者副本节点的可用区ID
                     * @param ZoneId 主节点或者副本节点的可用区ID
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取主节点或者副本节点的ID，创建时不需要传递此参数。
                     * @return NodeId 主节点或者副本节点的ID，创建时不需要传递此参数。
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置主节点或者副本节点的ID，创建时不需要传递此参数。
                     * @param NodeId 主节点或者副本节点的ID，创建时不需要传递此参数。
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * 节点类型，0 为主节点，1 为副本节点
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 主节点或者副本节点的可用区ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 主节点或者副本节点的ID，创建时不需要传递此参数。
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODEINFO_H_
