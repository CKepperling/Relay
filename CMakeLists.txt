cmake_minimum_required(VERSION 3.20)

project(Relay
    VERSION 1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Main application
add_executable(relay
    src/main.cpp
    src/User.cpp
    src/channel.cpp
)

target_include_directories(relay
    PRIVATE
        include
)

target_compile_options(relay
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)

# User tests
add_executable(user_tests
    tests/UserTests.cpp
    src/User.cpp
)

target_include_directories(user_tests
    PRIVATE
        include
)

target_compile_options(user_tests
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)

# Channel tests
add_executable(channel_tests
    tests/ChannelTests.cpp
    src/User.cpp
    src/channel.cpp
)

target_include_directories(channel_tests
    PRIVATE
        include
)

target_compile_options(channel_tests
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)