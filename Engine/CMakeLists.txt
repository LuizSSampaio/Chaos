cmake_minimum_required(VERSION 3.27)
project(Engine)

set(CMAKE_CXX_STANDARD 23)

add_library(Engine
        src/Chaos/Application.cpp
        src/Chaos/Application.h
        src/Chaos.h
        src/Chaos/EntryPoint.h
        src/Chaos/Log.cpp
        src/Chaos/Log.h
        src/Chaos/Events/Event.h
        src/Chaos/Core.h
        src/Chaos/Events/ApplicationEvent.h
        src/Chaos/Events/KeyEvent.h
        src/Chaos/Events/MouseEvent.h
        src/chpch.cpp
        src/Chaos/Window.h
        src/Platform/PlatformWindow.cpp
        src/Platform/PlatformWindow.h)

target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/spdlog/include)

add_subdirectory(thirdparty/glfw)
add_subdirectory(thirdparty/glad)

target_link_libraries(Engine PRIVATE glfw glad)

# Add precompiled header
target_precompile_headers(Engine PRIVATE src/chpch.h)