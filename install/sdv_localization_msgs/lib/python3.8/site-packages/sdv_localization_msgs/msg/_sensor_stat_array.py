# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sdv_localization_msgs:msg/SensorStatArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorStatArray(type):
    """Metaclass of message 'SensorStatArray'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sdv_localization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sdv_localization_msgs.msg.SensorStatArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_stat_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_stat_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_stat_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_stat_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_stat_array

            from sdv_localization_msgs.msg import SensorDiag
            if SensorDiag.__class__._TYPE_SUPPORT is None:
                SensorDiag.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorStatArray(metaclass=Metaclass_SensorStatArray):
    """Message class 'SensorStatArray'."""

    __slots__ = [
        '_header',
        '_vn_status',
        '_is_gps_ready',
        '_is_gps_best_quality',
        '_vl_status',
        '_ms_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vn_status': 'sdv_localization_msgs/SensorDiag',
        'is_gps_ready': 'boolean',
        'is_gps_best_quality': 'boolean',
        'vl_status': 'sdv_localization_msgs/SensorDiag',
        'ms_status': 'sdv_localization_msgs/SensorDiag',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sdv_localization_msgs', 'msg'], 'SensorDiag'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sdv_localization_msgs', 'msg'], 'SensorDiag'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sdv_localization_msgs', 'msg'], 'SensorDiag'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sdv_localization_msgs.msg import SensorDiag
        self.vn_status = kwargs.get('vn_status', SensorDiag())
        self.is_gps_ready = kwargs.get('is_gps_ready', bool())
        self.is_gps_best_quality = kwargs.get('is_gps_best_quality', bool())
        from sdv_localization_msgs.msg import SensorDiag
        self.vl_status = kwargs.get('vl_status', SensorDiag())
        from sdv_localization_msgs.msg import SensorDiag
        self.ms_status = kwargs.get('ms_status', SensorDiag())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.vn_status != other.vn_status:
            return False
        if self.is_gps_ready != other.is_gps_ready:
            return False
        if self.is_gps_best_quality != other.is_gps_best_quality:
            return False
        if self.vl_status != other.vl_status:
            return False
        if self.ms_status != other.ms_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def vn_status(self):
        """Message field 'vn_status'."""
        return self._vn_status

    @vn_status.setter
    def vn_status(self, value):
        if __debug__:
            from sdv_localization_msgs.msg import SensorDiag
            assert \
                isinstance(value, SensorDiag), \
                "The 'vn_status' field must be a sub message of type 'SensorDiag'"
        self._vn_status = value

    @builtins.property
    def is_gps_ready(self):
        """Message field 'is_gps_ready'."""
        return self._is_gps_ready

    @is_gps_ready.setter
    def is_gps_ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_gps_ready' field must be of type 'bool'"
        self._is_gps_ready = value

    @builtins.property
    def is_gps_best_quality(self):
        """Message field 'is_gps_best_quality'."""
        return self._is_gps_best_quality

    @is_gps_best_quality.setter
    def is_gps_best_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_gps_best_quality' field must be of type 'bool'"
        self._is_gps_best_quality = value

    @builtins.property
    def vl_status(self):
        """Message field 'vl_status'."""
        return self._vl_status

    @vl_status.setter
    def vl_status(self, value):
        if __debug__:
            from sdv_localization_msgs.msg import SensorDiag
            assert \
                isinstance(value, SensorDiag), \
                "The 'vl_status' field must be a sub message of type 'SensorDiag'"
        self._vl_status = value

    @builtins.property
    def ms_status(self):
        """Message field 'ms_status'."""
        return self._ms_status

    @ms_status.setter
    def ms_status(self, value):
        if __debug__:
            from sdv_localization_msgs.msg import SensorDiag
            assert \
                isinstance(value, SensorDiag), \
                "The 'ms_status' field must be a sub message of type 'SensorDiag'"
        self._ms_status = value
