// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_localization_msgs:msg/SensorDiag.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__STRUCT_HPP_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sdv_localization_msgs__msg__SensorDiag __attribute__((deprecated))
#else
# define DEPRECATED__sdv_localization_msgs__msg__SensorDiag __declspec(deprecated)
#endif

namespace sdv_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorDiag_
{
  using Type = SensorDiag_<ContainerAllocator>;

  explicit SensorDiag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_enabled = false;
      this->is_publishing = false;
      this->is_changing = false;
    }
  }

  explicit SensorDiag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_enabled = false;
      this->is_publishing = false;
      this->is_changing = false;
    }
  }

  // field types and members
  using _is_enabled_type =
    bool;
  _is_enabled_type is_enabled;
  using _is_publishing_type =
    bool;
  _is_publishing_type is_publishing;
  using _is_changing_type =
    bool;
  _is_changing_type is_changing;

  // setters for named parameter idiom
  Type & set__is_enabled(
    const bool & _arg)
  {
    this->is_enabled = _arg;
    return *this;
  }
  Type & set__is_publishing(
    const bool & _arg)
  {
    this->is_publishing = _arg;
    return *this;
  }
  Type & set__is_changing(
    const bool & _arg)
  {
    this->is_changing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_localization_msgs__msg__SensorDiag
    std::shared_ptr<sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_localization_msgs__msg__SensorDiag
    std::shared_ptr<sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorDiag_ & other) const
  {
    if (this->is_enabled != other.is_enabled) {
      return false;
    }
    if (this->is_publishing != other.is_publishing) {
      return false;
    }
    if (this->is_changing != other.is_changing) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorDiag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorDiag_

// alias to use template instance with default allocator
using SensorDiag =
  sdv_localization_msgs::msg::SensorDiag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_localization_msgs

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_DIAG__STRUCT_HPP_
