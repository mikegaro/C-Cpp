cmake_minimum_required(VERSION 3.16)
project(starters LANGUAGES C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

add_executable(first_program first_program.c)
message("DONE")