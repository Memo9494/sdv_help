// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_localization_msgs:msg/SensorDiag.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__BUILDER_HPP_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_localization_msgs/msg/detail/sensor_diag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorDiag_is_changing
{
public:
  explicit Init_SensorDiag_is_changing(::sdv_localization_msgs::msg::SensorDiag & msg)
  : msg_(msg)
  {}
  ::sdv_localization_msgs::msg::SensorDiag is_changing(::sdv_localization_msgs::msg::SensorDiag::_is_changing_type arg)
  {
    msg_.is_changing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorDiag msg_;
};

class Init_SensorDiag_is_publishing
{
public:
  explicit Init_SensorDiag_is_publishing(::sdv_localization_msgs::msg::SensorDiag & msg)
  : msg_(msg)
  {}
  Init_SensorDiag_is_changing is_publishing(::sdv_localization_msgs::msg::SensorDiag::_is_publishing_type arg)
  {
    msg_.is_publishing = std::move(arg);
    return Init_SensorDiag_is_changing(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorDiag msg_;
};

class Init_SensorDiag_is_enabled
{
public:
  Init_SensorDiag_is_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorDiag_is_publishing is_enabled(::sdv_localization_msgs::msg::SensorDiag::_is_enabled_type arg)
  {
    msg_.is_enabled = std::move(arg);
    return Init_SensorDiag_is_publishing(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorDiag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_localization_msgs::msg::SensorDiag>()
{
  return sdv_localization_msgs::msg::builder::Init_SensorDiag_is_enabled();
}

}  // namespace sdv_localization_msgs

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__BUILDER_HPP_
