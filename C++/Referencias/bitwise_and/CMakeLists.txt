cmake_minimum_required(VERSION 3.10)

project(bitwise_and)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(bitwise_and
        bitwise_and.cpp)