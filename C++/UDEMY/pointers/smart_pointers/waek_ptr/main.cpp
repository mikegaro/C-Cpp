/*

  weak_ptr -> CIRCULAR OR CYCLIC REFERENCE

            -> A referes to B
            -> B refers to A
            -> Shared strong ownnership prevents heap allocation



*/

#include<iostream>
#include<memory>

using namespace std;

class B;

class A {
    std::shared_ptr<B> b_ptr;
public:
    void set_B( std::shared_ptr<B> & b ) {
        b_ptr = b;
    }
    A( ) { cout << "A constructor" << endl; }
    ~A( ) { cout << "A   destructor" << endl; }
};

class B {
    std::weak_ptr<A> a_ptr;
public:
    void set_A( std::shared_ptr<A> & a ) {
        a_ptr = a;
    }
    B( ) { cout << "B constructor" << endl; }
    ~B( ) { cout << "B destructor" << endl; }
};

int main( ) {

    shared_ptr<A> a = make_shared<A>( );
    shared_ptr<B> b = make_shared<B>( );

    a->set_B( b );
    b->set_A( a );

    /*

        YA QUE SE APUNTAN ENTRE ELLOS Y SON SHARED, LOS POINTERS NUNCA
        SE VAN A DESTRUIR. POR LO TANTO A UNO HAY QUE DEFINIRLO COMO WEAK...

    */

    return 0;
}