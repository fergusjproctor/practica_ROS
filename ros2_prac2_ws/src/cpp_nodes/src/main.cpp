#include "derived_node.hpp"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    // Create an instance of the derived node
    auto node = std::make_shared<DerivedNode>("my_derived_node");

    // Call the custom behavior method
    node->custom_behavior();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}