cmake_minimum_required(VERSION 3.10)

project(char_arithmetic)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(char_arithmetic
        char++.cpp)