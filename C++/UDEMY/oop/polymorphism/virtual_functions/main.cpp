/*

    VIRTUAL FUNCTIONS

    Las funciones redefinidas son unidas estaticamente
    Overriden functions son unidas dinamicamentes
    Virtual functions son overridden
    Allow us to treat all objects generally as objects of the Base class

    DECLARANDO VIRTUAL FUNCTIONS EL BASE CLASS:

    -Declare the function you want to override as virtual in the Base class
    -Virtual functions are virtual all the way down the hierarchy from this point
    -Dynamic polymorphism only via Account class pointer or reference

    class Account {
    public:
        virtual void retirar(double amount);
        ...
    };

    DECLARANDO VIRTUAL FUNCTIONS EN LA DERIVED CLASS:

    -Overridde the function in the Derived class
    -Function signature and return type must match EXACTLY
    -virtual keyword not required but recommended as best practices.
    -If you don't provide an overriden version it is inherited from
    i'ts base class

    class Checking: public Account {
    public:
        virtual void withdraw(double amount);
        ...
    }

    ------ REGLAS -----------
    Si una clase tiene una virtual functions, tienes que proveer un destructor
    para esta virtual function.

    Si el base class destructor es virtual entonces todas las derived class
    destructors tambien deberan ser virtual

*/
#include<iostream>


class Account {
    //Metodos
public:
    // -> sin el virtual el programa usará static binding y solo funcionara
    // -> la clase padre
    virtual void retirar( double amount ) {
        std::cout << "In account:: withdraw" << std::endl;
    }
};

class Checking : public Account {
    //Metodos
public:
    virtual void retirar( double amount ) {
        std::cout << "In Checking:: withdraw" << std::endl;
    }

};

class Savings : public Account {
    //Metodos
public:
    virtual void retirar( double amount ) {
        std::cout << "In Savings:: withdraw" << std::endl;
    }

};

class Trust : public Account {
    //Metodos
public:
    virtual void retirar( double amount ) {
        std::cout << "In Trust:: withdraw" << std::endl;
    }

};


int main( ) {

    std::cout << "======================" << std::endl;

    Account * p1 = new Account( );
    Account * p2 = new Savings( );
    Account * p3 = new Checking( );
    Account * p4 = new Trust( );

    p1->retirar( 1000 );
    p2->retirar( 1000 );
    p3->retirar( 1000 );
    p4->retirar( 1000 );

    /*
    OUTPUT:
    ======================
    In account:: withdraw
    In Savings:: withdraw
    In Checking:: withdraw
    In Trust:: withdraw
    ====================
    */

    std::cout << "====================" << std::endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    // -> Nos marca warning porque faltan los destructors de
    // -> las virtual functions

    return 0;
}