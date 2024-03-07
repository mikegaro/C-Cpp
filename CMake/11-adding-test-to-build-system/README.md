### Steps to run

For this section we need to install the googletest workspace

Install googletest in the `externals` directory
```shell
cd externals/
git clone https://github.com/google/googletest.git
```
In the CMake file from the root of the project, we add the subdirectories `externals` and  `src` and we specify the output directory
```c
cmake_minimum_required(VERSION 3.16)
project(AddingTestsToBuildSystem LANGUAGES CXX VERSION 2.5.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out")

add_subdirectory(externals EXCLUDE_FROM_ALL)
add_subdirectory(src)
```
Note: *`EXCLUDE_FROM_ALL` is a directive to tell the build system that we don't want GoogleTest to be built again and again* 


In the CMake file from `src`, we only add the subdirectories
```c
add_subdirectory(library)
add_subdirectory(calculator)
add_subdirectory(application)
```

In the CMake file from `extenals`, we only add the `googletest` subdirectory
```c
add_subdirectory(googletest)
```

Now we will go to the Calculator library and create a new folder called `test` and add that subdirectory to the `calculator/CMakelists.txt`
```c
add_subdirectory(test)
```
Note: *It is a good practice to have independent tests for each library instead of a general test directory for the entire project*

Now inside `calculator/test`, create your `CMakeLists.txt` and `CalculatorTest.cpp` files. Inside the `CMakeLists.txt`, write:
```c
set(TEST_FILES CalculatorTests.cpp)
add_executable(CalculatorTests ${TEST_FILES})

target_link_libraries(CalculatorTests PRIVATE gmock_main)
target_link_libraries(CalculatorTests PRIVATE Calculator)
```
Here we are specifying an executable which will link the `gmock_main` library from Google Tests and our Calculator library
Note: We are using `gmock_main` so that we don't have to call a main() function inside out tests.

```shell
cmake -S . -B build
cd build/out
./CalculatorTests




```
Output should look like this
```
Running main() from gmock_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SimpleTest
[ RUN      ] SimpleTest.ExampleTestCase
[       OK ] SimpleTest.ExampleTestCase (0 ms)
[----------] 1 test from SimpleTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```
