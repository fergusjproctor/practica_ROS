cmake_minimum_required(VERSION 3.5)
project(cpp_nodes)

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(interfaces REQUIRED)
find_package(std_msgs REQUIRED)

# Node executables
add_executable(informacion_personal_nodo src/informacion_personal_nodo.cpp)
add_executable(empaquetado_nodo src/empaquetado_nodo.cpp)
add_executable(emocion_usuario_nodo src/emocion_usuario_nodo.cpp)
add_executable(posicion_usuario_nodo src/posicion_usuario_nodo.cpp)


# Include directories
set(INCLUDE_DIRS
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
target_include_directories(informacion_personal_nodo PUBLIC ${INCLUDE_DIRS})
target_include_directories(empaquetado_nodo PUBLIC ${INCLUDE_DIRS})
target_include_directories(emocion_usuario_nodo PUBLIC ${INCLUDE_DIRS})
target_include_directories(posicion_usuario_nodo PUBLIC ${INCLUDE_DIRS})

# Dependencies for each target
ament_target_dependencies(informacion_personal_nodo rclcpp interfaces)
ament_target_dependencies(empaquetado_nodo rclcpp interfaces)
ament_target_dependencies(emocion_usuario_nodo rclcpp)
ament_target_dependencies(posicion_usuario_nodo rclcpp interfaces)

# Install directives
install(TARGETS
  informacion_personal_nodo
  empaquetado_nodo
  emocion_usuario_nodo
  posicion_usuario_nodo
  DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY include/ DESTINATION include)

# Export include directories and package
ament_export_include_directories(include)
ament_package()
