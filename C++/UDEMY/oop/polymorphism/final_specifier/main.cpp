/*

    FINAL SPECIFIER

    C++11 provides the final specifier
    When used at the class level, it prevents a class from being derived on

    When used at the method level, it prevents virtual method from being
    overriden in derived class


*/

#include<iostream>

class Base final { // -> Dado que es final ya no se pueden crear clases derivadas de esta
    virtual void do_something( ) {}
};
/*
class Derived: public Base{ <- ERROR DE COMPILADOR
    ...
}
*/

// -> AHORA EN EL CONTEXTO DE VIRTUAL FUNCTIONS

class A {
public:
    virtual void hacer_algo( );
};

class B : public A {
    virtual void hacer_algo( ) final; // -> previene further overriding
};

/*
class C: public B{
    virtual void hacer_algo(); <- COMPILER ERROR -> Cann't override
}
*/

