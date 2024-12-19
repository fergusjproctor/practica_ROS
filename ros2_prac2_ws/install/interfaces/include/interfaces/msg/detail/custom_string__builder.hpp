// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CUSTOM_STRING__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__CUSTOM_STRING__BUILDER_HPP_

#include "interfaces/msg/detail/custom_string__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_CustomString_data
{
public:
  Init_CustomString_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::CustomString data(::interfaces::msg::CustomString::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::CustomString msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::CustomString>()
{
  return interfaces::msg::builder::Init_CustomString_data();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CUSTOM_STRING__BUILDER_HPP_
