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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SECLOGEXPORTTASKINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SECLOGEXPORTTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 安全审计日志导出任务信息
                */
                class SecLogExportTaskInfo : public AbstractModel
                {
                public:
                    SecLogExportTaskInfo();
                    ~SecLogExportTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异步任务Id。
                     * @return AsyncRequestId 异步任务Id。
                     */
                    uint64_t GetAsyncRequestId() const;

                    /**
                     * 设置异步任务Id。
                     * @param AsyncRequestId 异步任务Id。
                     */
                    void SetAsyncRequestId(const uint64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取任务开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 任务开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 任务开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 任务结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 任务结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param CreateTime 任务创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务状态。
                     * @return Status 任务状态。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态。
                     * @param Status 任务状态。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务执行进度。
                     * @return Progress 任务执行进度。
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置任务执行进度。
                     * @param Progress 任务执行进度。
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取导出日志开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogStartTime 导出日志开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogStartTime() const;

                    /**
                     * 设置导出日志开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogStartTime 导出日志开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogStartTime(const std::string& _logStartTime);

                    /**
                     * 判断参数 LogStartTime 是否已赋值
                     * @return LogStartTime 是否已赋值
                     */
                    bool LogStartTimeHasBeenSet() const;

                    /**
                     * 获取导出日志结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogEndTime 导出日志结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogEndTime() const;

                    /**
                     * 设置导出日志结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogEndTime 导出日志结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogEndTime(const std::string& _logEndTime);

                    /**
                     * 判断参数 LogEndTime 是否已赋值
                     * @return LogEndTime 是否已赋值
                     */
                    bool LogEndTimeHasBeenSet() const;

                    /**
                     * 获取日志文件总大小，单位KB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalSize 日志文件总大小，单位KB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalSize() const;

                    /**
                     * 设置日志文件总大小，单位KB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalSize 日志文件总大小，单位KB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalSize(const uint64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取风险等级列表。0 无风险；1 低风险；2 中风险；3 高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DangerLevels 风险等级列表。0 无风险；1 低风险；2 中风险；3 高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> GetDangerLevels() const;

                    /**
                     * 设置风险等级列表。0 无风险；1 低风险；2 中风险；3 高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DangerLevels 风险等级列表。0 无风险；1 低风险；2 中风险；3 高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDangerLevels(const std::vector<uint64_t>& _dangerLevels);

                    /**
                     * 判断参数 DangerLevels 是否已赋值
                     * @return DangerLevels 是否已赋值
                     */
                    bool DangerLevelsHasBeenSet() const;

                private:

                    /**
                     * 异步任务Id。
                     */
                    uint64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 任务开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务执行进度。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 导出日志开始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logStartTime;
                    bool m_logStartTimeHasBeenSet;

                    /**
                     * 导出日志结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logEndTime;
                    bool m_logEndTimeHasBeenSet;

                    /**
                     * 日志文件总大小，单位KB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 风险等级列表。0 无风险；1 低风险；2 中风险；3 高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_dangerLevels;
                    bool m_dangerLevelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SECLOGEXPORTTASKINFO_H_
