// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_msg:msg/XboxMsg.idl
// generated code does not contain a copyright notice

#ifndef SDV_MSG__MSG__DETAIL__XBOX_MSG__BUILDER_HPP_
#define SDV_MSG__MSG__DETAIL__XBOX_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_msg/msg/detail/xbox_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_msg
{

namespace msg
{

namespace builder
{

class Init_XboxMsg_dpad_right
{
public:
  explicit Init_XboxMsg_dpad_right(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  ::sdv_msg::msg::XboxMsg dpad_right(::sdv_msg::msg::XboxMsg::_dpad_right_type arg)
  {
    msg_.dpad_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_dpad_left
{
public:
  explicit Init_XboxMsg_dpad_left(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_dpad_right dpad_left(::sdv_msg::msg::XboxMsg::_dpad_left_type arg)
  {
    msg_.dpad_left = std::move(arg);
    return Init_XboxMsg_dpad_right(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_dpad_down
{
public:
  explicit Init_XboxMsg_dpad_down(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_dpad_left dpad_down(::sdv_msg::msg::XboxMsg::_dpad_down_type arg)
  {
    msg_.dpad_down = std::move(arg);
    return Init_XboxMsg_dpad_left(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_dpad_up
{
public:
  explicit Init_XboxMsg_dpad_up(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_dpad_down dpad_up(::sdv_msg::msg::XboxMsg::_dpad_up_type arg)
  {
    msg_.dpad_up = std::move(arg);
    return Init_XboxMsg_dpad_down(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_y
{
public:
  explicit Init_XboxMsg_y(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_dpad_up y(::sdv_msg::msg::XboxMsg::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_XboxMsg_dpad_up(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_x
{
public:
  explicit Init_XboxMsg_x(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_y x(::sdv_msg::msg::XboxMsg::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_XboxMsg_y(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_b
{
public:
  explicit Init_XboxMsg_b(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_x b(::sdv_msg::msg::XboxMsg::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_XboxMsg_x(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_a
{
public:
  explicit Init_XboxMsg_a(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_b a(::sdv_msg::msg::XboxMsg::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_XboxMsg_b(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_right_trigger
{
public:
  explicit Init_XboxMsg_right_trigger(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_a right_trigger(::sdv_msg::msg::XboxMsg::_right_trigger_type arg)
  {
    msg_.right_trigger = std::move(arg);
    return Init_XboxMsg_a(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_lefty
{
public:
  explicit Init_XboxMsg_lefty(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_right_trigger lefty(::sdv_msg::msg::XboxMsg::_lefty_type arg)
  {
    msg_.lefty = std::move(arg);
    return Init_XboxMsg_right_trigger(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_leftx
{
public:
  explicit Init_XboxMsg_leftx(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_lefty leftx(::sdv_msg::msg::XboxMsg::_leftx_type arg)
  {
    msg_.leftx = std::move(arg);
    return Init_XboxMsg_lefty(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_back
{
public:
  explicit Init_XboxMsg_back(::sdv_msg::msg::XboxMsg & msg)
  : msg_(msg)
  {}
  Init_XboxMsg_leftx back(::sdv_msg::msg::XboxMsg::_back_type arg)
  {
    msg_.back = std::move(arg);
    return Init_XboxMsg_leftx(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

class Init_XboxMsg_connected
{
public:
  Init_XboxMsg_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_XboxMsg_back connected(::sdv_msg::msg::XboxMsg::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_XboxMsg_back(msg_);
  }

private:
  ::sdv_msg::msg::XboxMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_msg::msg::XboxMsg>()
{
  return sdv_msg::msg::builder::Init_XboxMsg_connected();
}

}  // namespace sdv_msg

#endif  // SDV_MSG__MSG__DETAIL__XBOX_MSG__BUILDER_HPP_
