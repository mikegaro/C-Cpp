/*

    ABSTRACT CLASS

    -> CANNOT INSTANTIATE OBJECTS
    -> THESE CLASSES ARE USED AS A BASE CLASSES IN INHERITANCE HIERARCHIES
    -> OFTEN REFERED TO AS ABSTRACT BASE CLASSES
    -> SERVES AS PARENT TO DERIVED CLASSES THAT MAY HAVE OBJECTS
    -> CONTAINS AT LEAST ONE PURE VIRTUAL FUNCTION
    -> DEMASIADO GENERICA PARA CREAR OBJETOS DE ESA CLASE
        -> Ejemplo: Shape, Employee, Account, Player

    PURE VIRTUAL FUNCTIONS

    ->USED TO MAKE A CLASS ABSTRACT
    ->SPECIFIED WITH "=0" IN IT'S DECLARATION
        -> virtual void funcion() = 0; <- PURE VIRTUAL FUNCTION
    ->TYPICALLY DO NOT PROVIDE IMPLEMENTATIONS
    ->DERIVED CLASSES MUST OVERRIDE THE BASE CLASS
    ->if the derived class does not override then DERIVED is also abstract
    ->SE UTILIZA CUANDO NO HAY SENTIDO QUE BASE CLASS TENGA UNA IMPELENTACION
        ->virtual void draw() = 0;
        ->virtual void defender() = 0;

    CONCRETE CLASS

    -> Used to instantiate objects from
    -> All their members functions are defined
        -> Checking Account, Savings Account
        -> Faculty, Staff
        -> Enemy, Level Boss

*/

#include<iostream>
#include<vector>

class Shape {   // -> ABSTRACT BASE CLASS
//Metodos
public:
    virtual void draw( ) = 0;    // -> pure virtual function
    virtual void rotate( ) = 0;  // -> pure virtual function
    virtual ~Shape( ) {}
};

class Open_Shape : public Shape {     // -> ABSTRACT CLASS
public:
    virtual ~Open_Shape( ) {}
};

class Closed_Shape : public Shape {   // -> ABSTRACT CLASS
public:
    virtual ~Closed_Shape( ) {}
};

class Line : public Open_Shape { // -> CONCRETE CLASS DUE TO OVERRIDE
public:
    virtual void draw( ) override {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate( ) override {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line( ) {}
};


class Circle : public Closed_Shape {  // -> CONCRETE CLASS DUE TO OVERRIDE
public:
    virtual void draw( ) override {
        std::cout << "Drawing a circle " << std::endl;
    }
    virtual void rotate( ) override {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle( ) {}
};

class Square : public Closed_Shape {
public:
    virtual void draw( ) override {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate( ) override {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square( ) {}
};

int main( ) {

    Shape * ptr = new Circle( );
    ptr->draw( );
    ptr->rotate( );

    Shape * s1 = new Circle( );
    Shape * s2 = new Line( );
    Shape * s3 = new Square( );

    std::vector<Shape *> shapes{ s1,s2,s3 };
    for ( const auto p : shapes )
        p->draw( );

    return 0;
}