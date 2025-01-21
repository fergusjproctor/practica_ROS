#ifndef EMOCION_USUARIO_NODO_HPP
#define EMOCION_USUARIO_NODO_HPP

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

#include <string>
#include <vector>
#include <chrono>
#include <memory>

class EmocionUsuarioNodo : public rclcpp::Node
{
public:
    explicit EmocionUsuarioNodo(const std::string &node_name);
    virtual void get_user_input();
private:
    std::string emocion_;
    std::vector<std::string> prompts_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};

#endif
