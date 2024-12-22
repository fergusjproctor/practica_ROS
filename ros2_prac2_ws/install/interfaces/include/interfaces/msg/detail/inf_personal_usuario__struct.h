// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/InfPersonalUsuario.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nombre'
// Member 'idiomas'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/InfPersonalUsuario in the package interfaces.
typedef struct interfaces__msg__InfPersonalUsuario
{
  rosidl_runtime_c__String nombre;
  int64_t edad;
  rosidl_runtime_c__String__Sequence idiomas;
} interfaces__msg__InfPersonalUsuario;

// Struct for a sequence of interfaces__msg__InfPersonalUsuario.
typedef struct interfaces__msg__InfPersonalUsuario__Sequence
{
  interfaces__msg__InfPersonalUsuario * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__InfPersonalUsuario__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__STRUCT_H_
