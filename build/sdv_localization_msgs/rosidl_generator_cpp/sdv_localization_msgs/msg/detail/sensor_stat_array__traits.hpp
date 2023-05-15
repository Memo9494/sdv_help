// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__TRAITS_HPP_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_localization_msgs/msg/detail/sensor_stat_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'vn_status'
// Member 'vl_status'
// Member 'ms_status'
#include "sdv_localization_msgs/msg/detail/sensor_diag__traits.hpp"

namespace sdv_localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorStatArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vn_status
  {
    out << "vn_status: ";
    to_flow_style_yaml(msg.vn_status, out);
    out << ", ";
  }

  // member: is_gps_ready
  {
    out << "is_gps_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.is_gps_ready, out);
    out << ", ";
  }

  // member: is_gps_best_quality
  {
    out << "is_gps_best_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.is_gps_best_quality, out);
    out << ", ";
  }

  // member: vl_status
  {
    out << "vl_status: ";
    to_flow_style_yaml(msg.vl_status, out);
    out << ", ";
  }

  // member: ms_status
  {
    out << "ms_status: ";
    to_flow_style_yaml(msg.ms_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorStatArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: vn_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vn_status:\n";
    to_block_style_yaml(msg.vn_status, out, indentation + 2);
  }

  // member: is_gps_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_gps_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.is_gps_ready, out);
    out << "\n";
  }

  // member: is_gps_best_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_gps_best_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.is_gps_best_quality, out);
    out << "\n";
  }

  // member: vl_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vl_status:\n";
    to_block_style_yaml(msg.vl_status, out, indentation + 2);
  }

  // member: ms_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ms_status:\n";
    to_block_style_yaml(msg.ms_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorStatArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sdv_localization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sdv_localization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdv_localization_msgs::msg::SensorStatArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_localization_msgs::msg::SensorStatArray & msg)
{
  return sdv_localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_localization_msgs::msg::SensorStatArray>()
{
  return "sdv_localization_msgs::msg::SensorStatArray";
}

template<>
inline const char * name<sdv_localization_msgs::msg::SensorStatArray>()
{
  return "sdv_localization_msgs/msg/SensorStatArray";
}

template<>
struct has_fixed_size<sdv_localization_msgs::msg::SensorStatArray>
  : std::integral_constant<bool, has_fixed_size<sdv_localization_msgs::msg::SensorDiag>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdv_localization_msgs::msg::SensorStatArray>
  : std::integral_constant<bool, has_bounded_size<sdv_localization_msgs::msg::SensorDiag>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdv_localization_msgs::msg::SensorStatArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__TRAITS_HPP_
