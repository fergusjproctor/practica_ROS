#ifndef BASE_NODE_HPP
#define BASE_NODE_HPP

#include <rclcpp/rclcpp.hpp>

class BaseNode : public rclcpp::Node
{
public:
    explicit BaseNode(const std::string &node_name);
    virtual ~BaseNode() = default;

    virtual void custom_behavior(); // A virtual method to be overridden
};

#endif // BASE_NODE_HPP