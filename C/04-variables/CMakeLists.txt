cmake_minimum_required(VERSION 3.16)
project(variables LANGUAGES C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

add_executable(data_types basic_data_types.c)
add_executable(enums enums.c)

message("DONE")