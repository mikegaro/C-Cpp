#include<iostream>

class DivideByZeroException {

};

class NegativeValueException {

};

double calculate_mpg( int millas, int galones ) {
    if ( galones == 0 )
        throw DivideByZeroException( );
    if ( millas < 0 || galones < 0 )
        throw NegativeValueException( );

    return static_cast< double >( millas ) / galones;
}

int main( ) {

    int millas( );
    int galones( );

    double mpg{};

    try {
        mpg = calculate_mpg( -1, 0 );
    }
    catch ( const DivideByZeroException & ex ) {
        std::cerr << "Division por cero!!!" << std::endl;
    }
    catch ( const NegativeValueException & ex ) {
        std::cerr << "Valores negativos encontrados!!!" << std::endl;
    }
    std::cout << "BYE!" << std::endl;
    return 0;
}