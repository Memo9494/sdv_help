# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sdv_localization_msgs:msg/SensorDiag.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorDiag(type):
    """Metaclass of message 'SensorDiag'."""

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
                'sdv_localization_msgs.msg.SensorDiag')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_diag
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_diag
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_diag
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_diag
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_diag

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorDiag(metaclass=Metaclass_SensorDiag):
    """Message class 'SensorDiag'."""

    __slots__ = [
        '_is_enabled',
        '_is_publishing',
        '_is_changing',
    ]

    _fields_and_field_types = {
        'is_enabled': 'boolean',
        'is_publishing': 'boolean',
        'is_changing': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_enabled = kwargs.get('is_enabled', bool())
        self.is_publishing = kwargs.get('is_publishing', bool())
        self.is_changing = kwargs.get('is_changing', bool())

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
        if self.is_enabled != other.is_enabled:
            return False
        if self.is_publishing != other.is_publishing:
            return False
        if self.is_changing != other.is_changing:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_enabled(self):
        """Message field 'is_enabled'."""
        return self._is_enabled

    @is_enabled.setter
    def is_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_enabled' field must be of type 'bool'"
        self._is_enabled = value

    @builtins.property
    def is_publishing(self):
        """Message field 'is_publishing'."""
        return self._is_publishing

    @is_publishing.setter
    def is_publishing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_publishing' field must be of type 'bool'"
        self._is_publishing = value

    @builtins.property
    def is_changing(self):
        """Message field 'is_changing'."""
        return self._is_changing

    @is_changing.setter
    def is_changing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_changing' field must be of type 'bool'"
        self._is_changing = value
