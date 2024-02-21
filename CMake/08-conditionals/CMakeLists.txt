cmake_minimum_required(VERSION 3.16)
project(Conditions LANGUAGES CXX VERSION 2.5.0)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Here we add the src folder to be visible for on build time
add_subdirectory(src)

#set(MY_VARIABLE "MyValue")
#set(MY_VARIABLE "ON")
set(MY_VARIABLE "1")

#VALUE INTERPRETATION FOR CONDITIONS

# ------ TRUE VALUES ----------
# TRUE, ON, YES, Y, non-zero number, variable/string with non false value

# ------- FALSE VALUES ---------
# FALSE, OFF, NO, N, 0, empty variable/string, IGNORE, NOTFOUND, string that ends with -NOTFOUND

if (MY_VARIABLE EQUAL "1")
#if (${MY_VARIABLE} EQUAL "1")
#if (MY_VARIABLE STREQUAL "MyValue")
#if (${MY_VARIABLE} STREQUAL "MyValue")
    message("True")
else()
    message("False")
endif()