#ifndef INPUT_NODE_HPP
#define INPUT_NODE_HPP

#include <rclcpp/rclcpp.hpp>
#include <string>
#include <chrono>
#include <memory>
#include "interfaces/msg/custom_string.hpp"

class InputNode : public rclcpp::Node
{
public:
    explicit InputNode(const std::string &node_name);
    virtual void get_user_input();
private:
    void timer_callback();

    std::string user_input_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<interfaces::msg::CustomString>::SharedPtr publisher_;
    size_t count_;
};

#endif // INPUT_NODE_HPP
