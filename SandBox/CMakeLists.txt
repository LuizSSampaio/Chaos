cmake_minimum_required(VERSION 3.27)
project(SandBox)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(Engine)

add_executable(SandBox src/Application.cpp)

target_link_libraries(SandBox Engine)
