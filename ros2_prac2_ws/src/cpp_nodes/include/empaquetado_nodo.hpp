#ifndef EMPAQUETADO_NODO_HPP
#define EMPAQUETADO_NODO_HPP

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/inf_personal_usuario.hpp" 
#include "std_msgs/msg/string.hpp"
#include "interfaces/msg/posicion.hpp"

class EmpaquetadoNodo : public rclcpp::Node
{
public:
  EmpaquetadoNodo();

private:
  void topic_callback(const interfaces::msg::InfPersonalUsuario::SharedPtr msg) const;  
  void emocion_callback(const std_msgs::msg::String::SharedPtr msg) const;  
  void posicion_callback(const interfaces::msg::Posicion::SharedPtr msg) const;
  rclcpp::Subscription<interfaces::msg::InfPersonalUsuario>::SharedPtr subscription_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_emocion_;
  rclcpp::Subscription<interfaces::msg::Posicion>::SharedPtr subscription_posicion_;
};

#endif 
