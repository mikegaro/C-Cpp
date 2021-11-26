/*

    USING AN ABSTRACT CLASS AS AN INTERFACE

    -> An abstract class that has only pure virtual functions
    -> These functions provide a general set of services to th user of the class
    -> Provided as public
    -> Each subclass is free to implement these services as needed
    -> Every service (method) must be implemented
    -> The service type information is strictlt enforced

*/
#include<iostream>
#include<vector>


class Shape {
public:
    virtual void draw( ) = 0;
    virtual void rotate( ) = 0;
    virtual ~Shape( ) {}
};

class I_Shape {
public:
    virtual void draw( ) = 0;
    virtual void rotate( ) = 0;
    virtual ~I_Shape( ) {}
};

class Circle : public I_Shape {
public:
    virtual void draw( ) override { std::cout << "Drawing circle" << std::endl; }
    virtual void rotate( ) override { std::cout << "Rotating circle" << std::endl; }
    virtual ~Circle( ) {};
};

class Line : public I_Shape {
public:
    virtual void draw( ) override { std::cout << "Drawing Line" << std::endl; }
    virtual void rotate( ) override { std::cout << "Rotating Line" << std::endl; }
    virtual ~Line( ) {};
};

class Square : public I_Shape {
public:
    virtual void draw( ) override { std::cout << "Drawing Square" << std::endl; }
    virtual void rotate( ) override { std::cout << "Rotating Square" << std::endl; }
    virtual ~Square( ) {};
};

int main( ) {

    I_Shape * p1 = new Circle( );
    I_Shape * p2 = new Line( );
    I_Shape * p3 = new Square( );

    std::vector<I_Shape *> shapes = { p1, p2, p3 };

    for ( auto const & shape : shapes ) {
        shape->rotate( );
        shape->draw( );
    }



    return 0;
}