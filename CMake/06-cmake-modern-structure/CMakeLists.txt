cmake_minimum_required(VERSION 3.16)
project(ModernCMakeStructure LANGUAGES CXX)

add_subdirectory(server-provider)
add_subdirectory(calculator)
add_subdirectory(application)

# PUBLIC: All the directories following PUBLIC will be used for the current target
# and the other targets that have dependencies on the current target, i.e., appending
# the directories to INCLUDE_DIRECTORIES and INTERFACE_INCLUDE_DIRECTORIES.

# PRIVATE	All the include directories following PRIVATE will be used for the current target only
# , i.e., appending the directories to INCLUDE_DIRECTORIES.

# INTERFACE	All the include directories following INTERFACE will NOT be used for the current target
# but will be accessible for the other targets that have dependencies on the current target, i.e.,
# appending the directories to INTERFACE_INCLUDE_DIRECTORIES.