// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_localization_msgs:msg/SensorDiag.idl
// generated code does not contain a copyright notice
#include "sdv_localization_msgs/msg/detail/sensor_diag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sdv_localization_msgs__msg__SensorDiag__init(sdv_localization_msgs__msg__SensorDiag * msg)
{
  if (!msg) {
    return false;
  }
  // is_enabled
  // is_publishing
  // is_changing
  return true;
}

void
sdv_localization_msgs__msg__SensorDiag__fini(sdv_localization_msgs__msg__SensorDiag * msg)
{
  if (!msg) {
    return;
  }
  // is_enabled
  // is_publishing
  // is_changing
}

bool
sdv_localization_msgs__msg__SensorDiag__are_equal(const sdv_localization_msgs__msg__SensorDiag * lhs, const sdv_localization_msgs__msg__SensorDiag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_enabled
  if (lhs->is_enabled != rhs->is_enabled) {
    return false;
  }
  // is_publishing
  if (lhs->is_publishing != rhs->is_publishing) {
    return false;
  }
  // is_changing
  if (lhs->is_changing != rhs->is_changing) {
    return false;
  }
  return true;
}

bool
sdv_localization_msgs__msg__SensorDiag__copy(
  const sdv_localization_msgs__msg__SensorDiag * input,
  sdv_localization_msgs__msg__SensorDiag * output)
{
  if (!input || !output) {
    return false;
  }
  // is_enabled
  output->is_enabled = input->is_enabled;
  // is_publishing
  output->is_publishing = input->is_publishing;
  // is_changing
  output->is_changing = input->is_changing;
  return true;
}

sdv_localization_msgs__msg__SensorDiag *
sdv_localization_msgs__msg__SensorDiag__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_localization_msgs__msg__SensorDiag * msg = (sdv_localization_msgs__msg__SensorDiag *)allocator.allocate(sizeof(sdv_localization_msgs__msg__SensorDiag), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_localization_msgs__msg__SensorDiag));
  bool success = sdv_localization_msgs__msg__SensorDiag__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_localization_msgs__msg__SensorDiag__destroy(sdv_localization_msgs__msg__SensorDiag * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_localization_msgs__msg__SensorDiag__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_localization_msgs__msg__SensorDiag__Sequence__init(sdv_localization_msgs__msg__SensorDiag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_localization_msgs__msg__SensorDiag * data = NULL;

  if (size) {
    data = (sdv_localization_msgs__msg__SensorDiag *)allocator.zero_allocate(size, sizeof(sdv_localization_msgs__msg__SensorDiag), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_localization_msgs__msg__SensorDiag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_localization_msgs__msg__SensorDiag__fini(&data[i - 1]);
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
sdv_localization_msgs__msg__SensorDiag__Sequence__fini(sdv_localization_msgs__msg__SensorDiag__Sequence * array)
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
      sdv_localization_msgs__msg__SensorDiag__fini(&array->data[i]);
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

sdv_localization_msgs__msg__SensorDiag__Sequence *
sdv_localization_msgs__msg__SensorDiag__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_localization_msgs__msg__SensorDiag__Sequence * array = (sdv_localization_msgs__msg__SensorDiag__Sequence *)allocator.allocate(sizeof(sdv_localization_msgs__msg__SensorDiag__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_localization_msgs__msg__SensorDiag__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_localization_msgs__msg__SensorDiag__Sequence__destroy(sdv_localization_msgs__msg__SensorDiag__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_localization_msgs__msg__SensorDiag__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_localization_msgs__msg__SensorDiag__Sequence__are_equal(const sdv_localization_msgs__msg__SensorDiag__Sequence * lhs, const sdv_localization_msgs__msg__SensorDiag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_localization_msgs__msg__SensorDiag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_localization_msgs__msg__SensorDiag__Sequence__copy(
  const sdv_localization_msgs__msg__SensorDiag__Sequence * input,
  sdv_localization_msgs__msg__SensorDiag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_localization_msgs__msg__SensorDiag);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_localization_msgs__msg__SensorDiag * data =
      (sdv_localization_msgs__msg__SensorDiag *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_localization_msgs__msg__SensorDiag__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_localization_msgs__msg__SensorDiag__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_localization_msgs__msg__SensorDiag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
