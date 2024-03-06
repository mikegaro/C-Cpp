set(SOURCE_FILES main.cpp)

add_executable(Application ${SOURCE_FILES})

target_link_libraries(Application PUBLIC MyLibrary)
target_link_libraries(Application PUBLIC Calculator)

target_compile_definitions(Application PRIVATE APP_PROJECT_VERSION="${CMAKE_PROJECT_VERSION}")
