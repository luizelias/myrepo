cmake_minimum_required(VERSION 3.12.3)
project(YourProjectName)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find packages
find_package(nlohmann_json CONFIG REQUIRED)
find_package(Eigen3 CONFIG REQUIRED)
find_package(Alembic CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(asio CONFIG REQUIRED)

message(STATUS "Alembic include dirs: ${Alembic_INCLUDE_DIRS}")
message(STATUS "Found Alembic: ${Alembic_FOUND}")

# Add your source files
add_executable(HelloWorld main.cpp)

# Link libraries
target_link_libraries(HelloWorld PRIVATE 
nlohmann_json::nlohmann_json
Eigen3::Eigen 
Alembic::Alembic 
fmt::fmt 
glfw 
glad::glad 
asio::asio)
