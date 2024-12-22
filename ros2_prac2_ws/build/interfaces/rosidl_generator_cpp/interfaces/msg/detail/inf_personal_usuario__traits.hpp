// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/InfPersonalUsuario.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__TRAITS_HPP_

#include "interfaces/msg/detail/inf_personal_usuario__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::msg::InfPersonalUsuario>()
{
  return "interfaces::msg::InfPersonalUsuario";
}

template<>
inline const char * name<interfaces::msg::InfPersonalUsuario>()
{
  return "interfaces/msg/InfPersonalUsuario";
}

template<>
struct has_fixed_size<interfaces::msg::InfPersonalUsuario>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::InfPersonalUsuario>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::InfPersonalUsuario>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__TRAITS_HPP_
