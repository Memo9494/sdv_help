// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice

#ifndef SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__FUNCTIONS_H_
#define SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sdv_localization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sdv_localization_msgs/msg/detail/sensor_stat_array__struct.h"

/// Initialize msg/SensorStatArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdv_localization_msgs__msg__SensorStatArray
 * )) before or use
 * sdv_localization_msgs__msg__SensorStatArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
bool
sdv_localization_msgs__msg__SensorStatArray__init(sdv_localization_msgs__msg__SensorStatArray * msg);

/// Finalize msg/SensorStatArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
void
sdv_localization_msgs__msg__SensorStatArray__fini(sdv_localization_msgs__msg__SensorStatArray * msg);

/// Create msg/SensorStatArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdv_localization_msgs__msg__SensorStatArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
sdv_localization_msgs__msg__SensorStatArray *
sdv_localization_msgs__msg__SensorStatArray__create();

/// Destroy msg/SensorStatArray message.
/**
 * It calls
 * sdv_localization_msgs__msg__SensorStatArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
void
sdv_localization_msgs__msg__SensorStatArray__destroy(sdv_localization_msgs__msg__SensorStatArray * msg);

/// Check for msg/SensorStatArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
bool
sdv_localization_msgs__msg__SensorStatArray__are_equal(const sdv_localization_msgs__msg__SensorStatArray * lhs, const sdv_localization_msgs__msg__SensorStatArray * rhs);

/// Copy a msg/SensorStatArray message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
bool
sdv_localization_msgs__msg__SensorStatArray__copy(
  const sdv_localization_msgs__msg__SensorStatArray * input,
  sdv_localization_msgs__msg__SensorStatArray * output);

/// Initialize array of msg/SensorStatArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdv_localization_msgs__msg__SensorStatArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
bool
sdv_localization_msgs__msg__SensorStatArray__Sequence__init(sdv_localization_msgs__msg__SensorStatArray__Sequence * array, size_t size);

/// Finalize array of msg/SensorStatArray messages.
/**
 * It calls
 * sdv_localization_msgs__msg__SensorStatArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
void
sdv_localization_msgs__msg__SensorStatArray__Sequence__fini(sdv_localization_msgs__msg__SensorStatArray__Sequence * array);

/// Create array of msg/SensorStatArray messages.
/**
 * It allocates the memory for the array and calls
 * sdv_localization_msgs__msg__SensorStatArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
sdv_localization_msgs__msg__SensorStatArray__Sequence *
sdv_localization_msgs__msg__SensorStatArray__Sequence__create(size_t size);

/// Destroy array of msg/SensorStatArray messages.
/**
 * It calls
 * sdv_localization_msgs__msg__SensorStatArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
void
sdv_localization_msgs__msg__SensorStatArray__Sequence__destroy(sdv_localization_msgs__msg__SensorStatArray__Sequence * array);

/// Check for msg/SensorStatArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
bool
sdv_localization_msgs__msg__SensorStatArray__Sequence__are_equal(const sdv_localization_msgs__msg__SensorStatArray__Sequence * lhs, const sdv_localization_msgs__msg__SensorStatArray__Sequence * rhs);

/// Copy an array of msg/SensorStatArray messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdv_localization_msgs
bool
sdv_localization_msgs__msg__SensorStatArray__Sequence__copy(
  const sdv_localization_msgs__msg__SensorStatArray__Sequence * input,
  sdv_localization_msgs__msg__SensorStatArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SDV_LOCALIZATION_MSGS__MSG__DETAIL__SENSOR_STAT_ARRAY__FUNCTIONS_H_
