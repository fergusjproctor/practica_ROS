cmake_minimum_required(VERSION 3.5)
project(cpp_nodes)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(interfaces REQUIRED)
find_package(std_msgs REQUIRED)


add_executable(informacion_personal_nodo
    src/informacion_personal_nodo.cpp
)

add_executable(empaquetado_nodo 
    src/empaquetado_nodo.cpp
)

add_executable(emocion_usuario_nodo
    src/emocion_usuario_nodo.cpp
)

target_include_directories(informacion_personal_nodo PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(empaquetado_nodo PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_include_directories(emocion_usuario_nodo PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)


ament_target_dependencies(informacion_personal_nodo rclcpp interfaces)
ament_target_dependencies(empaquetado_nodo rclcpp interfaces)
ament_target_dependencies(emocion_usuario_nodo rclcpp)

install(
  DIRECTORY include/
  DESTINATION include
)


install(TARGETS informacion_personal_nodo DESTINATION lib/${PROJECT_NAME})
ament_export_include_directories(
  include
)

install(TARGETS empaquetado_nodo DESTINATION lib/${PROJECT_NAME})
ament_export_include_directories(
  include
)

install(TARGETS emocion_usuario_nodo DESTINATION lib/${PROJECT_NAME})
ament_export_include_directories(
  include
)


ament_package()