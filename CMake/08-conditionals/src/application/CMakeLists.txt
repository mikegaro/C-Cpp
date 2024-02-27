aux_source_directory(. SOURCE_FILES)

add_executable(Application ${SOURCE_FILES})

target_link_libraries(Application PUBLIC MyLibrary)
target_link_libraries(Application PUBLIC Calculator)
