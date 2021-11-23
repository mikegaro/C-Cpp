/*

    POLIMORFISMO:
    Polymorphism in C++ means, the same entity (function or object)
    behaves differently in different scenarios.

    HAY DOS TIPOS DE POLIMORFISMO:

    1. Compile Time Polymorphism

    In compile-time polymorphism, a function is called at the time
    of program compilation. We call this type of polymorphism as
    Static binding.

    Function overloading and operator overloading is the type of
    Compile time polymorphism.Function overloading means one function
    can perform many tasks. In the function overloading function will call at
    the time of program compilation. It is an example of compile-time
    polymorphism.

    2. Runtime Polymorphism

    In a Runtime polymorphism, functions are called at the time the
    program execution. Hence, it is known as late binding or dynamic binding.

    Function overriding is a part of runtime polymorphism. In function
    overriding, more than one method has the same name with different
    types of the parameter list. It is achieved by using "virtual functions
    and pointers". It provides slow execution as it is known at the run time.
    Thus, It is more flexible as all the things executed at the run time.
    Readability of the program increases by function overloading.It is
    achieved by using the same name for the same action.

*/

#include<iostream>

class Base {
public:
    void decir_hola( ) const {
        std::cout << "Hola soy la clase Base" << std::endl;
    }
};

class Derived : public Base {
    //Metodos
public:
    void decir_hola( ) const {
        std::cout << "Hola soy la clase Derived" << std::endl;
    }
};

void saludo( const Base & obj ) {
    std::cout << "Saludos: ";
    obj.decir_hola( );
}

int main( ) {

    Base b;
    b.decir_hola( );

    Derived d;
    d.decir_hola( );

    saludo( b );
    saludo( d );

    Base * apuntador = new Derived( );
    apuntador->decir_hola( );

    /*
    OUTPUT:

    Hola soy la clase Base
    Hola soy la clase Derived

    Saludos: Hola soy la clase Base
    Saludos: Hola soy la clase Base

    dado que estamos usando "static binding"
    saludo está definido para base y por lo
    tanto derived no funciona en saludo()

    Hola soy la clase Base

    el dynamic polymorphism resuelve esto
    usando dynamic binding
    */

    delete apuntador;

    return 0;
}