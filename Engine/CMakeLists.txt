cmake_minimum_required(VERSION 3.27)
project(Engine)

set(CMAKE_CXX_STANDARD 23)

add_library(Engine
        src/Test.cpp
        src/Test.h)

target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)