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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserInformation.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUsers返回参数结构体
                */
                class ListUsersResponse : public AbstractModel
                {
                public:
                    ListUsersResponse();
                    ~ListUsersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取查询返回的相关用户列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserList 查询返回的相关用户列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserInformation> GetUserList() const;

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     */
                    bool UserListHasBeenSet() const;

                    /**
                     * 获取返回查询用户的总数量，仅当入参IncludeTotal等于true时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 返回查询用户的总数量，仅当入参IncludeTotal等于true时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 查询返回的相关用户列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserInformation> m_userList;
                    bool m_userListHasBeenSet;

                    /**
                     * 返回查询用户的总数量，仅当入参IncludeTotal等于true时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSRESPONSE_H_
