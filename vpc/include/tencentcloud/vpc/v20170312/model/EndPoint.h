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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 终端节点详情。
                */
                class EndPoint : public AbstractModel
                {
                public:
                    EndPoint();
                    ~EndPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取终端节点ID。
                     * @return EndPointId 终端节点ID。
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置终端节点ID。
                     * @param EndPointId 终端节点ID。
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取VPCID。
                     * @return VpcId VPCID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPCID。
                     * @param VpcId VPCID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID。
                     * @return SubnetId 子网ID。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID。
                     * @param SubnetId 子网ID。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取APPID。
                     * @return EndPointOwner APPID。
                     */
                    std::string GetEndPointOwner() const;

                    /**
                     * 设置APPID。
                     * @param EndPointOwner APPID。
                     */
                    void SetEndPointOwner(const std::string& _endPointOwner);

                    /**
                     * 判断参数 EndPointOwner 是否已赋值
                     * @return EndPointOwner 是否已赋值
                     */
                    bool EndPointOwnerHasBeenSet() const;

                    /**
                     * 获取终端节点名称。
                     * @return EndPointName 终端节点名称。
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置终端节点名称。
                     * @param EndPointName 终端节点名称。
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取终端节点服务的VPCID。
                     * @return ServiceVpcId 终端节点服务的VPCID。
                     */
                    std::string GetServiceVpcId() const;

                    /**
                     * 设置终端节点服务的VPCID。
                     * @param ServiceVpcId 终端节点服务的VPCID。
                     */
                    void SetServiceVpcId(const std::string& _serviceVpcId);

                    /**
                     * 判断参数 ServiceVpcId 是否已赋值
                     * @return ServiceVpcId 是否已赋值
                     */
                    bool ServiceVpcIdHasBeenSet() const;

                    /**
                     * 获取终端节点服务的VIP。
                     * @return ServiceVip 终端节点服务的VIP。
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置终端节点服务的VIP。
                     * @param ServiceVip 终端节点服务的VIP。
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取终端节点服务的ID。
                     * @return EndPointServiceId 终端节点服务的ID。
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务的ID。
                     * @param EndPointServiceId 终端节点服务的ID。
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取终端节点的VIP。
                     * @return EndPointVip 终端节点的VIP。
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 设置终端节点的VIP。
                     * @param EndPointVip 终端节点的VIP。
                     */
                    void SetEndPointVip(const std::string& _endPointVip);

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取终端节点状态，ACTIVE：可用，PENDING：待接受，ACCEPTING：接受中，REJECTED：已拒绝，FAILED：失败。
                     * @return State 终端节点状态，ACTIVE：可用，PENDING：待接受，ACCEPTING：接受中，REJECTED：已拒绝，FAILED：失败。
                     */
                    std::string GetState() const;

                    /**
                     * 设置终端节点状态，ACTIVE：可用，PENDING：待接受，ACCEPTING：接受中，REJECTED：已拒绝，FAILED：失败。
                     * @param State 终端节点状态，ACTIVE：可用，PENDING：待接受，ACCEPTING：接受中，REJECTED：已拒绝，FAILED：失败。
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreateTime 创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取终端节点绑定的安全组实例ID列表。
                     * @return GroupSet 终端节点绑定的安全组实例ID列表。
                     */
                    std::vector<std::string> GetGroupSet() const;

                    /**
                     * 设置终端节点绑定的安全组实例ID列表。
                     * @param GroupSet 终端节点绑定的安全组实例ID列表。
                     */
                    void SetGroupSet(const std::vector<std::string>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取终端节点服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 终端节点服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置终端节点服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceName 终端节点服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * 终端节点ID。
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * VPCID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * APPID。
                     */
                    std::string m_endPointOwner;
                    bool m_endPointOwnerHasBeenSet;

                    /**
                     * 终端节点名称。
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * 终端节点服务的VPCID。
                     */
                    std::string m_serviceVpcId;
                    bool m_serviceVpcIdHasBeenSet;

                    /**
                     * 终端节点服务的VIP。
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * 终端节点服务的ID。
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * 终端节点的VIP。
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * 终端节点状态，ACTIVE：可用，PENDING：待接受，ACCEPTING：接受中，REJECTED：已拒绝，FAILED：失败。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 终端节点绑定的安全组实例ID列表。
                     */
                    std::vector<std::string> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * 终端节点服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINT_H_
