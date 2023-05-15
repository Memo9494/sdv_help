// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_msg:msg/PanelMsg.idl
// generated code does not contain a copyright notice

#ifndef SDV_MSG__MSG__DETAIL__PANEL_MSG__TRAITS_HPP_
#define SDV_MSG__MSG__DETAIL__PANEL_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_msg/msg/detail/panel_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'wiper'
// Member 'horn'
// Member 'right_upper_front_light'
// Member 'left_upper_front_light'
// Member 'right_down_front_light'
// Member 'left_down_front_light'
// Member 'back'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace sdv_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PanelMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: wiper
  {
    out << "wiper: ";
    to_flow_style_yaml(msg.wiper, out);
    out << ", ";
  }

  // member: horn
  {
    out << "horn: ";
    to_flow_style_yaml(msg.horn, out);
    out << ", ";
  }

  // member: right_upper_front_light
  {
    out << "right_upper_front_light: ";
    to_flow_style_yaml(msg.right_upper_front_light, out);
    out << ", ";
  }

  // member: left_upper_front_light
  {
    out << "left_upper_front_light: ";
    to_flow_style_yaml(msg.left_upper_front_light, out);
    out << ", ";
  }

  // member: right_down_front_light
  {
    out << "right_down_front_light: ";
    to_flow_style_yaml(msg.right_down_front_light, out);
    out << ", ";
  }

  // member: left_down_front_light
  {
    out << "left_down_front_light: ";
    to_flow_style_yaml(msg.left_down_front_light, out);
    out << ", ";
  }

  // member: back
  {
    out << "back: ";
    to_flow_style_yaml(msg.back, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PanelMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wiper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper:\n";
    to_block_style_yaml(msg.wiper, out, indentation + 2);
  }

  // member: horn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn:\n";
    to_block_style_yaml(msg.horn, out, indentation + 2);
  }

  // member: right_upper_front_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_upper_front_light:\n";
    to_block_style_yaml(msg.right_upper_front_light, out, indentation + 2);
  }

  // member: left_upper_front_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_upper_front_light:\n";
    to_block_style_yaml(msg.left_upper_front_light, out, indentation + 2);
  }

  // member: right_down_front_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_down_front_light:\n";
    to_block_style_yaml(msg.right_down_front_light, out, indentation + 2);
  }

  // member: left_down_front_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_down_front_light:\n";
    to_block_style_yaml(msg.left_down_front_light, out, indentation + 2);
  }

  // member: back
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back:\n";
    to_block_style_yaml(msg.back, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PanelMsg & msg, bool use_flow_style = false)
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

}  // namespace sdv_msg

namespace rosidl_generator_traits
{

[[deprecated("use sdv_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdv_msg::msg::PanelMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_msg::msg::PanelMsg & msg)
{
  return sdv_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_msg::msg::PanelMsg>()
{
  return "sdv_msg::msg::PanelMsg";
}

template<>
inline const char * name<sdv_msg::msg::PanelMsg>()
{
  return "sdv_msg/msg/PanelMsg";
}

template<>
struct has_fixed_size<sdv_msg::msg::PanelMsg>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<sdv_msg::msg::PanelMsg>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<sdv_msg::msg::PanelMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_MSG__MSG__DETAIL__PANEL_MSG__TRAITS_HPP_
