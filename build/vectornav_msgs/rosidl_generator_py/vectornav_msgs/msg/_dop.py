# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vectornav_msgs:msg/DOP.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DOP(type):
    """Metaclass of message 'DOP'."""

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
            module = import_type_support('vectornav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vectornav_msgs.msg.DOP')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dop
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dop
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dop
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dop
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dop

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DOP(metaclass=Metaclass_DOP):
    """Message class 'DOP'."""

    __slots__ = [
        '_g',
        '_p',
        '_t',
        '_v',
        '_h',
        '_n',
        '_e',
    ]

    _fields_and_field_types = {
        'g': 'float',
        'p': 'float',
        't': 'float',
        'v': 'float',
        'h': 'float',
        'n': 'float',
        'e': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.g = kwargs.get('g', float())
        self.p = kwargs.get('p', float())
        self.t = kwargs.get('t', float())
        self.v = kwargs.get('v', float())
        self.h = kwargs.get('h', float())
        self.n = kwargs.get('n', float())
        self.e = kwargs.get('e', float())

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
        if self.g != other.g:
            return False
        if self.p != other.p:
            return False
        if self.t != other.t:
            return False
        if self.v != other.v:
            return False
        if self.h != other.h:
            return False
        if self.n != other.n:
            return False
        if self.e != other.e:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def g(self):
        """Message field 'g'."""
        return self._g

    @g.setter
    def g(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'g' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'g' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._g = value

    @builtins.property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'p' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._p = value

    @builtins.property
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 't' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._t = value

    @builtins.property
    def v(self):
        """Message field 'v'."""
        return self._v

    @v.setter
    def v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'v' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._v = value

    @builtins.property
    def h(self):
        """Message field 'h'."""
        return self._h

    @h.setter
    def h(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'h' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._h = value

    @builtins.property
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'n' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'n' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._n = value

    @builtins.property
    def e(self):
        """Message field 'e'."""
        return self._e

    @e.setter
    def e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'e' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'e' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._e = value
