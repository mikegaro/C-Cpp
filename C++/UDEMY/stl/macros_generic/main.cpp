/*

    GENERIC PROGRAMMING

    "Writing code that works with a variety of types as arguments,
    as long as those arguments types meet specific syntactic and
    semantic requirements"

    -> Macros
        #define
        C++ preprocessor directives
        No type information
        Simple substitution



    -> Function templates
        Problem: find the max between two numbers (could be int, float, double, etc.)
*/

#define MAX(a,b) ((a>b) ? a : b)