### Steps to run

Install googletest in the `externals` directory

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
