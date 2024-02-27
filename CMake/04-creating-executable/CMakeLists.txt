cmake_minimum_required(VERSION 3.16)
project(ExampleApplication LANGUAGES CXX)

add_executable(App main.cpp ExampleClass.cpp)
message("DONE")