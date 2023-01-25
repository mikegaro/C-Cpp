cmake_minimum_required(VERSION 3.10)
project(allocating_memory)
set(CMAKE_CXX_STANDARD 14)
add_compile_options(-Wall -Wextra -Wpedantic)
add_executable(allocating_memory
        allocating_memory.cpp)