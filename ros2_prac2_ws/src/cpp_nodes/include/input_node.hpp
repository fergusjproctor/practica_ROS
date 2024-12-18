#ifndef INPUT_NODE_HPP
#define INPUT_NODE_HPP

#include <rclcpp/rclcpp.hpp>
#include <string>

class InputNode : public rclcpp::Node
{
public:
    explicit InputNode(const std::string &node_name);
    virtual void get_user_input();
private:
    
    std::string user_input_;
};

#endif // INPUT_NODE_HPP
