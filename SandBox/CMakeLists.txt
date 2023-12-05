cmake_minimum_required(VERSION 3.27)
project(SandBox)

set(CMAKE_CXX_STANDARD 23)

set(SAND_BOX_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(../Engine ${SAND_BOX_BINARY_DIR}/Engine)

add_executable(SandBox src/Application.cpp)

target_link_libraries(SandBox Engine)
