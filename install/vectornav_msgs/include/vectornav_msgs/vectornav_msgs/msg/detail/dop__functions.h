// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vectornav_msgs:msg/DOP.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__DOP__FUNCTIONS_H_
#define VECTORNAV_MSGS__MSG__DETAIL__DOP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vectornav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vectornav_msgs/msg/detail/dop__struct.h"

/// Initialize msg/DOP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vectornav_msgs__msg__DOP
 * )) before or use
 * vectornav_msgs__msg__DOP__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__DOP__init(vectornav_msgs__msg__DOP * msg);

/// Finalize msg/DOP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__DOP__fini(vectornav_msgs__msg__DOP * msg);

/// Create msg/DOP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vectornav_msgs__msg__DOP__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
vectornav_msgs__msg__DOP *
vectornav_msgs__msg__DOP__create();

/// Destroy msg/DOP message.
/**
 * It calls
 * vectornav_msgs__msg__DOP__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__DOP__destroy(vectornav_msgs__msg__DOP * msg);

/// Check for msg/DOP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__DOP__are_equal(const vectornav_msgs__msg__DOP * lhs, const vectornav_msgs__msg__DOP * rhs);

/// Copy a msg/DOP message.
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
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__DOP__copy(
  const vectornav_msgs__msg__DOP * input,
  vectornav_msgs__msg__DOP * output);

/// Initialize array of msg/DOP messages.
/**
 * It allocates the memory for the number of elements and calls
 * vectornav_msgs__msg__DOP__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__DOP__Sequence__init(vectornav_msgs__msg__DOP__Sequence * array, size_t size);

/// Finalize array of msg/DOP messages.
/**
 * It calls
 * vectornav_msgs__msg__DOP__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__DOP__Sequence__fini(vectornav_msgs__msg__DOP__Sequence * array);

/// Create array of msg/DOP messages.
/**
 * It allocates the memory for the array and calls
 * vectornav_msgs__msg__DOP__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
vectornav_msgs__msg__DOP__Sequence *
vectornav_msgs__msg__DOP__Sequence__create(size_t size);

/// Destroy array of msg/DOP messages.
/**
 * It calls
 * vectornav_msgs__msg__DOP__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__DOP__Sequence__destroy(vectornav_msgs__msg__DOP__Sequence * array);

/// Check for msg/DOP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__DOP__Sequence__are_equal(const vectornav_msgs__msg__DOP__Sequence * lhs, const vectornav_msgs__msg__DOP__Sequence * rhs);

/// Copy an array of msg/DOP messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__DOP__Sequence__copy(
  const vectornav_msgs__msg__DOP__Sequence * input,
  vectornav_msgs__msg__DOP__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VECTORNAV_MSGS__MSG__DETAIL__DOP__FUNCTIONS_H_
