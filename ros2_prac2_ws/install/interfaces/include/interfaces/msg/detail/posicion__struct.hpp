// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/Posicion.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POSICION__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__POSICION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__Posicion __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__Posicion __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Posicion_
{
  using Type = Posicion_<ContainerAllocator>;

  explicit Posicion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->z = 0ll;
    }
  }

  explicit Posicion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->z = 0ll;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;
  using _z_type =
    int64_t;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const int64_t & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::Posicion_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::Posicion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::Posicion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::Posicion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Posicion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Posicion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Posicion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Posicion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::Posicion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::Posicion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__Posicion
    std::shared_ptr<interfaces::msg::Posicion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__Posicion
    std::shared_ptr<interfaces::msg::Posicion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Posicion_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Posicion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Posicion_

// alias to use template instance with default allocator
using Posicion =
  interfaces::msg::Posicion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POSICION__STRUCT_HPP_
