/*

    Cuando destruimos un smart pointer necesitamos hacer mas que solo
    destruir el objeto en el heap

    -> Estos son casos especiales
    -> C++ smart pointers allow you to provide custom deleters

    -> Lots of ways to achieve this
        -> Functions
        -> Lambdas
        -> Otros...

    -> Usando function:
        void my_deleter(Some_Class *raw_pointer) {
            delete raw_pointer;
        }

        shared_ptr<Some_Class> ptr { new Some_class{}, my_deleter };

*/

#include<memory>
#include<iostream>

class Test {
private:
    int data;
public:
    Test( ) : data{ 0 } { std::cout << "\tTest constructor(" << data << ")" << std::endl; }
    Test( int data ) : data{ data } { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    int get_data( ) const { return data; }
    ~Test( ) { std::cout << "\tTest destructor (" << data << ")" << std::endl; }
};

void my_deleter( Test * ptr ) {
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}

int main( ) {

    {
        std::shared_ptr<Test> ptr1{ new Test{100}, my_deleter };
    }
    std::cout << "-------------------------------" << std::endl;

    return 0;
}