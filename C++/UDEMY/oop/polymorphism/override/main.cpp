/*

     OVERRIDE SPECIFIER

     We can override Base class virtual functions
     The function signature anr return MUST be exactly the same
     If they are different then we have redefinition not overriding

     "Redefinition" is statically bound
     "Overriding" is dynamically bound -> This is what we want

     C++11 provides an override specifier to have the compiler ensure overriding


    class Base{
        virtual void decir_hola() const;
    };
    class Derived{
        virtual void decir_hola();
    }

    Como se me olvido poner const en la clase Derived, ya no son igueles y ya no
    se vuelve override sino redefinicion por lo que será statically bound.
    Para resolver esto podemos poner el override y el const que faltaba

    class Base{
        virtual void decir_hola() const;
    };
    class Derived{
        virtual void decir_hola() const override;
    }

*/
#include<iostream>

class Base {
    //Metodos
public:
    virtual void decir_hola( ) const {
        std::cout << "Hola, soy un Base class object" << std::endl;
    }
    virtual ~Base( ) {}
};

class Derived : public Base {
    //Metodos
public:
    virtual void decir_hola( ) const override {
        std::cout << "Hola, soy un Derived class object" << std::endl;
    }
    virtual ~Derived( ) {}
};


int main( ) {

    Base * p1 = new Base( );
    p1->decir_hola( );

    Derived * p2 = new Derived( );
    p2->decir_hola( );

    Base * p3 = new Derived( );
    p3->decir_hola( );

    /*

    OUTPUT:

    Hola, soy un Base class object
    Hola, soy un Derived class object
    Hola, soy un Derived class object

    */

    return 0;
}