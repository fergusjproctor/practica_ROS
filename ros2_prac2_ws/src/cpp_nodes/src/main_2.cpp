#include "informacion_personal_nodo.hpp"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<InformacionPersonalNodo>("FergNode");
     // Print the type of `node`
    std::cout << "Type of 'node': " << typeid(node).name() << std::endl;
    rclcpp::spin(node); // Keeps the node alive
    rclcpp::shutdown();
    return 0;
}
