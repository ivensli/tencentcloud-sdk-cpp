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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPORTBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPORTBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资源管理账号基本信息
                */
                class AssetPortBaseInfo : public AbstractModel
                {
                public:
                    AssetPortBaseInfo();
                    ~AssetPortBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机内网IP
                     * @return MachineIp 主机内网IP
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP
                     * @param MachineIp 主机内网IP
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机外网IP
                     * @return MachineWanIp 主机外网IP
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网IP
                     * @param MachineWanIp 主机外网IP
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取主机Quuid
                     * @return Quuid 主机Quuid
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
                     * @param Quuid 主机Quuid
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机Uuid
                     * @return Uuid 主机Uuid
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
                     * @param Uuid 主机Uuid
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取操作系统信息
                     * @return OsInfo 操作系统信息
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置操作系统信息
                     * @param OsInfo 操作系统信息
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取主机业务组ID
                     * @return ProjectId 主机业务组ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置主机业务组ID
                     * @param ProjectId 主机业务组ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tag 主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取进程名称
                     * @return ProcessName 进程名称
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名称
                     * @param ProcessName 进程名称
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取进程版本
                     * @return ProcessVersion 进程版本
                     */
                    std::string GetProcessVersion() const;

                    /**
                     * 设置进程版本
                     * @param ProcessVersion 进程版本
                     */
                    void SetProcessVersion(const std::string& _processVersion);

                    /**
                     * 判断参数 ProcessVersion 是否已赋值
                     * @return ProcessVersion 是否已赋值
                     */
                    bool ProcessVersionHasBeenSet() const;

                    /**
                     * 获取进程路径
                     * @return ProcessPath 进程路径
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置进程路径
                     * @param ProcessPath 进程路径
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取进程ID
                     * @return Pid 进程ID
                     */
                    std::string GetPid() const;

                    /**
                     * 设置进程ID
                     * @param Pid 进程ID
                     */
                    void SetPid(const std::string& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取运行用户
                     * @return User 运行用户
                     */
                    std::string GetUser() const;

                    /**
                     * 设置运行用户
                     * @param User 运行用户
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取启动时间
                     * @return StartTime 启动时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
                     * @param StartTime 启动时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取启动参数
                     * @return Param 启动参数
                     */
                    std::string GetParam() const;

                    /**
                     * 设置启动参数
                     * @param Param 启动参数
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取进程TTY
                     * @return Teletype 进程TTY
                     */
                    std::string GetTeletype() const;

                    /**
                     * 设置进程TTY
                     * @param Teletype 进程TTY
                     */
                    void SetTeletype(const std::string& _teletype);

                    /**
                     * 判断参数 Teletype 是否已赋值
                     * @return Teletype 是否已赋值
                     */
                    bool TeletypeHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
                     * @param Port 端口
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取所属用户组
                     * @return GroupName 所属用户组
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置所属用户组
                     * @param GroupName 所属用户组
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取进程MD5
                     * @return Md5 进程MD5
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置进程MD5
                     * @param Md5 进程MD5
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取父进程ID
                     * @return Ppid 父进程ID
                     */
                    std::string GetPpid() const;

                    /**
                     * 设置父进程ID
                     * @param Ppid 父进程ID
                     */
                    void SetPpid(const std::string& _ppid);

                    /**
                     * 判断参数 Ppid 是否已赋值
                     * @return Ppid 是否已赋值
                     */
                    bool PpidHasBeenSet() const;

                    /**
                     * 获取父进程名称
                     * @return ParentProcessName 父进程名称
                     */
                    std::string GetParentProcessName() const;

                    /**
                     * 设置父进程名称
                     * @param ParentProcessName 父进程名称
                     */
                    void SetParentProcessName(const std::string& _parentProcessName);

                    /**
                     * 判断参数 ParentProcessName 是否已赋值
                     * @return ParentProcessName 是否已赋值
                     */
                    bool ParentProcessNameHasBeenSet() const;

                    /**
                     * 获取端口协议
                     * @return Proto 端口协议
                     */
                    std::string GetProto() const;

                    /**
                     * 设置端口协议
                     * @param Proto 端口协议
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取绑定IP
                     * @return BindIp 绑定IP
                     */
                    std::string GetBindIp() const;

                    /**
                     * 设置绑定IP
                     * @param BindIp 绑定IP
                     */
                    void SetBindIp(const std::string& _bindIp);

                    /**
                     * 判断参数 BindIp 是否已赋值
                     * @return BindIp 是否已赋值
                     */
                    bool BindIpHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return MachineName 主机名称
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称
                     * @param MachineName 主机名称
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 主机内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机外网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 操作系统信息
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * 主机业务组ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 进程名称
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 进程版本
                     */
                    std::string m_processVersion;
                    bool m_processVersionHasBeenSet;

                    /**
                     * 进程路径
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 进程ID
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 运行用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 启动参数
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * 进程TTY
                     */
                    std::string m_teletype;
                    bool m_teletypeHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 所属用户组
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 进程MD5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 父进程ID
                     */
                    std::string m_ppid;
                    bool m_ppidHasBeenSet;

                    /**
                     * 父进程名称
                     */
                    std::string m_parentProcessName;
                    bool m_parentProcessNameHasBeenSet;

                    /**
                     * 端口协议
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * 绑定IP
                     */
                    std::string m_bindIp;
                    bool m_bindIpHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPORTBASEINFO_H_
