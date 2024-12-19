#ifndef EMPAQUETADO_NODO_HPP
#define EMPAQUETADO_NODO_HPP

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/custom_string.hpp" 

class EmpaquetadoNodo : public rclcpp::Node
{
public:
  EmpaquetadoNodo();

private:
  void topic_callback(const interfaces::msg::CustomString::SharedPtr msg) const;  // CHANGE

  rclcpp::Subscription<interfaces::msg::CustomString>::SharedPtr subscription_;  // CHANGE
};

#endif 
