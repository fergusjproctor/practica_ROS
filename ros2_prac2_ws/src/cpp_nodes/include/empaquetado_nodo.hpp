#ifndef EMPAQUETADO_NODO_HPP
#define EMPAQUETADO_NODO_HPP

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/inf_personal_usuario.hpp" 

class EmpaquetadoNodo : public rclcpp::Node
{
public:
  EmpaquetadoNodo();

private:
  void topic_callback(const interfaces::msg::InfPersonalUsuario::SharedPtr msg) const;  // CHANGE

  rclcpp::Subscription<interfaces::msg::InfPersonalUsuario>::SharedPtr subscription_;  // CHANGE
};

#endif 
