cmake_minimum_required(VERSION 3.27)
project(Chaos)

set(CMAKE_CXX_STANDARD 23)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_subdirectory(SandBox)
else()
    add_subdirectory(Engine)
endif()