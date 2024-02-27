set(SOURCE_FILES main.cpp)

add_executable(Application ${SOURCE_FILES})

# All the include directories following PRIVATE will be used for the current target
# only, i.e., appending the directories to INCLUDE_DIRECTORIES.

target_link_libraries(Application PRIVATE MyLibrary)
