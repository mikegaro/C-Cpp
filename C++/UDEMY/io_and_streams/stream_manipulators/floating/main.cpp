/*

    FORMATTING FLOATING POINT NUMBERS

    -SETPRECISION
    -FIXED
    -NOSHOWPOINT
    -NOUPPERCASE
    -NOSHOWPOS

*/

#include<iostream>
#include<iomanip>
int main( ) {

    double num1{ 123123123.123123123 };
    double num2{ 123.1231 };
    double num3{ 1234.0 };

    std::cout << "DEAFULTS------------" << std::endl;
    std::cout << num1 << std::endl << num2 << std::endl << num3 << std::endl;

    std::cout << "PRECISION(9) ---------" << std::endl;
    std::cout << std::setprecision( 9 ); // -> se necesita <iomanip>
    std::cout << num1 << std::endl << num2 << std::endl << num3 << std::endl;

    std::cout << "PRECISION(2) ---------" << std::endl;
    std::cout << std::setprecision( 2 ); // -> se necesita <iomanip>
    std::cout << num1 << std::endl << num2 << std::endl << num3 << std::endl;

    std::cout << "PRECISION(3) AND FIXED ---------" << std::endl;
    std::cout << std::setprecision( 3 ) << std::fixed; // -> se necesita <iomanip>
    std::cout << num1 << std::endl << num2 << std::endl << num3 << std::endl;

    std::cout << "PRECISION(3) AND SCIENTIFIC ---------" << std::endl;
    std::cout << std::setprecision( 3 ) << std::scientific; // -> se necesita <iomanip>
    std::cout << num1 << std::endl << num2 << std::endl << num3 << std::endl;

    std::cout << "PRECISION(3) AND FIXED AND SHOW SIGN" << std::endl;
    std::cout << std::setprecision( 3 ) << std::fixed << std::showpos;
    std::cout << num1 << std::endl << num2 << std::endl << num3 << std::endl;


    // -> BACK TO DEFAULTS
    std::cout.unsetf( std::ios::scientific | std::ios::fixed );
    std::cout << std::resetiosflags( std::ios::showpos );

    // -> SHOW TRAILING ZEROS UP TO PRECISION 10
    std::cout << "PRECISION(10) AND SHOWPOINT" << std::endl;
    std::cout << std::setprecision( 10 ) << std::showpoint;
    std::cout << num1 << std::endl << num2 << std::endl << num3 << std::endl;



    return 0;
}