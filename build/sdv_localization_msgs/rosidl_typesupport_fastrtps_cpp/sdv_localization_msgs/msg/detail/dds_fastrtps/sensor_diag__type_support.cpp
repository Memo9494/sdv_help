// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sdv_localization_msgs:msg/SensorDiag.idl
// generated code does not contain a copyright notice
#include "sdv_localization_msgs/msg/detail/sensor_diag__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sdv_localization_msgs/msg/detail/sensor_diag__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sdv_localization_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_localization_msgs
cdr_serialize(
  const sdv_localization_msgs::msg::SensorDiag & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_enabled
  cdr << (ros_message.is_enabled ? true : false);
  // Member: is_publishing
  cdr << (ros_message.is_publishing ? true : false);
  // Member: is_changing
  cdr << (ros_message.is_changing ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_localization_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sdv_localization_msgs::msg::SensorDiag & ros_message)
{
  // Member: is_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_enabled = tmp ? true : false;
  }

  // Member: is_publishing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_publishing = tmp ? true : false;
  }

  // Member: is_changing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_changing = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_localization_msgs
get_serialized_size(
  const sdv_localization_msgs::msg::SensorDiag & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_enabled
  {
    size_t item_size = sizeof(ros_message.is_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_publishing
  {
    size_t item_size = sizeof(ros_message.is_publishing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_changing
  {
    size_t item_size = sizeof(ros_message.is_changing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_localization_msgs
max_serialized_size_SensorDiag(
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


  // Member: is_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_publishing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_changing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SensorDiag__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sdv_localization_msgs::msg::SensorDiag *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorDiag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sdv_localization_msgs::msg::SensorDiag *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorDiag__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sdv_localization_msgs::msg::SensorDiag *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorDiag__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorDiag(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorDiag__callbacks = {
  "sdv_localization_msgs::msg",
  "SensorDiag",
  _SensorDiag__cdr_serialize,
  _SensorDiag__cdr_deserialize,
  _SensorDiag__get_serialized_size,
  _SensorDiag__max_serialized_size
};

static rosidl_message_type_support_t _SensorDiag__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorDiag__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sdv_localization_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sdv_localization_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sdv_localization_msgs::msg::SensorDiag>()
{
  return &sdv_localization_msgs::msg::typesupport_fastrtps_cpp::_SensorDiag__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sdv_localization_msgs, msg, SensorDiag)() {
  return &sdv_localization_msgs::msg::typesupport_fastrtps_cpp::_SensorDiag__handle;
}

#ifdef __cplusplus
}
#endif
