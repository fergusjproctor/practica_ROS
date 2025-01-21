#include "posicion_usuario_nodo.hpp"
#include <iostream>

using namespace std::chrono_literals;

PosicionUsuarioNodo::PosicionUsuarioNodo(const std::string &node_name)
    : Node("input_node")
{
    RCLCPP_INFO(this->get_logger(), "PosicionUsuarioNodo has started. ");
    publisher_ = this->create_publisher<interfaces::msg::Posicion>("topic_Posicion", 10);
    // define vector of strings, three elements
    prompts_ = {"Cual es la posicion actual en x,y,z? "};
    get_user_input();
}

void PosicionUsuarioNodo::get_user_input()
{
    interfaces::msg::Posicion message = interfaces::msg::Posicion();
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
            // Split user input string into x, y, z integers
            std::vector<int> posiciones;
            std::string posicion;
            std::istringstream iss(user_input_);
            while (std::getline(iss, posicion, ' '))
            {
                posiciones.push_back(std::stoi(posicion));
            }
            message.x = posiciones[0];
            message.y = posiciones[1];
            message.z = posiciones[2];

            RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", posicion.c_str());
            publisher_->publish(message);
        };
        
    }
}

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PosicionUsuarioNodo>("PosicionUsuarioNodo"));
  rclcpp::shutdown();
  return 0;
}