cmake_minimum_required(VERSION 3.16)

project(AddingTestsToBuildSystem LANGUAGES CXX VERSION 2.5.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out")

# Prints the root of the source directory
message("CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")

# Path to the currrent source directory (use this one when possible)
message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

# Prints the root of the build directory
message("CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")

# Prints the current build directory
message("CMAKE_CURRENT_BINARY_DIR: ${CMAKE_CURRENT_BINARY_DIR}")