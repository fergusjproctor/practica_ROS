#include "emocion_usuario_nodo.hpp"
#include <iostream>

using namespace std::chrono_literals;

EmocionUsuarioNodo::EmocionUsuarioNodo(const std::string &node_name)
    : Node("input_node")
{
    RCLCPP_INFO(this->get_logger(), "EmocionUsuarioNodo has started. ");
    publisher_ = this->create_publisher<std_msgs::msg::String>("topic_emocion", 10);
    // define vector of strings, three elements
    prompts_ = {"Como se siente?"};
    get_user_input();
}

void EmocionUsuarioNodo::get_user_input()
{
    std_msgs::msg::String message = std_msgs::msg::String();
    while (rclcpp::ok()) // Loop runs until ROS is shutdown
    {
        std::string user_input_;
        std::cout << prompts_[0] << std::endl;
        std::getline(std::cin, user_input_); 
        // Read input from the user
        if (user_input_.empty())
        {
            RCLCPP_WARN(this->get_logger(), "You entered an empty string. Try again.");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "You entered: '%s'", user_input_.c_str());
            message.data = user_input_;
            RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
            publisher_->publish(message);
        };
        
    }
}

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<EmocionUsuarioNodo>("EmocionUsuarioNodo"));
  rclcpp::shutdown();
  return 0;
}