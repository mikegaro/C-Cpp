/*

    OPERATOR OVERLOADING
    Los operadores + - * / los podemos configurar para que funcionen con classes
    Es decir, podemos hacer Player1 + Player2 en lugar de tener que hacer funciones
    como player1.add(player2)

    ¿CUALES OPERADORES PUEDEN SER OVERLOADED?
        -> La mayoria de los operadores pueden ser overloaded

    ¿CUALES OPERADORES NO PUEDEN SER OVERLOADED?
        -> ::
        -> :?
        -> .*
        -> .
        -> sizeof

    REGLAS BASICAS PARA HACER EL OVERLOADING DE OPERADORES

        ->Orden de precedencia y asociatividad no pueden ser cambiados
        ->No puedes hacer al operadoir unario
        ->No se puede hacer overload a los operadores de los tipos de datos
            primitivos que vienen por defecto en C++ (int, double, etc.)
        ->No puedes crear nuevos operadores
        -> [], (), -> y el operador (=) DEBEN ser declarados como member methods
        -> Otros operadores pueden ser declarados como member methods o funciones globales


*/
#include<iostream>
#include "MyString.h"

using namespace std;

int main( ) {
    {
        // -> OPERATOR COPY ASSIGNMENT
        MyString empty; //no args constructor
        MyString larry( "Larry" ); //one-arg constructor
        MyString stooge{ larry }; // copy constructor

        empty.display( );
        larry.display( );
        stooge.display( );
    }

    MyString a{ "Hello" };
    a.display( );
    MyString b;
    b.display( );
    b = a;
    b.display( );

    b = "This is a test...";
    b.display( );

    {
        // -> OPERATOR MOVE ASSIGNMENT
        MyString a{ "Hello" }; // Overloaded Constructor
        a = MyString{ "Hola" }; //Overloaded Constructor y despues el MOVE assignment;
        a = "Bonjour";        //Overloaded COnstructor y despues el MOVE assignment
    }

    {
        // -> OPERATOR OVERLOADING AS MEMBER FUNCTIONS
        MyString larry{ "Larry" };
        MyString clark_kent{ "Pepe" };

        MyString superman = clark_kent;
        cout << ( larry == superman ) << endl;
        cout << ( clark_kent == superman ) << endl;

        larry.display( );
        MyString mini_larry = -larry;
        mini_larry.display( );

        MyString semidios = superman + "Batman"; //USANDO MEMBER FUNCTION
        // MyString otro_semidios = "Larry" + superman; //COMPILER ERROR ->
    }

    return 0;
}