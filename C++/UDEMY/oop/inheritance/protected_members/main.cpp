/*

    PROTECTED MEMBERS AND CLASS ACCESS
    class Base {
        protected:
            protected Base class members...
    }
    -SON ACCESIBLES POR LA MISMA CLASE
    -SON ACCESIBLES POR CLASES DERIVADAS DE BASE
    -LOS OBJETOS INSTANCIADOS DE BASE O DERIVADO NO PUEDEN ACCEDER
*/

#include<iostream>

using namespace std;

class Base {
public:
    int a{ 0 };
    void display( ) { std::cout << a << "," << b << "," << endl; } //member method has access to all
protected:
    int b{ 0 };
private:
    int c{ 0 };
};


class Derived : public Base {
    //Si algo es friend de Derived, el friend solo tiene acceso a lo que Derived tenga acceso

    // a se vuelve public
    // b se vuelve protected
    // c no sera accesible

public:
    void access_base_members( ) {
        a = 100; // -> OK
        b = 200; // -> OK PORQUE ACCESAMOS DESDE LA CLASE, NO DESDE EL OBJETO
        // c=300; -> NO ES ACCESIBLE PORQUE ES PRIVATE Y ASI LO HEREDAMOS
    }

};


int main( ) {
    cout << "=========== BASE MEMBER ACCESS FROM BASE OBJECTS" << endl;
    Base base;
    base.a = 100;
    // base.b = 200; ERROR DE COMPILADOR -> NO ES ACCESIBLE PORQUE ES PROTECTED Y LOS OBJETOS NO TIENEN ACCESO
    // base.c = 300; ERROR DE COMPILADOR -> NO ES ACCESIBLWE PORQUE ES PRIVATE Y NO SE PUEDE ACCEDER CON .
    cout << "=========== BASE MEMBER ACCESS FROM DERIVOBJECTS" << endl;
    Derived derived;
    derived.a = 100; // -> OK
    // derived.b = 200; ERROR PORQUE ES PROTECTED Y LOS OBJETOS NO TIENEN ACCESO
    // -> derived.c = 300; ERROR PORQUE ES PRIVATE


}