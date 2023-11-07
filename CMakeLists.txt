cmake_minimum_required(VERSION 3.10)

project(myrepo)

#find_package(glm CONFIG REQUIRED)

add_executable(dummyApp
main.cpp
)

#target_include_directories(dummyApp PUBLIC
#${GLM_INCLUDE_DIR}
#)

#target_link_libraries(dummyApp PRIVATE glm::glm)

