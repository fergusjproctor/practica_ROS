#include "derived_node.hpp"

DerivedNode::DerivedNode(const std::string &node_name)
    : BaseNode(node_name)
{
    RCLCPP_INFO(this->get_logger(), "DerivedNode '%s' initialized", node_name.c_str());
}

void DerivedNode::custom_behavior()
{
    RCLCPP_INFO(this->get_logger(), "DerivedNode custom behavior executed");
}