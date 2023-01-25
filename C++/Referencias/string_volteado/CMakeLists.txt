cmake_minimum_required(VERSION 3.10)

project(string_volteado)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(string_volteado
        string_volteado.cpp)