// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_localization_msgs:msg/SensorDiag.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__TRAITS_HPP_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_localization_msgs/msg/detail/sensor_diag__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sdv_localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorDiag & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_enabled
  {
    out << "is_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.is_enabled, out);
    out << ", ";
  }

  // member: is_publishing
  {
    out << "is_publishing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_publishing, out);
    out << ", ";
  }

  // member: is_changing
  {
    out << "is_changing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_changing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorDiag & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.is_enabled, out);
    out << "\n";
  }

  // member: is_publishing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_publishing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_publishing, out);
    out << "\n";
  }

  // member: is_changing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_changing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_changing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorDiag & msg, bool use_flow_style = false)
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
  const sdv_localization_msgs::msg::SensorDiag & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_localization_msgs::msg::SensorDiag & msg)
{
  return sdv_localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_localization_msgs::msg::SensorDiag>()
{
  return "sdv_localization_msgs::msg::SensorDiag";
}

template<>
inline const char * name<sdv_localization_msgs::msg::SensorDiag>()
{
  return "sdv_localization_msgs/msg/SensorDiag";
}

template<>
struct has_fixed_size<sdv_localization_msgs::msg::SensorDiag>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sdv_localization_msgs::msg::SensorDiag>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sdv_localization_msgs::msg::SensorDiag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__TRAITS_HPP_
