#include "informacion_personal_nodo.hpp"
#include <iostream>

using namespace std::chrono_literals;

InformacionPersonalNodo::InformacionPersonalNodo(const std::string &node_name)
    : Node("input_node")
{
    RCLCPP_INFO(this->get_logger(), "InformacionPersonalNodo has started.");
    publisher_ = this->create_publisher<interfaces::msg::InfPersonalUsuario>("topic", 10);
    // define vector of strings, three elements
    prompts_ = {"Como se llama?", "Que edad tiene?", "Que idiomas habla?"};
    //timer_ = this->create_wall_timer(
    //500ms, std::bind(&InformacionPersonalNodo::timer_callback, this));
    get_user_input();
}

void InformacionPersonalNodo::get_user_input()
{
    interfaces::msg::InfPersonalUsuario message = interfaces::msg::InfPersonalUsuario();
    // define counter which keeps track of which part of message 
    int counter = 0;
    while (rclcpp::ok()) // Loop runs until ROS is shutdown
    {
        std::string user_input_;
        std::cout << prompts_[counter % 3] << std::endl;
        std::getline(std::cin, user_input_); 
        // Read input from the user
        if (user_input_.empty())
        {
            RCLCPP_WARN(this->get_logger(), "You entered an empty string. Try again.");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "You entered: '%s'", user_input_.c_str());
            message.nombre = user_input_;
        };
        // modulo operator, every 1st of three iterations print 'a'
        std::cout << counter % 3 << std::endl;
        if (counter % 3 == 0)
        {
            message.nombre = user_input_;
        }
        else if (counter % 3 == 1)
        {
            message.edad = std::stoi(user_input_);
        }
        else if (counter % 3 == 2)
        {
            std::vector<std::string> idiomas;
            std::string idioma;
            std::istringstream iss(user_input_);
            while (std::getline(iss, idioma, ' '))
            {
                idiomas.push_back(idioma);
            }
            message.idiomas = idiomas;
            RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.nombre.c_str());
            publisher_->publish(message);
        }
        counter += 1;

        
    }
}



int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<InformacionPersonalNodo>("InformacionPersonalNodo"));
  rclcpp::shutdown();
  return 0;
}