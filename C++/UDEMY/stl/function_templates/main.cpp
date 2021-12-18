/*

    What is a C++ template?

    -> Blueprint

    -> Function and class templates

    -> Allow plugging-in any data type

    -> Compiler generates the appropriate function/class from the blueprint

    -> Generic programming / meta-programming

    Para crear function templates tenemos que escribir

    template <typename T>
    T max (T a, T b) {
        return (a > b) ? a : b;
    }

    template <class T>
    T max(T a, T b){
        return (a > b) ? a : b;
    }

*/
#include<iostream>
#include<string>

template <typename T>
T min( T a, T b ) {
    return ( a < b ) ? a : b;
}

struct Persona {
    std::string name;
    int age;
    bool operator<( const Persona & rhs ) const {
        return this->age < rhs.age;
    }
};

template <typename T1, typename T2>
void func( T1 a, T2 b ) {
    std::cout << a << " " << std::endl;
}

int main( ) {
    Persona persona1{ "Curly",50 };
    Persona persona2{ "John", 10 };

    Persona el_mas_joven = min( persona1, persona2 );
    std::cout << el_mas_joven.name << " es el mas joven..." << std::endl;

    std::cout << min<int>( 2, 3 ) << std::endl;
    std::cout << min( 2, 3 ) << std::endl; // -> the compiler finds out what data type is
    std::cout << min( 'a', 'b' ) << std::endl;
    std::cout << min( 12.5, 2.1 ) << std::endl;

    func<int, int>( 10, 20 );
    func( 10, 20 ); // -> the compiler finds out what data type is
    func<char, double>( 'A', 12.4 );
    func( 'A', 12.4 ); // -> the compiler finds out what data type is

    return 0;
}