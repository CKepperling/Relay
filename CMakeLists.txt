cmake_minimum_required(VERSION 3.20)

project(Relay)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(relay
    src/main.cpp
    src/User.cpp
)

target_compile_options(relay PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)