/*

     INHERITANCE CON COPY/MOVE CONSTRUCTORS AND OVERLOADED OPERATOR=

     -> LOS COPY CONSTRUCTORS NO SE HEREDAN AUTOMATICAMENTE DE LA Base CLASS
     -> QUIZAS NO SEA NECESARIO PROVEER TUS PROPIOS
     -> SIN EMBARGO, ES POSIBLE INVOCAR LOS COPY CONSTRUCTORS DE BASE DESDE LA DERIVED CLASS

    EN CASO DE NO DEFINIR LOS COPY/MOVE CONSTRUCTORS EN DERIVED:
    -> EL COMPILADOR VA A CREARLOS Y AUTOMATICAMENTE INVOCARÁ LA VERSION DE BASE

    EN CASO DE ¡SÍ! DEFINIR LOS COPY/MOVE CONSTRUCTORS EN DERIVED:
    -> TIENES QUE INVOCAR TÚ MISMO LAS VERSIONES DE BASE

    TEN CUIDADO CON LOS RAW POINTERS...
    -> Especialmente si Base y Derived tienen sus propios raw pointers
    -> Provide them with DEEP COPY SEMANTICS

*/
#include<iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base( ) : value{ 0 } { cout << "Base CONSTRUCTOR" << endl; }
    Base( int x ) : value{ x } { cout << "Base(int) OVERLOADED CONSTRUCTOR" << endl; }

    //copy constructor
    Base( const Base & otro ) : value{ otro.value } { cout << "Base copy constructor" << endl; }

    //Operator Overloading
    Base & operator=( const Base & rhs ) {
        cout << "Base Operator =" << endl;
        if ( this == &rhs )
            return *this;
        value = rhs.value;
        return *this;
    }

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
private:
    int double_value;
public:
    // -> Derived Constructor
    Derived( ) :
        Base{},
        double_value{ 0 } {cout << "Derived no-arg CONSTRUCTOR" << endl;}

    // -> Derived one-arg overloaded constructor
    Derived( int x ) :
        Base{ x },
        double_value{ x * 2 } { cout << "Derived(int) CONSTRUCTOR" << endl; }

    // -> Derived Copy Constructor
    Derived( const Derived & otro ) :
        Base( otro ), double_value{ otro.double_value } {
        cout << "Derived copy constructor" << endl;
    }

    // -> Derived Operator
    Derived & operator=( const Derived & rhs ) {
        cout << "Derived operator =" << endl;
        if ( this == &rhs )
            return *this;
        Base::operator=( rhs ); // -> Explicitly invoking Base version
        double_value = rhs.double_value;
        return *this;
    }

    // -> Destructor
    ~Derived( ) { cout << "Derived DESTRUCTOR" << endl; }
};

int main( ) {

    Base b{ 100 };
    Derived d{ 1000 };
    Derived d1{ d }; //copy constructor
    d = d1;   //operator overloading

    /*
    OUTPUT:
        Base(int) OVERLOADED CONSTRUCTOR
        Base(int) OVERLOADED CONSTRUCTOR
        Derived(int) CONSTRUCTOR
        Base copy constructor
        Derived copy constructor
        Derived operator =
        Base Operator =
        Derived DESTRUCTOR
        Base DESTRUCTOR
        Derived DESTRUCTOR
        Base DESTRUCTOR
        Base DESTRUCTOR
    */
    return 0;
}