/*

    Why lambdas?

    Prior to C++11, function objects and function pointers are used
    to manipulate data and the behavoir of the program. But it is really
    time consuming and tedious to create this functions and set the operator
    overloading and stuff, since we have to create many of them. Some of them are
    only used once.

    In order to write less code and when you want to make a simple instruction that
    is typically a few lines of code, use lambdas

    Sintaxis:

        [] () -> return_type specifiers {} ;

        -> [] es el capture list, y define in que contexto se ejecuta el lambda
        -> En () se insertan los argumentos que va a recibir el lambda
        -> El return_type es opcional ya que lo deduce el compilador
        -> El specifier tambien es opcional
        -> EN {}  se escribe el codigo

*/

#include<iostream>
#include<vector>
#include<algorithm>

int main( ) {

    std::vector<int> vec = { 1,2,3,4 };
    std::transform( vec.begin( ),
                    vec.end( ),
                    vec.begin( ),
                    [ ]( int x ) {return x * 100;} ); // -> LAMBDA
    std::for_each( vec.begin( ),
                   vec.end( ),
                   [ ]( int x ) {std::cout << x << " ";} ); // -> LAMBDA
    return 0;
}