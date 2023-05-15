// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msg:msg/PanelMsg.idl
// generated code does not contain a copyright notice

#ifndef SDV_MSG__MSG__DETAIL__PANEL_MSG__STRUCT_H_
#define SDV_MSG__MSG__DETAIL__PANEL_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wiper'
// Member 'horn'
// Member 'right_upper_front_light'
// Member 'left_upper_front_light'
// Member 'right_down_front_light'
// Member 'left_down_front_light'
// Member 'back'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in msg/PanelMsg in the package sdv_msg.
typedef struct sdv_msg__msg__PanelMsg
{
  std_msgs__msg__Bool wiper;
  std_msgs__msg__Bool horn;
  std_msgs__msg__Bool right_upper_front_light;
  std_msgs__msg__Bool left_upper_front_light;
  std_msgs__msg__Bool right_down_front_light;
  std_msgs__msg__Bool left_down_front_light;
  std_msgs__msg__Bool back;
} sdv_msg__msg__PanelMsg;

// Struct for a sequence of sdv_msg__msg__PanelMsg.
typedef struct sdv_msg__msg__PanelMsg__Sequence
{
  sdv_msg__msg__PanelMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msg__msg__PanelMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSG__MSG__DETAIL__PANEL_MSG__STRUCT_H_
