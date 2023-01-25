cmake_minimum_required(VERSION 3.10)

project(new_operator)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(new_operator
        operador_New.cpp)