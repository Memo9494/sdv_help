// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__BUILDER_HPP_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_localization_msgs/msg/detail/sensor_stat_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorStatArray_ms_status
{
public:
  explicit Init_SensorStatArray_ms_status(::sdv_localization_msgs::msg::SensorStatArray & msg)
  : msg_(msg)
  {}
  ::sdv_localization_msgs::msg::SensorStatArray ms_status(::sdv_localization_msgs::msg::SensorStatArray::_ms_status_type arg)
  {
    msg_.ms_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorStatArray msg_;
};

class Init_SensorStatArray_vl_status
{
public:
  explicit Init_SensorStatArray_vl_status(::sdv_localization_msgs::msg::SensorStatArray & msg)
  : msg_(msg)
  {}
  Init_SensorStatArray_ms_status vl_status(::sdv_localization_msgs::msg::SensorStatArray::_vl_status_type arg)
  {
    msg_.vl_status = std::move(arg);
    return Init_SensorStatArray_ms_status(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorStatArray msg_;
};

class Init_SensorStatArray_is_gps_best_quality
{
public:
  explicit Init_SensorStatArray_is_gps_best_quality(::sdv_localization_msgs::msg::SensorStatArray & msg)
  : msg_(msg)
  {}
  Init_SensorStatArray_vl_status is_gps_best_quality(::sdv_localization_msgs::msg::SensorStatArray::_is_gps_best_quality_type arg)
  {
    msg_.is_gps_best_quality = std::move(arg);
    return Init_SensorStatArray_vl_status(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorStatArray msg_;
};

class Init_SensorStatArray_is_gps_ready
{
public:
  explicit Init_SensorStatArray_is_gps_ready(::sdv_localization_msgs::msg::SensorStatArray & msg)
  : msg_(msg)
  {}
  Init_SensorStatArray_is_gps_best_quality is_gps_ready(::sdv_localization_msgs::msg::SensorStatArray::_is_gps_ready_type arg)
  {
    msg_.is_gps_ready = std::move(arg);
    return Init_SensorStatArray_is_gps_best_quality(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorStatArray msg_;
};

class Init_SensorStatArray_vn_status
{
public:
  explicit Init_SensorStatArray_vn_status(::sdv_localization_msgs::msg::SensorStatArray & msg)
  : msg_(msg)
  {}
  Init_SensorStatArray_is_gps_ready vn_status(::sdv_localization_msgs::msg::SensorStatArray::_vn_status_type arg)
  {
    msg_.vn_status = std::move(arg);
    return Init_SensorStatArray_is_gps_ready(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorStatArray msg_;
};

class Init_SensorStatArray_header
{
public:
  Init_SensorStatArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStatArray_vn_status header(::sdv_localization_msgs::msg::SensorStatArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorStatArray_vn_status(msg_);
  }

private:
  ::sdv_localization_msgs::msg::SensorStatArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_localization_msgs::msg::SensorStatArray>()
{
  return sdv_localization_msgs::msg::builder::Init_SensorStatArray_header();
}

}  // namespace sdv_localization_msgs

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__BUILDER_HPP_
