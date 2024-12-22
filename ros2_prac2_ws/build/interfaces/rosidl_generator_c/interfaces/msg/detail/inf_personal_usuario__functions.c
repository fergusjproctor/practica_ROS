// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/InfPersonalUsuario.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/inf_personal_usuario__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nombre`
// Member `idiomas`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__InfPersonalUsuario__init(interfaces__msg__InfPersonalUsuario * msg)
{
  if (!msg) {
    return false;
  }
  // nombre
  if (!rosidl_runtime_c__String__init(&msg->nombre)) {
    interfaces__msg__InfPersonalUsuario__fini(msg);
    return false;
  }
  // edad
  // idiomas
  if (!rosidl_runtime_c__String__Sequence__init(&msg->idiomas, 0)) {
    interfaces__msg__InfPersonalUsuario__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__InfPersonalUsuario__fini(interfaces__msg__InfPersonalUsuario * msg)
{
  if (!msg) {
    return;
  }
  // nombre
  rosidl_runtime_c__String__fini(&msg->nombre);
  // edad
  // idiomas
  rosidl_runtime_c__String__Sequence__fini(&msg->idiomas);
}

bool
interfaces__msg__InfPersonalUsuario__are_equal(const interfaces__msg__InfPersonalUsuario * lhs, const interfaces__msg__InfPersonalUsuario * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nombre
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nombre), &(rhs->nombre)))
  {
    return false;
  }
  // edad
  if (lhs->edad != rhs->edad) {
    return false;
  }
  // idiomas
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->idiomas), &(rhs->idiomas)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__InfPersonalUsuario__copy(
  const interfaces__msg__InfPersonalUsuario * input,
  interfaces__msg__InfPersonalUsuario * output)
{
  if (!input || !output) {
    return false;
  }
  // nombre
  if (!rosidl_runtime_c__String__copy(
      &(input->nombre), &(output->nombre)))
  {
    return false;
  }
  // edad
  output->edad = input->edad;
  // idiomas
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->idiomas), &(output->idiomas)))
  {
    return false;
  }
  return true;
}

interfaces__msg__InfPersonalUsuario *
interfaces__msg__InfPersonalUsuario__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__InfPersonalUsuario * msg = (interfaces__msg__InfPersonalUsuario *)allocator.allocate(sizeof(interfaces__msg__InfPersonalUsuario), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__InfPersonalUsuario));
  bool success = interfaces__msg__InfPersonalUsuario__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__InfPersonalUsuario__destroy(interfaces__msg__InfPersonalUsuario * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__InfPersonalUsuario__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__InfPersonalUsuario__Sequence__init(interfaces__msg__InfPersonalUsuario__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__InfPersonalUsuario * data = NULL;

  if (size) {
    data = (interfaces__msg__InfPersonalUsuario *)allocator.zero_allocate(size, sizeof(interfaces__msg__InfPersonalUsuario), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__InfPersonalUsuario__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__InfPersonalUsuario__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__InfPersonalUsuario__Sequence__fini(interfaces__msg__InfPersonalUsuario__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__InfPersonalUsuario__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__InfPersonalUsuario__Sequence *
interfaces__msg__InfPersonalUsuario__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__InfPersonalUsuario__Sequence * array = (interfaces__msg__InfPersonalUsuario__Sequence *)allocator.allocate(sizeof(interfaces__msg__InfPersonalUsuario__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__InfPersonalUsuario__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__InfPersonalUsuario__Sequence__destroy(interfaces__msg__InfPersonalUsuario__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__InfPersonalUsuario__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__InfPersonalUsuario__Sequence__are_equal(const interfaces__msg__InfPersonalUsuario__Sequence * lhs, const interfaces__msg__InfPersonalUsuario__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__InfPersonalUsuario__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__InfPersonalUsuario__Sequence__copy(
  const interfaces__msg__InfPersonalUsuario__Sequence * input,
  interfaces__msg__InfPersonalUsuario__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__InfPersonalUsuario);
    interfaces__msg__InfPersonalUsuario * data =
      (interfaces__msg__InfPersonalUsuario *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__InfPersonalUsuario__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__InfPersonalUsuario__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__InfPersonalUsuario__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
