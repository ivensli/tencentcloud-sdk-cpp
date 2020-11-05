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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawTranscodeParameter.h>
#include <tencentcloud/mps/v20190612/model/OverrideTranscodeParameter.h>
#include <tencentcloud/mps/v20190612/model/WatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/MosaicInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/NumberFormat.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 转码任务输入参数类型
                */
                class TranscodeTaskInput : public AbstractModel
                {
                public:
                    TranscodeTaskInput();
                    ~TranscodeTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频转码模板 ID。
                     * @return Definition 视频转码模板 ID。
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置视频转码模板 ID。
                     * @param Definition 视频转码模板 ID。
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取视频转码自定义参数，当 Definition 填 0 时有效。
该参数用于高度定制场景，建议您优先使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawParameter 视频转码自定义参数，当 Definition 填 0 时有效。
该参数用于高度定制场景，建议您优先使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RawTranscodeParameter GetRawParameter() const;

                    /**
                     * 设置视频转码自定义参数，当 Definition 填 0 时有效。
该参数用于高度定制场景，建议您优先使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RawParameter 视频转码自定义参数，当 Definition 填 0 时有效。
该参数用于高度定制场景，建议您优先使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRawParameter(const RawTranscodeParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取视频转码自定义参数，当 Definition 不填 0 时有效。
当填写了该结构中的部分转码参数时，将使用填写的参数覆盖转码模板中的参数。
该参数用于高度定制场景，建议您仅使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OverrideParameter 视频转码自定义参数，当 Definition 不填 0 时有效。
当填写了该结构中的部分转码参数时，将使用填写的参数覆盖转码模板中的参数。
该参数用于高度定制场景，建议您仅使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OverrideTranscodeParameter GetOverrideParameter() const;

                    /**
                     * 设置视频转码自定义参数，当 Definition 不填 0 时有效。
当填写了该结构中的部分转码参数时，将使用填写的参数覆盖转码模板中的参数。
该参数用于高度定制场景，建议您仅使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OverrideParameter 视频转码自定义参数，当 Definition 不填 0 时有效。
当填写了该结构中的部分转码参数时，将使用填写的参数覆盖转码模板中的参数。
该参数用于高度定制场景，建议您仅使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOverrideParameter(const OverrideTranscodeParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     */
                    bool OverrideParameterHasBeenSet() const;

                    /**
                     * 获取水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取马赛克列表，最大可支持 10 张。
                     * @return MosaicSet 马赛克列表，最大可支持 10 张。
                     */
                    std::vector<MosaicInput> GetMosaicSet() const;

                    /**
                     * 设置马赛克列表，最大可支持 10 张。
                     * @param MosaicSet 马赛克列表，最大可支持 10 张。
                     */
                    void SetMosaicSet(const std::vector<MosaicInput>& _mosaicSet);

                    /**
                     * 判断参数 MosaicSet 是否已赋值
                     * @return MosaicSet 是否已赋值
                     */
                    bool MosaicSetHasBeenSet() const;

                    /**
                     * 获取转码后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 转码后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置转码后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OutputStorage 转码后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取转码后主文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_transcode_{definition}.{format}`。
                     * @return OutputObjectPath 转码后主文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_transcode_{definition}.{format}`。
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置转码后主文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_transcode_{definition}.{format}`。
                     * @param OutputObjectPath 转码后主文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_transcode_{definition}.{format}`。
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取转码后分片文件的输出路径（转码 HLS 时 ts 的路径），只能为相对路径。如果不填，则默认为：`{inputName}_transcode_{definition}_{number}.{format}`。
                     * @return SegmentObjectName 转码后分片文件的输出路径（转码 HLS 时 ts 的路径），只能为相对路径。如果不填，则默认为：`{inputName}_transcode_{definition}_{number}.{format}`。
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置转码后分片文件的输出路径（转码 HLS 时 ts 的路径），只能为相对路径。如果不填，则默认为：`{inputName}_transcode_{definition}_{number}.{format}`。
                     * @param SegmentObjectName 转码后分片文件的输出路径（转码 HLS 时 ts 的路径），只能为相对路径。如果不填，则默认为：`{inputName}_transcode_{definition}_{number}.{format}`。
                     */
                    void SetSegmentObjectName(const std::string& _segmentObjectName);

                    /**
                     * 判断参数 SegmentObjectName 是否已赋值
                     * @return SegmentObjectName 是否已赋值
                     */
                    bool SegmentObjectNameHasBeenSet() const;

                    /**
                     * 获取转码后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectNumberFormat 转码后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置转码后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ObjectNumberFormat 转码后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetObjectNumberFormat(const NumberFormat& _objectNumberFormat);

                    /**
                     * 判断参数 ObjectNumberFormat 是否已赋值
                     * @return ObjectNumberFormat 是否已赋值
                     */
                    bool ObjectNumberFormatHasBeenSet() const;

                private:

                    /**
                     * 视频转码模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 视频转码自定义参数，当 Definition 填 0 时有效。
该参数用于高度定制场景，建议您优先使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RawTranscodeParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * 视频转码自定义参数，当 Definition 不填 0 时有效。
当填写了该结构中的部分转码参数时，将使用填写的参数覆盖转码模板中的参数。
该参数用于高度定制场景，建议您仅使用 Definition 指定转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OverrideTranscodeParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 马赛克列表，最大可支持 10 张。
                     */
                    std::vector<MosaicInput> m_mosaicSet;
                    bool m_mosaicSetHasBeenSet;

                    /**
                     * 转码后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 转码后主文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_transcode_{definition}.{format}`。
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * 转码后分片文件的输出路径（转码 HLS 时 ts 的路径），只能为相对路径。如果不填，则默认为：`{inputName}_transcode_{definition}_{number}.{format}`。
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * 转码后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NumberFormat m_objectNumberFormat;
                    bool m_objectNumberFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETASKINPUT_H_
