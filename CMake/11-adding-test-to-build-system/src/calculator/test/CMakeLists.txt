set(TEST_FILES CalculatorTests.cpp)

add_executable(CalculatorTests ${TEST_FILES})

target_link_libraries(CalculatorTests PRIVATE gmock_main)
target_link_libraries(CalculatorTests PRIVATE Calculator)