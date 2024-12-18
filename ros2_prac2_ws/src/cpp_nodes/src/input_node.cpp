#include "input_node.hpp"
#include <iostream>

InputNode::InputNode(const std::string &node_name)
    : Node("input_node")
{
    RCLCPP_INFO(this->get_logger(), "InputNode has started. Base constructor is always called before derived constructor.");
}

void InputNode::get_user_input()
{
    while (rclcpp::ok()) // Loop runs until ROS is shutdown
    {
        std::cout << "Please type a string: ";
        std::getline(std::cin, user_input_); // Read input from the user

        if (user_input_.empty())
        {
            RCLCPP_WARN(this->get_logger(), "You entered an empty string. Try again.");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "You entered: '%s'", user_input_.c_str());
        }
    }
}
