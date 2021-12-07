#include<iostream>

int main( ) {
    int miles{ 1 };
    int gallons{ 0 };
    double miles_per_galon{};


    // miles_per_galon = miles / gallons;

    try {
        if ( gallons == 0 )
            throw 0;
        miles_per_galon = static_cast< double >( miles ) / gallons;
        std::cout << "Result" << miles_per_galon << std::endl;
    }
    catch ( int & ex ) {
        std::cerr << "Sorry, you can't divide by zero" << std::endl;
    }
    std::cout << "BYE" << std::endl;
    return 0;
}