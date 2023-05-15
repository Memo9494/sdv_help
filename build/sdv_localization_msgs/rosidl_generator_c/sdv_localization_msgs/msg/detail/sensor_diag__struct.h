// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_localization_msgs:msg/SensorDiag.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__STRUCT_H_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorDiag in the package sdv_localization_msgs.
typedef struct sdv_localization_msgs__msg__SensorDiag
{
  /// This field has fields relevant to a single instance of the SDV sensors
  bool is_enabled;
  bool is_publishing;
  bool is_changing;
} sdv_localization_msgs__msg__SensorDiag;

// Struct for a sequence of sdv_localization_msgs__msg__SensorDiag.
typedef struct sdv_localization_msgs__msg__SensorDiag__Sequence
{
  sdv_localization_msgs__msg__SensorDiag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_localization_msgs__msg__SensorDiag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__STRUCT_H_
