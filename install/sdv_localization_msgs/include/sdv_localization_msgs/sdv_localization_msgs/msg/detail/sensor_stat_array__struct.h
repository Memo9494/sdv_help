// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__STRUCT_H_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'vn_status'
// Member 'vl_status'
// Member 'ms_status'
#include "sdv_localization_msgs/msg/detail/sensor_diag__struct.h"

/// Struct defined in msg/SensorStatArray in the package sdv_localization_msgs.
/**
  * Timestamp of msg
 */
typedef struct sdv_localization_msgs__msg__SensorStatArray
{
  std_msgs__msg__Header header;
  /// This field has fields relevant to the VeetorNav sensor
  sdv_localization_msgs__msg__SensorDiag vn_status;
  bool is_gps_ready;
  bool is_gps_best_quality;
  /// This field has fields relevant to the Velodyne sensor
  sdv_localization_msgs__msg__SensorDiag vl_status;
  /// This field has fields relevant to the Multisense sensor
  sdv_localization_msgs__msg__SensorDiag ms_status;
} sdv_localization_msgs__msg__SensorStatArray;

// Struct for a sequence of sdv_localization_msgs__msg__SensorStatArray.
typedef struct sdv_localization_msgs__msg__SensorStatArray__Sequence
{
  sdv_localization_msgs__msg__SensorStatArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_localization_msgs__msg__SensorStatArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__STRUCT_H_
