/*

    PROGRAMACION GENERICA CON CLASS TEMPLATES

    QUE ES UN CLASS TEMPLATE EN C++?

    SIMILAR TO FUNCTION TEMPLATE, PERO A NIVEL DE CLASE
    PERMITE INSERTARLE CUALQUIER TIPO DE DATO
    EL COMPILADOR GENERA UNA CLASE APROPIADA USANDO LA PLANTILLA

*/

#include<iostream>
#include<string>
#include<vector>

// -> Digamos que queremos una clase para guardar items donde el item tenga un nombre
// -> y un entero, PERO tambien queremos una clase para guardar items que tenga un nombre
// -> y un float en lugar de un entero.

// -> Supongamos que no queremos usar dynamic polymorphism y no podemos hacer overlead en los nombres de la clase

// -> Las template class se almacenan a menudo en header files
// -> por lo que la class debería estar en un class template en Item.h

template<typename T> // -> Aqui se especifica que T es cualquier tipo de dato
class Item {
    //Atributos
private:
    std::string name;
    T value;
    //Metodos
public:
    Item( std::string name, T value ) : name{ name }, value{ value }
    {}
    std::string get_name( ) const { return name; }
    T get_value( ) const { return value; }
};

// -> Tambien podemos hacer templates con multiples typenames
template <typename T1, typename T2>
struct ParAsociado {
    T1 primero;
    T2 segundo;
};

int main( ) {


    Item<int> item1{ "Frank", 100 };
    std::cout << item1.get_name( ) << " " << item1.get_value( ) << std::endl;

    Item<std::string> item2{ "Frank", "Proffesor" };
    std::cout << item2.get_name( ) << " " << item2.get_value( ) << std::endl;

    Item<Item<std::string>> item3{ "Frank", {"C++", "Professor"} };
    std::cout << item3.get_name( ) << " "
        << item3.get_value( ).get_name( ) << " "
        << item3.get_value( ).get_value( ) << std::endl;

    std::vector<Item<double>> vec{};
    vec.push_back( Item<double>( "Larry", 100.0 ) );
    vec.push_back( Item<double>( "Moe", 200.0 ) );
    vec.push_back( Item<double>( "Marcos", 300.0 ) );

    for ( const auto & item : vec ) {
        std::cout << item.get_name( ) << item.get_value( ) << std::endl;
    }

    std::cout << "\n\n-----------------------------------\n\n" << std::endl;

    ParAsociado <std::string, int> p1{ "Frank", 100 };
    ParAsociado <int, double> p2{ 100,200.90 };

    std::cout << p1.primero << "," << p1.segundo << std::endl;
    std::cout << p2.primero << "," << p2.segundo << std::endl;

    return 0;
}