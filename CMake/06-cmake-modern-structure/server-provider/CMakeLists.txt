message("Processing ${CMAKE_CURRENT_LIST_FILE}")

set(SOURCE_FILES ExampleClass.cpp)

add_library(MyLibrary STATIC ${SOURCE_FILES})

target_include_directories(MyLibrary INTERFACE .)

# INTERFACE
# PRIVATE
# PUBLIC