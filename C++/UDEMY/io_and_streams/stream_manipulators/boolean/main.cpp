/*

    Formatting boolean types

    Si imprimimos una condicion, se imprime como

    std::cout <<
    std::cout << (10 == 10) << std::endl; <- 1
    std::cout << (10 == 11) << std::endl; <- 0

    Ahora si le añadimos el formatter:

    std::cout << std::boolalpha;
    std::cout << (10 == 10) << std::endl; <- true
    std::cout << (10 == 11) << std::endl; <- false

    Los dos formatters para boolean son:
    std::noboolalpha // 1 0
    std::boolalpha // true false

    -> En la version de metodo tenemos:
    std::cout.setf(std::ios::boolalpha);
    std::cout.setf(std::ios::noboolalpha)
    -> Reset to default
    std::cout << std::resetiosflags(std::ios::boolalpha);
*/

#include<iostream>
#include<iomanip> //must include for the manipulators

int main( ) {

    std::cout << "noboolalpha - defatult (10 == 10)" << ( 10 == 10 ) << std::endl;
    std::cout << "noboolalpha - default (10 == 20)" << ( 10 == 20 ) << std::endl;

    std::cout << std::boolalpha; // -> change to true / false
    std::cout << "boolalpha (10 == 10)" << ( 10 == 10 ) << std::endl;
    std::cout << "boolalpha (10 == 20)" << ( 10 == 20 ) << std::endl;

    std::cout << std::noboolalpha; // -> change to 1/0
    std::cout << "boolalpha (10 == 10)" << ( 10 == 10 ) << std::endl;
    std::cout << "boolalpha (10 == 20)" << ( 10 == 20 ) << std::endl;

    // -> en forma de method
    std::cout.setf( std::ios::boolalpha ); // -> change to true/false
    std::cout << "boolalpha (10 == 10)" << ( 10 == 10 ) << std::endl;
    std::cout << "boolalpha (10 == 20)" << ( 10 == 20 ) << std::endl;

    std::cout << std::resetiosflags( std::ios::boolalpha );
    // -> resets to default which is 0/1
    std::cout << "boolalpha (10 == 10)" << ( 10 == 10 ) << std::endl;
    std::cout << "boolalpha (10 == 20)" << ( 10 == 20 ) << std::endl;
    return 0;
}