set(SOURCE_FILES ServerProvider.cpp)

add_library(MyLibrary STATIC ${SOURCE_FILES})

target_include_directories(MyLibrary INTERFACE .)
