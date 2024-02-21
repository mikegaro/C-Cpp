cmake_minimum_required(VERSION 3.16)
project(Variables)


set(MY_VARIABLE Holamundo)
message("MY_VARIABLE: ${MY_VARIABLE}")

set(MY_VARIABLE Hola)
message("MY_VARIABLE: ${MY_VARIABLE}")


if (DEFINED MY_VARIABLE)
    message("MY_VARIABLE is defined")
else()
    message("MY_VARIABLE is not defined")
endif()

unset(MY_VARIABLE)

#IF ELSE

if (DEFINED MY_VARIABLE)
    message("MY_VARIABLE is defined")
else()
    message("MY_VARIABLE is not defined")
endif()
message("MY_VARIABLE: ${MY_VARIABLE}")

set(SENTENCE "This is my sentence")
message(SENTENCE: ${SENTENCE})

#LISTS

set(LIST_VARIABLE "This;is;a;list")
foreach(ELEMENT IN LISTS LIST_VARIABLE)
    message("ELEMENT: ${ELEMENT}")
endforeach()

#APPEND TO A LIST

set(MY_VARIABLE ${MY_VARIABLE} extended) #This is very difficult to read
# We can do this instead
list(APPEND MY_VARIABLE .)

