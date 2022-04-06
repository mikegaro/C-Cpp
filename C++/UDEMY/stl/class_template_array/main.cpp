#include<iostream>
#include<string>

/*

AVISO: Desde que salió C++11 la libreria estandar (STL) tiene std::array la cual es
       un template de una clase arreglo
       Siempre que se pueda, use std::array en lugar de arreglos simples.


class Array {
    int size{N};    <-- PERO COMO OBTENEMOS LA N
    int values[N];  <-- EL COMPILADOR NECESITA SABER CUANTO VALE N
}

ESTO SE LOGRA CON EL TEMPLATE, DONDE N SERA EL PARAMETRO QUE INGRESA AL TEMPLATE
*/

template<typename T, int N> // -> En este caso N no es un typename, pero no importa
class Array {
    int size{ N };  // -> EL TAMAÑO DEL ARREGLO
    T values[N];  // -> EL TIPO DE DATO DEL ARREGLO

    // -> FUNCION QUE INDICA COMO IMPRIMIR NUESTRO TEMPLATE
    friend std::ostream & operator<<( std::ostream & os, const Array<T, N> & arr ) {
        os << "[";
        for ( const auto & val : arr.values ) {
            os << val << " ";
        }
        os << "]" << std::endl;
        return os;
    }
    public:
    // -> CONSTRUCTORES
    Array( ) = default;
    Array( T init_val ) {
        for ( auto & item : values )
            item = init_val;
    }
    void fill( T val ) {
        for ( auto & item : values )
            item = val;
    }
    int get_size( ) const {
        return size;
    }
    // -> overloaded subscrip  operator for easy use
    // -> NOS REGRESA UNA REFERENCIA AL DATO T
    T & operator[]( int index ) {
        return values[index];
    }
};

// -> FUNCION MAIN

int main( ) {

    Array<int, 5> nums;
    std::cout << "The size of num is" << nums.get_size( ) << std::endl;
    std::cout << nums << std::endl;

    nums.fill( 0 );
    std::cout << "The size of nums is: " << nums.get_size( ) << std::endl;
    std::cout << nums << std::endl;

    nums.fill( 1 );
    std::cout << nums << std::endl;

    nums[0] = 1000;
    nums[1] = 2000;
    std::cout << nums << std::endl;

    Array<int, 100> nums2{ 1 };
    std::cout << "The size of nums2 is " << nums2.get_size( ) << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings( std::string{ "Frank" } );
    std::cout << "The size of string is:" << strings.get_size( ) << std::endl;
    std::cout << strings << std::endl;

    strings[0] = std::string{ "Larry" };
    std::cout << strings << std::endl;

    strings.fill( std::string{ "X" } );
    std::cout << strings << std::endl;

    return 0;
}

