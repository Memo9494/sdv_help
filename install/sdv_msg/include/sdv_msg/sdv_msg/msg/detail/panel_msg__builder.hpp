// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msg:msg/PanelMsg.idl
// generated code does not contain a copyright notice

#ifndef SDV_MSG__MSG__DETAIL__PANEL_MSG__BUILDER_HPP_
#define SDV_MSG__MSG__DETAIL__PANEL_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msg/msg/detail/panel_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msg
{

namespace msg
{

namespace builder
{

class Init_PanelMsg_back
{
public:
  explicit Init_PanelMsg_back(::sdv_msg::msg::PanelMsg & msg)
  : msg_(msg)
  {}
  ::sdv_msg::msg::PanelMsg back(::sdv_msg::msg::PanelMsg::_back_type arg)
  {
    msg_.back = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msg::msg::PanelMsg msg_;
};

class Init_PanelMsg_left_down_front_light
{
public:
  explicit Init_PanelMsg_left_down_front_light(::sdv_msg::msg::PanelMsg & msg)
  : msg_(msg)
  {}
  Init_PanelMsg_back left_down_front_light(::sdv_msg::msg::PanelMsg::_left_down_front_light_type arg)
  {
    msg_.left_down_front_light = std::move(arg);
    return Init_PanelMsg_back(msg_);
  }

private:
  ::sdv_msg::msg::PanelMsg msg_;
};

class Init_PanelMsg_right_down_front_light
{
public:
  explicit Init_PanelMsg_right_down_front_light(::sdv_msg::msg::PanelMsg & msg)
  : msg_(msg)
  {}
  Init_PanelMsg_left_down_front_light right_down_front_light(::sdv_msg::msg::PanelMsg::_right_down_front_light_type arg)
  {
    msg_.right_down_front_light = std::move(arg);
    return Init_PanelMsg_left_down_front_light(msg_);
  }

private:
  ::sdv_msg::msg::PanelMsg msg_;
};

class Init_PanelMsg_left_upper_front_light
{
public:
  explicit Init_PanelMsg_left_upper_front_light(::sdv_msg::msg::PanelMsg & msg)
  : msg_(msg)
  {}
  Init_PanelMsg_right_down_front_light left_upper_front_light(::sdv_msg::msg::PanelMsg::_left_upper_front_light_type arg)
  {
    msg_.left_upper_front_light = std::move(arg);
    return Init_PanelMsg_right_down_front_light(msg_);
  }

private:
  ::sdv_msg::msg::PanelMsg msg_;
};

class Init_PanelMsg_right_upper_front_light
{
public:
  explicit Init_PanelMsg_right_upper_front_light(::sdv_msg::msg::PanelMsg & msg)
  : msg_(msg)
  {}
  Init_PanelMsg_left_upper_front_light right_upper_front_light(::sdv_msg::msg::PanelMsg::_right_upper_front_light_type arg)
  {
    msg_.right_upper_front_light = std::move(arg);
    return Init_PanelMsg_left_upper_front_light(msg_);
  }

private:
  ::sdv_msg::msg::PanelMsg msg_;
};

class Init_PanelMsg_horn
{
public:
  explicit Init_PanelMsg_horn(::sdv_msg::msg::PanelMsg & msg)
  : msg_(msg)
  {}
  Init_PanelMsg_right_upper_front_light horn(::sdv_msg::msg::PanelMsg::_horn_type arg)
  {
    msg_.horn = std::move(arg);
    return Init_PanelMsg_right_upper_front_light(msg_);
  }

private:
  ::sdv_msg::msg::PanelMsg msg_;
};

class Init_PanelMsg_wiper
{
public:
  Init_PanelMsg_wiper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PanelMsg_horn wiper(::sdv_msg::msg::PanelMsg::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return Init_PanelMsg_horn(msg_);
  }

private:
  ::sdv_msg::msg::PanelMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msg::msg::PanelMsg>()
{
  return sdv_msg::msg::builder::Init_PanelMsg_wiper();
}

}  // namespace sdv_msg

#endif  // SDV_MSG__MSG__DETAIL__PANEL_MSG__BUILDER_HPP_
