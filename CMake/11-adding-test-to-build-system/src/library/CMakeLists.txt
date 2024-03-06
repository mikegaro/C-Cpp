set(SOURCE_FILES ServerProvider.cpp)

set(APP_CONFIGURATION_TYPE "Development" CACHE STRING "Configuration type")
set_property(CACHE APP_CONFIGURATION_TYPE PROPERTY STRINGS Development Test Production)

option(APP_BUILD_LIB_AS_SHARED "Decides if MyLibrary is build as shared lib" ON)

if ($CACHE{APP_BUILD_LIB_AS_SHARED})
    add_library(MyLibrary SHARED ${SOURCE_FILES})
    if (MSVC)
        target_compile_definitions(MyLibrary PRIVATE "APP_LIBRARY_API=__declspec(dllexport)")
        target_compile_definitions(MyLibrary INTERFACE "APP_LIBRARY_API=__declspec(dllimport)")
    else ()
        target_compile_definitions(MyLibrary PUBLIC "APP_LIBRARY_API=")
    endif ()
else ()
    add_library(MyLibrary STATIC ${SOURCE_FILES})
    target_compile_definitions(MyLibrary PUBLIC "APP_LIBRARY_API=")
endif ()

target_include_directories(MyLibrary INTERFACE .)

if ($CACHE{APP_CONFIGURATION_TYPE} STREQUAL "Development")
    target_compile_definitions(MyLibrary PRIVATE APP_HOSTNAME="http://127.0.0.1")
elseif($CACHE{APP_CONFIGURATION_TYPE} STREQUAL "Test")
    target_compile_definitions(MyLibrary PRIVATE APP_HOSTNAME="http://test.com")
else()
    target_compile_definitions(MyLibrary PRIVATE APP_HOSTNAME="http://clientdatabaseadress.com")
endif ()
