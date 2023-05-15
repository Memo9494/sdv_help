// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sdv_localization_msgs:msg/SensorStatArray.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__struct.h"
#include "sdv_localization_msgs/msg/detail/sensor_stat_array__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool sdv_localization_msgs__msg__sensor_diag__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sdv_localization_msgs__msg__sensor_diag__convert_to_py(void * raw_ros_message);
bool sdv_localization_msgs__msg__sensor_diag__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sdv_localization_msgs__msg__sensor_diag__convert_to_py(void * raw_ros_message);
bool sdv_localization_msgs__msg__sensor_diag__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sdv_localization_msgs__msg__sensor_diag__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sdv_localization_msgs__msg__sensor_stat_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("sdv_localization_msgs.msg._sensor_stat_array.SensorStatArray", full_classname_dest, 60) == 0);
  }
  sdv_localization_msgs__msg__SensorStatArray * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vn_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "vn_status");
    if (!field) {
      return false;
    }
    if (!sdv_localization_msgs__msg__sensor_diag__convert_from_py(field, &ros_message->vn_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_gps_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_gps_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_gps_ready = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_gps_best_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_gps_best_quality");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_gps_best_quality = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vl_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "vl_status");
    if (!field) {
      return false;
    }
    if (!sdv_localization_msgs__msg__sensor_diag__convert_from_py(field, &ros_message->vl_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ms_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ms_status");
    if (!field) {
      return false;
    }
    if (!sdv_localization_msgs__msg__sensor_diag__convert_from_py(field, &ros_message->ms_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sdv_localization_msgs__msg__sensor_stat_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorStatArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sdv_localization_msgs.msg._sensor_stat_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorStatArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sdv_localization_msgs__msg__SensorStatArray * ros_message = (sdv_localization_msgs__msg__SensorStatArray *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vn_status
    PyObject * field = NULL;
    field = sdv_localization_msgs__msg__sensor_diag__convert_to_py(&ros_message->vn_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vn_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_gps_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_gps_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_gps_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_gps_best_quality
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_gps_best_quality ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_gps_best_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vl_status
    PyObject * field = NULL;
    field = sdv_localization_msgs__msg__sensor_diag__convert_to_py(&ros_message->vl_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vl_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ms_status
    PyObject * field = NULL;
    field = sdv_localization_msgs__msg__sensor_diag__convert_to_py(&ros_message->ms_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ms_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
