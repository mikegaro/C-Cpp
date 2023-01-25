cmake_minimum_required(VERSION 3.10)

project(copy_constructors)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(copy_constructors
        copy_constructors.cpp)