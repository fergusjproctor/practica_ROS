// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Posicion.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POSICION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__POSICION__BUILDER_HPP_

#include "interfaces/msg/detail/posicion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Posicion_z
{
public:
  explicit Init_Posicion_z(::interfaces::msg::Posicion & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Posicion z(::interfaces::msg::Posicion::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Posicion msg_;
};

class Init_Posicion_y
{
public:
  explicit Init_Posicion_y(::interfaces::msg::Posicion & msg)
  : msg_(msg)
  {}
  Init_Posicion_z y(::interfaces::msg::Posicion::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Posicion_z(msg_);
  }

private:
  ::interfaces::msg::Posicion msg_;
};

class Init_Posicion_x
{
public:
  Init_Posicion_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Posicion_y x(::interfaces::msg::Posicion::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Posicion_y(msg_);
  }

private:
  ::interfaces::msg::Posicion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Posicion>()
{
  return interfaces::msg::builder::Init_Posicion_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POSICION__BUILDER_HPP_
