/*

     UNIQUE_PTR

     -> Simple smart pointer - Very efficient!

     unique_ptr<T>
        -> Points to an object of type T on the heap
        -> It is unique - there can only be one unique_ptr<T> pointing to the object on the heap
        -> Owns what it points to
        -> Cannot be assigned or copied
        -> CAN be moved
        -< When the pointer is destoyed, what it points to is automatically destroyed

*/

// C++ program to illustrate the use of unique_ptr
#include <iostream>
#include <memory>
using namespace std;

class A {
public:
    void show( )     {
        cout << "A::show()" << endl;
    }
};

int main( ) {
    unique_ptr<A> p1( new A );
    p1->show( );

    // returns the memory address of p1
    cout << p1.get( ) << endl;

    // transfers ownership to p2
    unique_ptr<A> p2 = move( p1 );
    p2->show( );
    cout << p1.get( ) << endl;
    cout << p2.get( ) << endl;

    // transfers ownership to p3
    unique_ptr<A> p3 = move( p2 );
    p3->show( );
    cout << p1.get( ) << endl;
    cout << p2.get( ) << endl;
    cout << p3.get( ) << endl;

    return 0;
}