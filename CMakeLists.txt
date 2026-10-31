cmake_minimum_required(VERSION 4.0)
project(Breakout LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Breakout
        src/main.cpp
)

set(IMGUI_DIR "${CMAKE_SOURCE_DIR}/external/imgui-docking")
set(RLIMGUI_DIR "${CMAKE_SOURCE_DIR}/external/rlImGui")

file(GLOB_RECURSE SRC CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/src/*.cpp")
target_sources("${CMAKE_PROJECT_NAME}" PRIVATE ${SRC})

set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(external/raylib)

target_link_libraries(Breakout PRIVATE raylib)
