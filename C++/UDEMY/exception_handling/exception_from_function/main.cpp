/*

    THROW EXCEPTION FROM A FUNCTION

    WHAT DO WE RETURN IF TOTAL IS ZERO?

*/

#include<iostream>

double calculate_avg( int suma, int total ) {
    if ( total == 0 )
        throw 0;
    return static_cast< double >( suma ) / total;
}

int main( ) {

    double average{};
    try {
        average = calculate_avg( 10, 0 );
        std::cout << average << std::endl;
    }
    catch ( int & ex ) {
        std::cerr << "You can´t divide by zero" << std::endl;
    }

    return 0;
}