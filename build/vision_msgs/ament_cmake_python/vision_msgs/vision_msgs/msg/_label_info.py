# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vision_msgs:msg/LabelInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LabelInfo(type):
    """Metaclass of message 'LabelInfo'."""

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
            module = import_type_support('vision_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vision_msgs.msg.LabelInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__label_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__label_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__label_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__label_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__label_info

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from vision_msgs.msg import VisionClass
            if VisionClass.__class__._TYPE_SUPPORT is None:
                VisionClass.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LabelInfo(metaclass=Metaclass_LabelInfo):
    """Message class 'LabelInfo'."""

    __slots__ = [
        '_header',
        '_class_map',
        '_threshold',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'class_map': 'sequence<vision_msgs/VisionClass>',
        'threshold': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['vision_msgs', 'msg'], 'VisionClass')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.class_map = kwargs.get('class_map', [])
        self.threshold = kwargs.get('threshold', float())

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
        if self.class_map != other.class_map:
            return False
        if self.threshold != other.threshold:
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
    def class_map(self):
        """Message field 'class_map'."""
        return self._class_map

    @class_map.setter
    def class_map(self, value):
        if __debug__:
            from vision_msgs.msg import VisionClass
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, VisionClass) for v in value) and
                 True), \
                "The 'class_map' field must be a set or sequence and each value of type 'VisionClass'"
        self._class_map = value

    @builtins.property
    def threshold(self):
        """Message field 'threshold'."""
        return self._threshold

    @threshold.setter
    def threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'threshold' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'threshold' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._threshold = value
