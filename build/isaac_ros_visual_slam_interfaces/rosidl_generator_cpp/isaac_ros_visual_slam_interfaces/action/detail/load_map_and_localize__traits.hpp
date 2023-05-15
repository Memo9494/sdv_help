// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isaac_ros_visual_slam_interfaces:action/LoadMapAndLocalize.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_ROS_VISUAL_SLAM_INTERFACES__ACTION__DETAIL__LOAD_MAP_AND_LOCALIZE__TRAITS_HPP_
#define ISAAC_ROS_VISUAL_SLAM_INTERFACES__ACTION__DETAIL__LOAD_MAP_AND_LOCALIZE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isaac_ros_visual_slam_interfaces/action/detail/load_map_and_localize__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'localize_near_point'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace isaac_ros_visual_slam_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LoadMapAndLocalize_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_url
  {
    out << "map_url: ";
    rosidl_generator_traits::value_to_yaml(msg.map_url, out);
    out << ", ";
  }

  // member: localize_near_point
  {
    out << "localize_near_point: ";
    to_flow_style_yaml(msg.localize_near_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMapAndLocalize_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_url: ";
    rosidl_generator_traits::value_to_yaml(msg.map_url, out);
    out << "\n";
  }

  // member: localize_near_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localize_near_point:\n";
    to_block_style_yaml(msg.localize_near_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMapAndLocalize_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace isaac_ros_visual_slam_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_ros_visual_slam_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal & msg)
{
  return isaac_ros_visual_slam_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_Goal";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace isaac_ros_visual_slam_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LoadMapAndLocalize_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMapAndLocalize_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMapAndLocalize_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace isaac_ros_visual_slam_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_ros_visual_slam_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result & msg)
{
  return isaac_ros_visual_slam_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_Result";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace isaac_ros_visual_slam_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LoadMapAndLocalize_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMapAndLocalize_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMapAndLocalize_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace isaac_ros_visual_slam_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_ros_visual_slam_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback & msg)
{
  return isaac_ros_visual_slam_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_Feedback";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "isaac_ros_visual_slam_interfaces/action/detail/load_map_and_localize__traits.hpp"

namespace isaac_ros_visual_slam_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LoadMapAndLocalize_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMapAndLocalize_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMapAndLocalize_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace isaac_ros_visual_slam_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_ros_visual_slam_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request & msg)
{
  return isaac_ros_visual_slam_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_SendGoal_Request";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace isaac_ros_visual_slam_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LoadMapAndLocalize_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMapAndLocalize_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMapAndLocalize_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace isaac_ros_visual_slam_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_ros_visual_slam_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response & msg)
{
  return isaac_ros_visual_slam_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_SendGoal_Response";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_SendGoal";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request>::value &&
    has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request>::value &&
    has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace isaac_ros_visual_slam_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LoadMapAndLocalize_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMapAndLocalize_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMapAndLocalize_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace isaac_ros_visual_slam_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_ros_visual_slam_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request & msg)
{
  return isaac_ros_visual_slam_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_GetResult_Request";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "isaac_ros_visual_slam_interfaces/action/detail/load_map_and_localize__traits.hpp"

namespace isaac_ros_visual_slam_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LoadMapAndLocalize_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMapAndLocalize_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMapAndLocalize_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace isaac_ros_visual_slam_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_ros_visual_slam_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response & msg)
{
  return isaac_ros_visual_slam_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_GetResult_Response";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result>::value> {};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result>::value> {};

template<>
struct is_message<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_GetResult";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request>::value &&
    has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request>::value &&
    has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response>::value
  >
{
};

template<>
struct is_service<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "isaac_ros_visual_slam_interfaces/action/detail/load_map_and_localize__traits.hpp"

namespace isaac_ros_visual_slam_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const LoadMapAndLocalize_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMapAndLocalize_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMapAndLocalize_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace isaac_ros_visual_slam_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  isaac_ros_visual_slam_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isaac_ros_visual_slam_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_FeedbackMessage & msg)
{
  return isaac_ros_visual_slam_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_FeedbackMessage>()
{
  return "isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_FeedbackMessage";
}

template<>
inline const char * name<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_FeedbackMessage>()
{
  return "isaac_ros_visual_slam_interfaces/action/LoadMapAndLocalize_FeedbackMessage";
}

template<>
struct has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize>
  : std::true_type
{
};

template<>
struct is_action_goal<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<isaac_ros_visual_slam_interfaces::action::LoadMapAndLocalize_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ISAAC_ROS_VISUAL_SLAM_INTERFACES__ACTION__DETAIL__LOAD_MAP_AND_LOCALIZE__TRAITS_HPP_
