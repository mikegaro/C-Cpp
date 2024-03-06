set(SOURCE_FILES Calculator.cpp)

add_library(Calculator STATIC ${SOURCE_FILES})

target_include_directories(Calculator INTERFACE .)

add_subdirectory(test)