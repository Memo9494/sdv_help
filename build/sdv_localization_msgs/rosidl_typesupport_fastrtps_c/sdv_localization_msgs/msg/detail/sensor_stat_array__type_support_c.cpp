// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sdv_localization_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__struct.h"
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sdv_localization_msgs/msg/detail/sensor_diag__functions.h"  // ms_status, vl_status, vn_status
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_sdv_localization_msgs__msg__SensorDiag(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_sdv_localization_msgs__msg__SensorDiag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sdv_localization_msgs, msg, SensorDiag)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_localization_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_localization_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sdv_localization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SensorStatArray__ros_msg_type = sdv_localization_msgs__msg__SensorStatArray;

static bool _SensorStatArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorStatArray__ros_msg_type * ros_message = static_cast<const _SensorStatArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: vn_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sdv_localization_msgs, msg, SensorDiag
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vn_status, cdr))
    {
      return false;
    }
  }

  // Field name: is_gps_ready
  {
    cdr << (ros_message->is_gps_ready ? true : false);
  }

  // Field name: is_gps_best_quality
  {
    cdr << (ros_message->is_gps_best_quality ? true : false);
  }

  // Field name: vl_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sdv_localization_msgs, msg, SensorDiag
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vl_status, cdr))
    {
      return false;
    }
  }

  // Field name: ms_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sdv_localization_msgs, msg, SensorDiag
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ms_status, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SensorStatArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorStatArray__ros_msg_type * ros_message = static_cast<_SensorStatArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: vn_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sdv_localization_msgs, msg, SensorDiag
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vn_status))
    {
      return false;
    }
  }

  // Field name: is_gps_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_gps_ready = tmp ? true : false;
  }

  // Field name: is_gps_best_quality
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_gps_best_quality = tmp ? true : false;
  }

  // Field name: vl_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sdv_localization_msgs, msg, SensorDiag
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vl_status))
    {
      return false;
    }
  }

  // Field name: ms_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sdv_localization_msgs, msg, SensorDiag
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ms_status))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_localization_msgs
size_t get_serialized_size_sdv_localization_msgs__msg__SensorStatArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorStatArray__ros_msg_type * ros_message = static_cast<const _SensorStatArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name vn_status

  current_alignment += get_serialized_size_sdv_localization_msgs__msg__SensorDiag(
    &(ros_message->vn_status), current_alignment);
  // field.name is_gps_ready
  {
    size_t item_size = sizeof(ros_message->is_gps_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_gps_best_quality
  {
    size_t item_size = sizeof(ros_message->is_gps_best_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vl_status

  current_alignment += get_serialized_size_sdv_localization_msgs__msg__SensorDiag(
    &(ros_message->vl_status), current_alignment);
  // field.name ms_status

  current_alignment += get_serialized_size_sdv_localization_msgs__msg__SensorDiag(
    &(ros_message->ms_status), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SensorStatArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sdv_localization_msgs__msg__SensorStatArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_localization_msgs
size_t max_serialized_size_sdv_localization_msgs__msg__SensorStatArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: vn_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sdv_localization_msgs__msg__SensorDiag(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_gps_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_gps_best_quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vl_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sdv_localization_msgs__msg__SensorDiag(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ms_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sdv_localization_msgs__msg__SensorDiag(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SensorStatArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sdv_localization_msgs__msg__SensorStatArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorStatArray = {
  "sdv_localization_msgs::msg",
  "SensorStatArray",
  _SensorStatArray__cdr_serialize,
  _SensorStatArray__cdr_deserialize,
  _SensorStatArray__get_serialized_size,
  _SensorStatArray__max_serialized_size
};

static rosidl_message_type_support_t _SensorStatArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorStatArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sdv_localization_msgs, msg, SensorStatArray)() {
  return &_SensorStatArray__type_support;
}

#if defined(__cplusplus)
}
#endif
