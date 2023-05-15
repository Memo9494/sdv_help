// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__rosidl_typesupport_introspection_c.h"
#include "sdv_localization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__functions.h"
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `vn_status`
// Member `vl_status`
// Member `ms_status`
#include "sdv_localization_msgs/msg/sensor_diag.h"
// Member `vn_status`
// Member `vl_status`
// Member `ms_status`
#include "sdv_localization_msgs/msg/detail/sensor_diag__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sdv_localization_msgs__msg__SensorStatArray__init(message_memory);
}

void sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_fini_function(void * message_memory)
{
  sdv_localization_msgs__msg__SensorStatArray__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_localization_msgs__msg__SensorStatArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vn_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_localization_msgs__msg__SensorStatArray, vn_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_gps_ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_localization_msgs__msg__SensorStatArray, is_gps_ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_gps_best_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_localization_msgs__msg__SensorStatArray, is_gps_best_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vl_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_localization_msgs__msg__SensorStatArray, vl_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ms_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_localization_msgs__msg__SensorStatArray, ms_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_members = {
  "sdv_localization_msgs__msg",  // message namespace
  "SensorStatArray",  // message name
  6,  // number of fields
  sizeof(sdv_localization_msgs__msg__SensorStatArray),
  sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_member_array,  // message members
  sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_init_function,  // function to initialize message memory (memory has to be allocated)
  sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_type_support_handle = {
  0,
  &sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sdv_localization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sdv_localization_msgs, msg, SensorStatArray)() {
  sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sdv_localization_msgs, msg, SensorDiag)();
  sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sdv_localization_msgs, msg, SensorDiag)();
  sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sdv_localization_msgs, msg, SensorDiag)();
  if (!sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_type_support_handle.typesupport_identifier) {
    sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sdv_localization_msgs__msg__SensorStatArray__rosidl_typesupport_introspection_c__SensorStatArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
