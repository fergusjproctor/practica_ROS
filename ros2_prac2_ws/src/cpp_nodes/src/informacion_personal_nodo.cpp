#include "informacion_personal_nodo.hpp"
#include <iostream>

using namespace std::chrono_literals;

InformacionPersonalNodo::InformacionPersonalNodo(const std::string &node_name)
    : Node("input_node")
{
    RCLCPP_INFO(this->get_logger(), "InformacionPersonalNodo has started. Base constructor is always called before derived constructor.");
    publisher_ = this->create_publisher<interfaces::msg::InfPersonalUsuario>("topic", 10);
    //timer_ = this->create_wall_timer(
    //500ms, std::bind(&InformacionPersonalNodo::timer_callback, this));
    get_user_input();
}

void InformacionPersonalNodo::get_user_input()
{
    while (rclcpp::ok()) // Loop runs until ROS is shutdown
    {
        std::cout << "Please type a string: ";
        std::getline(std::cin, nombre_; // Read input from the user

        if (user_input_.empty())
        {
            RCLCPP_WARN(this->get_logger(), "You entered an empty string. Try again.");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "You entered: '%s'", user_input_.c_str());
            timer_callback();
        };
        std::string input_str;
        std::cout << "Please type an age: ";
        std::getline(std::cin, input_str); // Read input from the user
        edad_ = std::stoi(input_str);
        RCLCPP_INFO(this->get_logger(), "You entered: '%d'", edad_);
        
    }
}

void InformacionPersonalNodo::timer_callback()
{
  auto message = interfaces::msg::InfPersonalUsuario();
  message.data = user_input_;
  RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
  publisher_->publish(message);
}