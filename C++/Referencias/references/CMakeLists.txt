cmake_minimum_required(VERSION 3.10)

project(references)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(references
        references.cpp)