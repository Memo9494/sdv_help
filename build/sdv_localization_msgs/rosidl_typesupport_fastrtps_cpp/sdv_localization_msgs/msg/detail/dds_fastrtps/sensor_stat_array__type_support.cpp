// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sdv_localization_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sdv_localization_msgs::msg::SensorDiag &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sdv_localization_msgs::msg::SensorDiag &);
size_t get_serialized_size(
  const sdv_localization_msgs::msg::SensorDiag &,
  size_t current_alignment);
size_t
max_serialized_size_SensorDiag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sdv_localization_msgs

namespace sdv_localization_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sdv_localization_msgs::msg::SensorDiag &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sdv_localization_msgs::msg::SensorDiag &);
size_t get_serialized_size(
  const sdv_localization_msgs::msg::SensorDiag &,
  size_t current_alignment);
size_t
max_serialized_size_SensorDiag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sdv_localization_msgs

namespace sdv_localization_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sdv_localization_msgs::msg::SensorDiag &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sdv_localization_msgs::msg::SensorDiag &);
size_t get_serialized_size(
  const sdv_localization_msgs::msg::SensorDiag &,
  size_t current_alignment);
size_t
max_serialized_size_SensorDiag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sdv_localization_msgs


namespace sdv_localization_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_localization_msgs
cdr_serialize(
  const sdv_localization_msgs::msg::SensorStatArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: vn_status
  sdv_localization_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vn_status,
    cdr);
  // Member: is_gps_ready
  cdr << (ros_message.is_gps_ready ? true : false);
  // Member: is_gps_best_quality
  cdr << (ros_message.is_gps_best_quality ? true : false);
  // Member: vl_status
  sdv_localization_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vl_status,
    cdr);
  // Member: ms_status
  sdv_localization_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ms_status,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_localization_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sdv_localization_msgs::msg::SensorStatArray & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: vn_status
  sdv_localization_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vn_status);

  // Member: is_gps_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_gps_ready = tmp ? true : false;
  }

  // Member: is_gps_best_quality
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_gps_best_quality = tmp ? true : false;
  }

  // Member: vl_status
  sdv_localization_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vl_status);

  // Member: ms_status
  sdv_localization_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ms_status);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_localization_msgs
get_serialized_size(
  const sdv_localization_msgs::msg::SensorStatArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: vn_status

  current_alignment +=
    sdv_localization_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vn_status, current_alignment);
  // Member: is_gps_ready
  {
    size_t item_size = sizeof(ros_message.is_gps_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_gps_best_quality
  {
    size_t item_size = sizeof(ros_message.is_gps_best_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vl_status

  current_alignment +=
    sdv_localization_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vl_status, current_alignment);
  // Member: ms_status

  current_alignment +=
    sdv_localization_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ms_status, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_localization_msgs
max_serialized_size_SensorStatArray(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: vn_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        sdv_localization_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SensorDiag(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_gps_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_gps_best_quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vl_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        sdv_localization_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SensorDiag(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ms_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        sdv_localization_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SensorDiag(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SensorStatArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sdv_localization_msgs::msg::SensorStatArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorStatArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sdv_localization_msgs::msg::SensorStatArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorStatArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sdv_localization_msgs::msg::SensorStatArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorStatArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorStatArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorStatArray__callbacks = {
  "sdv_localization_msgs::msg",
  "SensorStatArray",
  _SensorStatArray__cdr_serialize,
  _SensorStatArray__cdr_deserialize,
  _SensorStatArray__get_serialized_size,
  _SensorStatArray__max_serialized_size
};

static rosidl_message_type_support_t _SensorStatArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorStatArray__callbacks,
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
get_message_type_support_handle<sdv_localization_msgs::msg::SensorStatArray>()
{
  return &sdv_localization_msgs::msg::typesupport_fastrtps_cpp::_SensorStatArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sdv_localization_msgs, msg, SensorStatArray)() {
  return &sdv_localization_msgs::msg::typesupport_fastrtps_cpp::_SensorStatArray__handle;
}

#ifdef __cplusplus
}
#endif
