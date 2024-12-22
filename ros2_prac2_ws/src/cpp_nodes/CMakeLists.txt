cmake_minimum_required(VERSION 3.5)
project(cpp_nodes)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(interfaces REQUIRED)

add_executable(main_node 
    src/main_2.cpp
    src/informacion_personal_nodo.cpp
)

add_executable(empaquetado_nodo 
    src/empaquetado_nodo.cpp
)

target_include_directories(main_node  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(empaquetado_nodo PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)


ament_target_dependencies(main_node rclcpp interfaces)
ament_target_dependencies(empaquetado_nodo rclcpp interfaces)

install(
  DIRECTORY include/
  DESTINATION include
)


install(TARGETS main_node DESTINATION lib/${PROJECT_NAME})
ament_export_include_directories(
  include
)

install(TARGETS empaquetado_nodo DESTINATION lib/${PROJECT_NAME})
ament_export_include_directories(
  include
)


ament_package()