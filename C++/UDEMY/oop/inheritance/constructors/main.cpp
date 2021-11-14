/*
CONSTRUCTORES

    Una clase Derivada de Base hereda de su clase Base

    The Base Part of the Derived class MUST be initialized BEFORE
    the Derived Class is initialized

    When a Derived object is created:
        First: Base Class constructor executes
        Second: Derived Class constructor executes
=====================================================================
DESTRUCTORES
    CLASS DESTRUCTORS ARE INVOKED IN THE REVERSE ORDER AS CONSTRUCTORS

    The derived part of the Derived class MUST be destroyed BEFORE the
    Base class destructor is invoked

    When a Derived object is destroyed:
        FIRST: Derived class destructor executes then
        SECOND: Base class destructor executes

    Each constructor should free resources allocated in it's own constructors

*/
#include<iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base( ) : value{ 0 } { cout << "Base CONSTRUCTOR" << endl; }
    Base( int x ) : value{ x } { cout << "Base(int) OVERLOADED CONSTRUCTOR" << endl; }
    ~Base( ) { cout << "Base DESTRUCTOR" << endl; }
};



class Derived : public Base {
    /*

        Derived class NO HEREDA:
            -CONSTRUCTORS
            -DESTRUCTORS
            -OVERLOADED ASSIGNMENT OPERATORS
            -BASE CLASS FRIEND FUNCTIONS
        Sin embargo, los constructores, los destructores y los assignment operators
        que pertenecen a derived SI PUEDEN INVOCAR A SUS VERSIONES DE Base class
    */
    using Base::Base;
private:
    int double_value;
public:
    Derived( ) : double_value{ 0 } { cout << "Derived no-arg CONSTRUCTOR" << endl; }
    Derived( int x ) : double_value{ x * 2 } { cout << "Derived(int) CONSTRUCTOR" << endl; }
    ~Derived( ) { cout << "Derived DESTRUCTOR" << endl; }
};

int main( ) {
    Base b{ 100 };
    Derived d{ 1000 };
    // -> Aunque d.double_value es 2000 como esperabamos
    // -> la clase Base nunca recibió este argumento y
    // -> por lo tanto d.value (Base) es igual a 0 cuando
    // -> en realidad debería ser 1000
    return 0;

}