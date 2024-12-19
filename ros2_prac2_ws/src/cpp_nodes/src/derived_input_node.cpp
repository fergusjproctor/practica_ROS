#include "derived_input_node.hpp"

DerivedInputNode::DerivedInputNode(const std::string &node_name)
    : InputNode(node_name)
{
    RCLCPP_INFO(this->get_logger(), "DerivedNode Initialized");
    get_user_input();
    test_function();
}

/* void DerivedInputNode::get_user_input()
{
    while (rclcpp::ok()) // Loop runs until ROS is shutdown
    {
        std::cout << "Derived Class Brefffff. Please type a string: ";
        std::getline(std::cin, user_input_); // Read input from the user

        if (user_input_.empty())
        {
            RCLCPP_WARN(this->get_logger(), "You entered an empty string breffff . Try again.");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Breff You entered: '%s'", user_input_.c_str());
        }
    }
} */

void DerivedInputNode::test_function()
{
    RCLCPP_INFO(this->get_logger(), "Breffffff");
}