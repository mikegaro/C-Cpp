/*

     STREAM MANIPULATORS -> ALIGN AND FILL;

*/

#include<iostream>
#include<iomanip>


int main( ) {

    int num1{ 1234 };
    double num2{ 1234.1234 };
    std::string hello{ "Hello" };

    // -> DEFAULTS
    std::cout << "\n-------- DEFAULTS -------------" << std::endl;
    std::cout << num1 << num2 << hello << std::endl;

    std::cout << "\n-------- DEFAULTS -------------" << std::endl;
    std::cout << std::setw( 10 ) << num1;
    std::cout << std::setw( 10 ) << num2 << hello << std::endl;


    return 0;
}