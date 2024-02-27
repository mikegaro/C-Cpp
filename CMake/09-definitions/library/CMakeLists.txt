message("Building library directory")

set(SOURCE_FILES ServerProvider.cpp)

add_library(MyLibrary STATIC ${SOURCE_FILES})

target_include_directories(MyLibrary INTERFACE .)

#       Specifies compile definitions to use when compiling a given <target>. 
#       The named <target> must have been created by a command such as add_executable()
#       or add_library() and must not be an ALIAS target.
#       target_compile_definitions(<target> TYPE ITEMS1...)

target_compile_definitions(MyLibrary PRIVATE APP_HOSTNAME="http://test.com")

#       APP_HOSTNAME will be used inside the ServerProvider in the cpp file
#       std::string getHostName()
#       {
#           return APP_HOSTNAME;
#       }