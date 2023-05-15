// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__STRUCT_HPP_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'vn_status'
// Member 'vl_status'
// Member 'ms_status'
#include "sdv_localization_msgs/msg/detail/sensor_diag__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sdv_localization_msgs__msg__SensorStatArray __attribute__((deprecated))
#else
# define DEPRECATED__sdv_localization_msgs__msg__SensorStatArray __declspec(deprecated)
#endif

namespace sdv_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorStatArray_
{
  using Type = SensorStatArray_<ContainerAllocator>;

  explicit SensorStatArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    vn_status(_init),
    vl_status(_init),
    ms_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_gps_ready = false;
      this->is_gps_best_quality = false;
    }
  }

  explicit SensorStatArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    vn_status(_alloc, _init),
    vl_status(_alloc, _init),
    ms_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_gps_ready = false;
      this->is_gps_best_quality = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vn_status_type =
    sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>;
  _vn_status_type vn_status;
  using _is_gps_ready_type =
    bool;
  _is_gps_ready_type is_gps_ready;
  using _is_gps_best_quality_type =
    bool;
  _is_gps_best_quality_type is_gps_best_quality;
  using _vl_status_type =
    sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>;
  _vl_status_type vl_status;
  using _ms_status_type =
    sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator>;
  _ms_status_type ms_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vn_status(
    const sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> & _arg)
  {
    this->vn_status = _arg;
    return *this;
  }
  Type & set__is_gps_ready(
    const bool & _arg)
  {
    this->is_gps_ready = _arg;
    return *this;
  }
  Type & set__is_gps_best_quality(
    const bool & _arg)
  {
    this->is_gps_best_quality = _arg;
    return *this;
  }
  Type & set__vl_status(
    const sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> & _arg)
  {
    this->vl_status = _arg;
    return *this;
  }
  Type & set__ms_status(
    const sdv_localization_msgs::msg::SensorDiag_<ContainerAllocator> & _arg)
  {
    this->ms_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_localization_msgs__msg__SensorStatArray
    std::shared_ptr<sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_localization_msgs__msg__SensorStatArray
    std::shared_ptr<sdv_localization_msgs::msg::SensorStatArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorStatArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vn_status != other.vn_status) {
      return false;
    }
    if (this->is_gps_ready != other.is_gps_ready) {
      return false;
    }
    if (this->is_gps_best_quality != other.is_gps_best_quality) {
      return false;
    }
    if (this->vl_status != other.vl_status) {
      return false;
    }
    if (this->ms_status != other.ms_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorStatArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorStatArray_

// alias to use template instance with default allocator
using SensorStatArray =
  sdv_localization_msgs::msg::SensorStatArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_localization_msgs

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__STRUCT_HPP_
