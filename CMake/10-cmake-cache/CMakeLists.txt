cmake_minimum_required(VERSION 3.16)
project(CMakeCache LANGUAGES CXX VERSION 2.5.0)

add_subdirectory(library)
add_subdirectory(application)


#Testing cached variables
set(CMAKE_VARIABLE_TEST "Hello, this is Cache" CACHE STRING "")
message("TEST CACHE VAR: ${CMAKE_VARIABLE_TEST}")