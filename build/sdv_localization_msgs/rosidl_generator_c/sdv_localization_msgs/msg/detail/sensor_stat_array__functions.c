// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vn_status`
// Member `vl_status`
// Member `ms_status`
#include "sdv_localization_msgs/msg/detail/sensor_diag__functions.h"

bool
sdv_localization_msgs__msg__SensorStatArray__init(sdv_localization_msgs__msg__SensorStatArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_localization_msgs__msg__SensorStatArray__fini(msg);
    return false;
  }
  // vn_status
  if (!sdv_localization_msgs__msg__SensorDiag__init(&msg->vn_status)) {
    sdv_localization_msgs__msg__SensorStatArray__fini(msg);
    return false;
  }
  // is_gps_ready
  // is_gps_best_quality
  // vl_status
  if (!sdv_localization_msgs__msg__SensorDiag__init(&msg->vl_status)) {
    sdv_localization_msgs__msg__SensorStatArray__fini(msg);
    return false;
  }
  // ms_status
  if (!sdv_localization_msgs__msg__SensorDiag__init(&msg->ms_status)) {
    sdv_localization_msgs__msg__SensorStatArray__fini(msg);
    return false;
  }
  return true;
}

void
sdv_localization_msgs__msg__SensorStatArray__fini(sdv_localization_msgs__msg__SensorStatArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vn_status
  sdv_localization_msgs__msg__SensorDiag__fini(&msg->vn_status);
  // is_gps_ready
  // is_gps_best_quality
  // vl_status
  sdv_localization_msgs__msg__SensorDiag__fini(&msg->vl_status);
  // ms_status
  sdv_localization_msgs__msg__SensorDiag__fini(&msg->ms_status);
}

bool
sdv_localization_msgs__msg__SensorStatArray__are_equal(const sdv_localization_msgs__msg__SensorStatArray * lhs, const sdv_localization_msgs__msg__SensorStatArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vn_status
  if (!sdv_localization_msgs__msg__SensorDiag__are_equal(
      &(lhs->vn_status), &(rhs->vn_status)))
  {
    return false;
  }
  // is_gps_ready
  if (lhs->is_gps_ready != rhs->is_gps_ready) {
    return false;
  }
  // is_gps_best_quality
  if (lhs->is_gps_best_quality != rhs->is_gps_best_quality) {
    return false;
  }
  // vl_status
  if (!sdv_localization_msgs__msg__SensorDiag__are_equal(
      &(lhs->vl_status), &(rhs->vl_status)))
  {
    return false;
  }
  // ms_status
  if (!sdv_localization_msgs__msg__SensorDiag__are_equal(
      &(lhs->ms_status), &(rhs->ms_status)))
  {
    return false;
  }
  return true;
}

bool
sdv_localization_msgs__msg__SensorStatArray__copy(
  const sdv_localization_msgs__msg__SensorStatArray * input,
  sdv_localization_msgs__msg__SensorStatArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vn_status
  if (!sdv_localization_msgs__msg__SensorDiag__copy(
      &(input->vn_status), &(output->vn_status)))
  {
    return false;
  }
  // is_gps_ready
  output->is_gps_ready = input->is_gps_ready;
  // is_gps_best_quality
  output->is_gps_best_quality = input->is_gps_best_quality;
  // vl_status
  if (!sdv_localization_msgs__msg__SensorDiag__copy(
      &(input->vl_status), &(output->vl_status)))
  {
    return false;
  }
  // ms_status
  if (!sdv_localization_msgs__msg__SensorDiag__copy(
      &(input->ms_status), &(output->ms_status)))
  {
    return false;
  }
  return true;
}

sdv_localization_msgs__msg__SensorStatArray *
sdv_localization_msgs__msg__SensorStatArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_localization_msgs__msg__SensorStatArray * msg = (sdv_localization_msgs__msg__SensorStatArray *)allocator.allocate(sizeof(sdv_localization_msgs__msg__SensorStatArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_localization_msgs__msg__SensorStatArray));
  bool success = sdv_localization_msgs__msg__SensorStatArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_localization_msgs__msg__SensorStatArray__destroy(sdv_localization_msgs__msg__SensorStatArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_localization_msgs__msg__SensorStatArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_localization_msgs__msg__SensorStatArray__Sequence__init(sdv_localization_msgs__msg__SensorStatArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_localization_msgs__msg__SensorStatArray * data = NULL;

  if (size) {
    data = (sdv_localization_msgs__msg__SensorStatArray *)allocator.zero_allocate(size, sizeof(sdv_localization_msgs__msg__SensorStatArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_localization_msgs__msg__SensorStatArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_localization_msgs__msg__SensorStatArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sdv_localization_msgs__msg__SensorStatArray__Sequence__fini(sdv_localization_msgs__msg__SensorStatArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sdv_localization_msgs__msg__SensorStatArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sdv_localization_msgs__msg__SensorStatArray__Sequence *
sdv_localization_msgs__msg__SensorStatArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_localization_msgs__msg__SensorStatArray__Sequence * array = (sdv_localization_msgs__msg__SensorStatArray__Sequence *)allocator.allocate(sizeof(sdv_localization_msgs__msg__SensorStatArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_localization_msgs__msg__SensorStatArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_localization_msgs__msg__SensorStatArray__Sequence__destroy(sdv_localization_msgs__msg__SensorStatArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_localization_msgs__msg__SensorStatArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_localization_msgs__msg__SensorStatArray__Sequence__are_equal(const sdv_localization_msgs__msg__SensorStatArray__Sequence * lhs, const sdv_localization_msgs__msg__SensorStatArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_localization_msgs__msg__SensorStatArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_localization_msgs__msg__SensorStatArray__Sequence__copy(
  const sdv_localization_msgs__msg__SensorStatArray__Sequence * input,
  sdv_localization_msgs__msg__SensorStatArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_localization_msgs__msg__SensorStatArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_localization_msgs__msg__SensorStatArray * data =
      (sdv_localization_msgs__msg__SensorStatArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_localization_msgs__msg__SensorStatArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_localization_msgs__msg__SensorStatArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_localization_msgs__msg__SensorStatArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
