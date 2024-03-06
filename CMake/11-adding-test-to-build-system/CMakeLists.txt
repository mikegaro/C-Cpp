cmake_minimum_required(VERSION 3.16)
project(AddingTestsToBuildSystem LANGUAGES CXX VERSION 2.5.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out")

add_subdirectory(externals EXCLUDE_FROM_ALL)
add_subdirectory(src)
