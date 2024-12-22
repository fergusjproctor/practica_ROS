// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/InfPersonalUsuario.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__InfPersonalUsuario __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__InfPersonalUsuario __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InfPersonalUsuario_
{
  using Type = InfPersonalUsuario_<ContainerAllocator>;

  explicit InfPersonalUsuario_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nombre = "";
      this->edad = 0ll;
    }
  }

  explicit InfPersonalUsuario_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nombre(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nombre = "";
      this->edad = 0ll;
    }
  }

  // field types and members
  using _nombre_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _nombre_type nombre;
  using _edad_type =
    int64_t;
  _edad_type edad;
  using _idiomas_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _idiomas_type idiomas;

  // setters for named parameter idiom
  Type & set__nombre(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->nombre = _arg;
    return *this;
  }
  Type & set__edad(
    const int64_t & _arg)
  {
    this->edad = _arg;
    return *this;
  }
  Type & set__idiomas(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->idiomas = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::InfPersonalUsuario_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::InfPersonalUsuario_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::InfPersonalUsuario_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::InfPersonalUsuario_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::InfPersonalUsuario_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::InfPersonalUsuario_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::InfPersonalUsuario_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::InfPersonalUsuario_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::InfPersonalUsuario_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::InfPersonalUsuario_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__InfPersonalUsuario
    std::shared_ptr<interfaces::msg::InfPersonalUsuario_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__InfPersonalUsuario
    std::shared_ptr<interfaces::msg::InfPersonalUsuario_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfPersonalUsuario_ & other) const
  {
    if (this->nombre != other.nombre) {
      return false;
    }
    if (this->edad != other.edad) {
      return false;
    }
    if (this->idiomas != other.idiomas) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfPersonalUsuario_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfPersonalUsuario_

// alias to use template instance with default allocator
using InfPersonalUsuario =
  interfaces::msg::InfPersonalUsuario_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__INF_PERSONAL_USUARIO__STRUCT_HPP_
