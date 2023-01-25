cmake_minimum_required(VERSION 3.10)

project(returning_objects)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(returning_objects
        returning_objects.cpp)