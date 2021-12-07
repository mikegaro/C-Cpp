#include<iostream>


double calculate_mpg( int miles, int gallons ) {
    if ( gallons == 0 )
        throw 0;
    if ( miles < 0 || gallons < 0 )
        throw std::string{ "Negative value error" };

    return static_cast< double >( miles ) / gallons;
}

int main( ) {

    double mpg{};

    try {
        mpg = calculate_mpg( -1, -3 );
        std::cout << mpg << std::endl;
    }
    catch ( int & ex ) {
        std::cerr << "You can't divide by zero" << std::endl;
    }
    catch ( std::string & ex ) {
        std::cerr << ex << std::endl;
    }
    catch ( ... ) { // -> para cualquier excepcion que no se haya intentado antes
        std::cerr << "DESCONOCIDO" << std::endl;
    }

    std::cout << "Bye" << std::endl;

    return 0;
}