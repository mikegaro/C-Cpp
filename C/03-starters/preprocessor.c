/* 
Chapter: The preprocessor
 
Part of the C compilation process that recognizes special treatments to the code
    - Analyzes these statements before analysis of the C program itself takes place
    - An instruction to your compiler to do something before compiling the source code
    - Could be anywhere in your code
    - Preprocessor statements are identified by th presence of the # sign, which must be the first non-space character on the line

*/
#include<stdio.h>
/*
    The #include statement

    It is not strictly part of the executable program, however, the program won't work without it
    This #include statement calls header files associated to the program itself

    - Header files are case sensitive on some systems, so you should always write them in lowercase
    
    There are two ways to include header files in a program
        - Using angle brackets (#include <Jason.h>)
            Tells the preprocessor to look for the file in one or more standard system directories
        - Using double quotes  (#include "Jason.h")
            Tells the processor to first look in the current directory
    NOTE: you should use #ifndef and #define to protect against multiple inclusions of a header file
*/
int main(int argc, char ** argv)
{
    printf("Hello world. This is the preprocessor topic.\n");
    return 0;
}