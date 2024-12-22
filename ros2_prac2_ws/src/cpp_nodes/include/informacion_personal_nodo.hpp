#ifndef INFORMACION_PERSONAL_NODO_HPP
#define INFORMACION_PERSONAL_NODO_HPP

#include <rclcpp/rclcpp.hpp>
#include <string>
#include <vector>
#include <chrono>
#include <memory>
#include "interfaces/msg/inf_personal_usuario.hpp"

class InformacionPersonalNodo : public rclcpp::Node
{
public:
    explicit InformacionPersonalNodo(const std::string &node_name);
    virtual void get_user_input();
private:
    void timer_callback();

    std::string nombre_;
    int edad_;
    std::vector<std::string> idiomas_;

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<interfaces::msg::InfPersonalUsuario>::SharedPtr publisher_;
    size_t count_;
};

#endif // INPUT_NODE_HPP
