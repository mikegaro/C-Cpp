cmake_minimum_required(VERSION 3.16)
project(ExampleLibrary LANGUAGES CXX)

set(SOURCE_FILES
        ExampleClass.cpp )

#THIS WILL GENERATE THE LIBRARIES MyLibrary.a
add_library(MyLibrary STATIC ${SOURCE_FILES})

#THIS WILL GENERATE THE LIBRARIES MyLibrary.dll
#add_library(MyLibrary SHARED ${SOURCE_FILES})