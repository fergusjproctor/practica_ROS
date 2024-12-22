// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/InfPersonalUsuario.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/inf_personal_usuario__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces/msg/detail/inf_personal_usuario__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_serialize(
  const interfaces::msg::InfPersonalUsuario & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nombre
  cdr << ros_message.nombre;
  // Member: edad
  cdr << ros_message.edad;
  // Member: idiomas
  {
    cdr << ros_message.idiomas;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces::msg::InfPersonalUsuario & ros_message)
{
  // Member: nombre
  cdr >> ros_message.nombre;

  // Member: edad
  cdr >> ros_message.edad;

  // Member: idiomas
  {
    cdr >> ros_message.idiomas;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
get_serialized_size(
  const interfaces::msg::InfPersonalUsuario & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nombre
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.nombre.size() + 1);
  // Member: edad
  {
    size_t item_size = sizeof(ros_message.edad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: idiomas
  {
    size_t array_size = ros_message.idiomas.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.idiomas[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
max_serialized_size_InfPersonalUsuario(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: nombre
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: edad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: idiomas
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _InfPersonalUsuario__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces::msg::InfPersonalUsuario *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InfPersonalUsuario__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces::msg::InfPersonalUsuario *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InfPersonalUsuario__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces::msg::InfPersonalUsuario *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InfPersonalUsuario__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_InfPersonalUsuario(full_bounded, 0);
}

static message_type_support_callbacks_t _InfPersonalUsuario__callbacks = {
  "interfaces::msg",
  "InfPersonalUsuario",
  _InfPersonalUsuario__cdr_serialize,
  _InfPersonalUsuario__cdr_deserialize,
  _InfPersonalUsuario__get_serialized_size,
  _InfPersonalUsuario__max_serialized_size
};

static rosidl_message_type_support_t _InfPersonalUsuario__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InfPersonalUsuario__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::InfPersonalUsuario>()
{
  return &interfaces::msg::typesupport_fastrtps_cpp::_InfPersonalUsuario__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, msg, InfPersonalUsuario)() {
  return &interfaces::msg::typesupport_fastrtps_cpp::_InfPersonalUsuario__handle;
}

#ifdef __cplusplus
}
#endif
