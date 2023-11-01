cmake_minimum_required(VERSION 3.20)

project(myrepo)


# Check if vcpkg is installed (local windows machine)
if(EXISTS "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")
    set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")
endif()

find_package(glm CONFIG REQUIRED) # still doesnt work

add_executable(dummyApp
main.cpp
)

target_include_directories(dummyApp PUBLIC
${GLM_INCLUDE_DIR}
)

target_link_libraries(dummyApp PRIVATE glm::glm)

