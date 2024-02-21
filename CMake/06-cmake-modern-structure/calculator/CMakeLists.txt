set(SOURCE_FILES Calculator.cpp)

add_library(Calculator STATIC ${SOURCE_FILES})

# All the include directories following INTERFACE will NOT be used
# for the current target but will be accessible for the other targets
# that have dependencies on the current target, i.e., appending the
# directories to INTERFACE_INCLUDE_DIRECTORIES.
target_include_directories(Calculator INTERFACE .)