cmake_minimum_required(VERSION 3.16)
project(Application VERSION 1.0.0)

message("PROJECT_VERSION: ${PROJECT_VERSION}")
message("CMAKE_PROJECT_VERSION: ${CMAKE_PROJECT_VERSION}")

set(SOURCE_FILES main.cpp)

add_executable(Application ${SOURCE_FILES})

target_link_libraries(Application PUBLIC MyLibrary)

#   INSTEAD OF DEFINING THE VERSION INSIDE THE CPP FILE, WE CAN SPECIFY IT HERE
target_compile_definitions(Application PRIVATE APP_PROJECT_VERSION="${CMAKE_PROJECT_VERSION}")