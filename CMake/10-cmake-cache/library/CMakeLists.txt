message("Building library directory")

set(APP_CONFIGURATION_TYPE "Debug mode" CACHE STRING "Configuration type")
# -- Third argument is to specify cache
# -- Fourth arguemtn is type of treatment of the variable
# -- Last argument is for specifying what this variable is about 

# -- OPTION HOLDS A BOOLEAN VALUE IF THE OPTION IS PROVIDED
option(APP_BUILD_LIB_AS_SHARED "Decides if MyLibrary is built as a shared library or not" ON)
# -- For the above case ON is the defined default if option is not provided
# -- option() has a default value of OFF if the default is not defined
# --  the option command does not create a CACHE variable if a normal variable with the same name exists.
set(SOURCE_FILES ServerProvider.cpp)

# -- Now we use the option provided
if($CACHE{APP_BUILD_LIB_AS_SHARED})
    add_library(MyLibrary SHARED ${SOURCE_FILES})
else()
    add_library(MyLibrary STATIC ${SOURCE_FILES})
endif()

target_compile_definitions(MyLibrary PUBLIC "APP_LIBRARY_API=")
target_compile_definitions(MyLibrary PRIVATE APP_HOSTNAME="http://test.com")
target_include_directories(MyLibrary INTERFACE .)
