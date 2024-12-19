#include "empaquetado_nodo.hpp"

using std::placeholders::_1;

EmpaquetadoNodo::EmpaquetadoNodo()
: Node("empaquetado_nodo")
{
  subscription_ = this->create_subscription<interfaces::msg::CustomString>(  // CHANGE
    "topic", 10, std::bind(&EmpaquetadoNodo::topic_callback, this, _1));
}

void EmpaquetadoNodo::topic_callback(const interfaces::msg::CustomString::SharedPtr msg) const  // CHANGE
{
  RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());  // CHANGE
}


int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<EmpaquetadoNodo>());
  rclcpp::shutdown();
  return 0;
}
