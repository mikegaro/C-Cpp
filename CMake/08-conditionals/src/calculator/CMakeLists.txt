set(SOURCE_FILES Calculator.cpp)

aux_source_directory(. SOURCE_FILES)

add_library(Calculator STATIC ${SOURCE_FILES})

target_include_directories(Calculator INTERFACE .)
