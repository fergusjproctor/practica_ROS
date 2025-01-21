#ifndef POSICION_USUARIO_NODO_HPP
#define POSICION_USUARIO_NODO_HPP

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include "interfaces/msg/posicion.hpp"

#include <string>
#include <vector>
#include <chrono>
#include <memory>

class PosicionUsuarioNodo : public rclcpp::Node
{
public:
    explicit PosicionUsuarioNodo(const std::string &node_name);
    virtual void get_user_input();
private:
    std::string posicion_;
    std::vector<std::string> prompts_;
    rclcpp::Publisher<interfaces::msg::Posicion>::SharedPtr publisher_;
};

#endif
