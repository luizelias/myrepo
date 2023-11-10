cmake_minimum_required(VERSION 3.12.3)
project(YourProjectName)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include vcpkg toolchain for dependencies
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake)

# Find packages
find_package(nlohmann_json CONFIG REQUIRED)
find_package(Eigen3 CONFIG REQUIRED)
find_package(Alembic CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(Asio CONFIG REQUIRED)

# Add your source files
add_executable(YourProject main.cpp)

# Link libraries
target_link_libraries(YourProject PRIVATE nlohmann_json nlohmann_json::nlohmann_json Eigen3::Eigen Alembic::Alembic glm fmt::fmt glfw glad::glad Asio::Asio)
