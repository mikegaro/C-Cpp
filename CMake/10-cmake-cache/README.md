### CMAKE CACHE
We would like to introduce the option to choose between setting the library as shared library or static library.
 
To set a cached variable
```c
set(APP_CONFIGURATION_TYPE "Debug mode" CACHE STRING "Configuration type")
```
* First argument is variable name
* Second argument is value
* Third argument sets CACHE entry
* Fourth argument is the type of variable
* Last argument is docstring

In other instaces, we also have options() which will set a BOOL type
```c
option(APP_BUILD_LIB_AS_SHARED "Decides if MyLibrary is built as a shared library or not" ON)
```
* For the above case ON is the defined default if option is not provided
* option() has a default value of OFF if the default is not defined
* Arguments:
    * First: Variable
    * Second: Value
    * Third: default value

Testing simple cached variable
```c
set(CMAKE_VARIABLE_TEST "Hello, this is Cache" CACHE STRING "")
message("TEST CACHE VAR: ${CMAKE_VARIABLE_TEST}")
```
