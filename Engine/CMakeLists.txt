cmake_minimum_required(VERSION 3.27)
project(Engine)

set(CMAKE_CXX_STANDARD 23)

add_library(Engine
        src/Chaos/Application.cpp
        src/Chaos/Application.h
        src/Chaos.h
        src/Chaos/EntryPoint.h
        src/Chaos/Log.cpp
        src/Chaos/Log.h)

target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/spdlog/include)