cmake_minimum_required(VERSION 3.27)
project(Chaos)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(Engine)

add_executable(Chaos main.cpp)
