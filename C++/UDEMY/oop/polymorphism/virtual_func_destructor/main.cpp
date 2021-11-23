/*

    VIRTUAL FUNCTIONS DESTRUCTOR

    Problems can happen when we destroy polymorphic objects
    If a derived class is destroyed by deleting it's storage via the base
    class pointer and the class ia a non-virtual destructor, the the behavior
    is undefined in the C++ standard.

    Derived objects must be destroyed in the correct order starting at the correct
    destructor

    ------ REGLAS -----------
    Si una clase tiene una virtual functions, tienes que proveer un destructor
    para esta virtual function.

    Si el base class destructor es virtual entonces todas las derived class
    destructors tambien deberan ser virtual

    class Account {
    public:
        virtual void withdraw(double amount);
        virtual ~Account();
        ...
    }

*/
#include<iostream>


class Account {
public:
    virtual void retirar( double amount ) {
        std::cout << "In account:: withdraw" << std::endl;
    }
    virtual ~Account( ) { std::cout << "Account::destructor" << std::endl; }
};

class Checking : public Account {
public:
    virtual void retirar( double amount ) {
        std::cout << "In Checking:: withdraw" << std::endl;
    }
    virtual ~Checking( ) { std::cout << "Checking::destructor" << std::endl; }
};

class Savings : public Account {
public:
    virtual void retirar( double amount ) {
        std::cout << "In Savings:: withdraw" << std::endl;
    }
    virtual ~Savings( ) { std::cout << "Savings::destructor" << std::endl; }
};

class Trust : public Account {
public:
    virtual void retirar( double amount ) {
        std::cout << "In Trust:: withdraw" << std::endl;
    }
    virtual ~Trust( ) { std::cout << "Trust::destructor" << std::endl; }
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

    // -> CODE NOW HAS NO WARNINGS BECAUSE WE IMPLEMENTED
    // -> THE VIRTUAL DESTRUCTORS FOR EACH CLASS

    return 0;
}