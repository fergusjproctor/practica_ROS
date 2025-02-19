# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/InfPersonalUsuario.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InfPersonalUsuario(type):
    """Metaclass of message 'InfPersonalUsuario'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.InfPersonalUsuario')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__inf_personal_usuario
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__inf_personal_usuario
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__inf_personal_usuario
            cls._TYPE_SUPPORT = module.type_support_msg__msg__inf_personal_usuario
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__inf_personal_usuario

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InfPersonalUsuario(metaclass=Metaclass_InfPersonalUsuario):
    """Message class 'InfPersonalUsuario'."""

    __slots__ = [
        '_nombre',
        '_edad',
        '_idiomas',
    ]

    _fields_and_field_types = {
        'nombre': 'string',
        'edad': 'int64',
        'idiomas': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.nombre = kwargs.get('nombre', str())
        self.edad = kwargs.get('edad', int())
        self.idiomas = kwargs.get('idiomas', [])

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
        if self.nombre != other.nombre:
            return False
        if self.edad != other.edad:
            return False
        if self.idiomas != other.idiomas:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def nombre(self):
        """Message field 'nombre'."""
        return self._nombre

    @nombre.setter
    def nombre(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'nombre' field must be of type 'str'"
        self._nombre = value

    @property
    def edad(self):
        """Message field 'edad'."""
        return self._edad

    @edad.setter
    def edad(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'edad' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'edad' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._edad = value

    @property
    def idiomas(self):
        """Message field 'idiomas'."""
        return self._idiomas

    @idiomas.setter
    def idiomas(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'idiomas' field must be a set or sequence and each value of type 'str'"
        self._idiomas = value
