#include "base_node.hpp"
#include <iostream>

BaseNode::BaseNode(const std::string &node_name)
    : Node(node_name)
{
    RCLCPP_INFO(this->get_logger(), "BaseNode '%s' initialized", node_name.c_str());
}

void BaseNode::custom_behavior()
{
    RCLCPP_INFO(this->get_logger(), "BaseNode default behavior executed");
}