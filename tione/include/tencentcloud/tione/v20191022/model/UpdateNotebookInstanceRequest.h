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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATENOTEBOOKINSTANCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATENOTEBOOKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * UpdateNotebookInstance请求参数结构体
                */
                class UpdateNotebookInstanceRequest : public AbstractModel
                {
                public:
                    UpdateNotebookInstanceRequest();
                    ~UpdateNotebookInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例名称
                     * @return NotebookInstanceName Notebook实例名称
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置Notebook实例名称
                     * @param NotebookInstanceName Notebook实例名称
                     */
                    void SetNotebookInstanceName(const std::string& _notebookInstanceName);

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                    /**
                     * 获取角色的资源描述
                     * @return RoleArn 角色的资源描述
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置角色的资源描述
                     * @param RoleArn 角色的资源描述
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取Root访问权限
                     * @return RootAccess Root访问权限
                     */
                    std::string GetRootAccess() const;

                    /**
                     * 设置Root访问权限
                     * @param RootAccess Root访问权限
                     */
                    void SetRootAccess(const std::string& _rootAccess);

                    /**
                     * 判断参数 RootAccess 是否已赋值
                     * @return RootAccess 是否已赋值
                     */
                    bool RootAccessHasBeenSet() const;

                    /**
                     * 获取数据卷大小(GB)
                     * @return VolumeSizeInGB 数据卷大小(GB)
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置数据卷大小(GB)
                     * @param VolumeSizeInGB 数据卷大小(GB)
                     */
                    void SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB);

                    /**
                     * 判断参数 VolumeSizeInGB 是否已赋值
                     * @return VolumeSizeInGB 是否已赋值
                     */
                    bool VolumeSizeInGBHasBeenSet() const;

                    /**
                     * 获取算力资源类型
                     * @return InstanceType 算力资源类型
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置算力资源类型
                     * @param InstanceType 算力资源类型
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取notebook生命周期脚本名称
                     * @return LifecycleScriptsName notebook生命周期脚本名称
                     */
                    std::string GetLifecycleScriptsName() const;

                    /**
                     * 设置notebook生命周期脚本名称
                     * @param LifecycleScriptsName notebook生命周期脚本名称
                     */
                    void SetLifecycleScriptsName(const std::string& _lifecycleScriptsName);

                    /**
                     * 判断参数 LifecycleScriptsName 是否已赋值
                     * @return LifecycleScriptsName 是否已赋值
                     */
                    bool LifecycleScriptsNameHasBeenSet() const;

                    /**
                     * 获取是否解绑生命周期脚本，默认 false。
如果本来就没有绑定脚本，则忽略此参数；
如果本来有绑定脚本，此参数为 true 则解绑；
如果本来有绑定脚本，此参数为 false，则需要额外填入 LifecycleScriptsName
                     * @return DisassociateLifecycleScript 是否解绑生命周期脚本，默认 false。
如果本来就没有绑定脚本，则忽略此参数；
如果本来有绑定脚本，此参数为 true 则解绑；
如果本来有绑定脚本，此参数为 false，则需要额外填入 LifecycleScriptsName
                     */
                    bool GetDisassociateLifecycleScript() const;

                    /**
                     * 设置是否解绑生命周期脚本，默认 false。
如果本来就没有绑定脚本，则忽略此参数；
如果本来有绑定脚本，此参数为 true 则解绑；
如果本来有绑定脚本，此参数为 false，则需要额外填入 LifecycleScriptsName
                     * @param DisassociateLifecycleScript 是否解绑生命周期脚本，默认 false。
如果本来就没有绑定脚本，则忽略此参数；
如果本来有绑定脚本，此参数为 true 则解绑；
如果本来有绑定脚本，此参数为 false，则需要额外填入 LifecycleScriptsName
                     */
                    void SetDisassociateLifecycleScript(const bool& _disassociateLifecycleScript);

                    /**
                     * 判断参数 DisassociateLifecycleScript 是否已赋值
                     * @return DisassociateLifecycleScript 是否已赋值
                     */
                    bool DisassociateLifecycleScriptHasBeenSet() const;

                    /**
                     * 获取默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     * @return DefaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::string GetDefaultCodeRepository() const;

                    /**
                     * 设置默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     * @param DefaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    void SetDefaultCodeRepository(const std::string& _defaultCodeRepository);

                    /**
                     * 判断参数 DefaultCodeRepository 是否已赋值
                     * @return DefaultCodeRepository 是否已赋值
                     */
                    bool DefaultCodeRepositoryHasBeenSet() const;

                    /**
                     * 获取其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     * @return AdditionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::vector<std::string> GetAdditionalCodeRepositories() const;

                    /**
                     * 设置其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     * @param AdditionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    void SetAdditionalCodeRepositories(const std::vector<std::string>& _additionalCodeRepositories);

                    /**
                     * 判断参数 AdditionalCodeRepositories 是否已赋值
                     * @return AdditionalCodeRepositories 是否已赋值
                     */
                    bool AdditionalCodeRepositoriesHasBeenSet() const;

                    /**
                     * 获取是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     * @return DisassociateDefaultCodeRepository 是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     */
                    bool GetDisassociateDefaultCodeRepository() const;

                    /**
                     * 设置是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     * @param DisassociateDefaultCodeRepository 是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     */
                    void SetDisassociateDefaultCodeRepository(const bool& _disassociateDefaultCodeRepository);

                    /**
                     * 判断参数 DisassociateDefaultCodeRepository 是否已赋值
                     * @return DisassociateDefaultCodeRepository 是否已赋值
                     */
                    bool DisassociateDefaultCodeRepositoryHasBeenSet() const;

                    /**
                     * 获取是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     * @return DisassociateAdditionalCodeRepositories 是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     */
                    bool GetDisassociateAdditionalCodeRepositories() const;

                    /**
                     * 设置是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     * @param DisassociateAdditionalCodeRepositories 是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     */
                    void SetDisassociateAdditionalCodeRepositories(const bool& _disassociateAdditionalCodeRepositories);

                    /**
                     * 判断参数 DisassociateAdditionalCodeRepositories 是否已赋值
                     * @return DisassociateAdditionalCodeRepositories 是否已赋值
                     */
                    bool DisassociateAdditionalCodeRepositoriesHasBeenSet() const;

                    /**
                     * 获取是否开启CLS日志服务，可取值Enabled/Disabled
                     * @return ClsAccess 是否开启CLS日志服务，可取值Enabled/Disabled
                     */
                    std::string GetClsAccess() const;

                    /**
                     * 设置是否开启CLS日志服务，可取值Enabled/Disabled
                     * @param ClsAccess 是否开启CLS日志服务，可取值Enabled/Disabled
                     */
                    void SetClsAccess(const std::string& _clsAccess);

                    /**
                     * 判断参数 ClsAccess 是否已赋值
                     * @return ClsAccess 是否已赋值
                     */
                    bool ClsAccessHasBeenSet() const;

                private:

                    /**
                     * Notebook实例名称
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * 角色的资源描述
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * Root访问权限
                     */
                    std::string m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * 数据卷大小(GB)
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * 算力资源类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * notebook生命周期脚本名称
                     */
                    std::string m_lifecycleScriptsName;
                    bool m_lifecycleScriptsNameHasBeenSet;

                    /**
                     * 是否解绑生命周期脚本，默认 false。
如果本来就没有绑定脚本，则忽略此参数；
如果本来有绑定脚本，此参数为 true 则解绑；
如果本来有绑定脚本，此参数为 false，则需要额外填入 LifecycleScriptsName
                     */
                    bool m_disassociateLifecycleScript;
                    bool m_disassociateLifecycleScriptHasBeenSet;

                    /**
                     * 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::string m_defaultCodeRepository;
                    bool m_defaultCodeRepositoryHasBeenSet;

                    /**
                     * 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::vector<std::string> m_additionalCodeRepositories;
                    bool m_additionalCodeRepositoriesHasBeenSet;

                    /**
                     * 是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     */
                    bool m_disassociateDefaultCodeRepository;
                    bool m_disassociateDefaultCodeRepositoryHasBeenSet;

                    /**
                     * 是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     */
                    bool m_disassociateAdditionalCodeRepositories;
                    bool m_disassociateAdditionalCodeRepositoriesHasBeenSet;

                    /**
                     * 是否开启CLS日志服务，可取值Enabled/Disabled
                     */
                    std::string m_clsAccess;
                    bool m_clsAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATENOTEBOOKINSTANCEREQUEST_H_