// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2022 Intel Corporation. All Rights Reserved.

#pragma once

namespace realdds {
namespace topics {

constexpr char * DEVICE_INFO_TOPIC_NAME = "realsense/device-info";

//The next topic names should be concatenated to a topic root
constexpr char * NOTIFICATION_TOPIC_NAME = "/notification";
constexpr char * CONTROL_TOPIC_NAME = "/control";

}  // namespace topics
}  // namespace realdds
