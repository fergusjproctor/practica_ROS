// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/InfPersonalUsuario.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__BUILDER_HPP_

#include "interfaces/msg/detail/inf_personal_usuario__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_InfPersonalUsuario_idiomas
{
public:
  explicit Init_InfPersonalUsuario_idiomas(::interfaces::msg::InfPersonalUsuario & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::InfPersonalUsuario idiomas(::interfaces::msg::InfPersonalUsuario::_idiomas_type arg)
  {
    msg_.idiomas = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::InfPersonalUsuario msg_;
};

class Init_InfPersonalUsuario_edad
{
public:
  explicit Init_InfPersonalUsuario_edad(::interfaces::msg::InfPersonalUsuario & msg)
  : msg_(msg)
  {}
  Init_InfPersonalUsuario_idiomas edad(::interfaces::msg::InfPersonalUsuario::_edad_type arg)
  {
    msg_.edad = std::move(arg);
    return Init_InfPersonalUsuario_idiomas(msg_);
  }

private:
  ::interfaces::msg::InfPersonalUsuario msg_;
};

class Init_InfPersonalUsuario_nombre
{
public:
  Init_InfPersonalUsuario_nombre()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfPersonalUsuario_edad nombre(::interfaces::msg::InfPersonalUsuario::_nombre_type arg)
  {
    msg_.nombre = std::move(arg);
    return Init_InfPersonalUsuario_edad(msg_);
  }

private:
  ::interfaces::msg::InfPersonalUsuario msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::InfPersonalUsuario>()
{
  return interfaces::msg::builder::Init_InfPersonalUsuario_nombre();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__BUILDER_HPP_
