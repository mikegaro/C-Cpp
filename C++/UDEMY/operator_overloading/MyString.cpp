#include<cstring>
#include<iostream>
#include "MyString.h"

// -> No args constructor
MyString::MyString( ) : str{ nullptr } {
    str = new char[1];
    *str = '\0';
}


// -> Overloaded constructor one-arg
MyString::MyString( const char * s ) : str{ nullptr } {
    if ( s == nullptr ) {
        str = new char[1];
        *str = '\0';

    }
    else {
        str = new char[std::strlen( s ) + 1];
        std::strcpy( str, s );
    }
}

// -> Deep copy constructor
MyString::MyString( const MyString & source ) : str{ nullptr } {
    str = new char[std::strlen( source.str ) + 1];
    std::strcpy( str, source.str );
}

// -> Move Constructor
MyString::MyString( MyString && source )
    :str( source.str ) {
    source.str = nullptr;
    std::cout << "Move Constructor usado" << std::endl;
}

// -> Destructor
MyString::~MyString( ) {
    delete[ ] str;
}

/*

     Aqui definimos el override del operador =
     Usando el metodo de copy assignment
*/
MyString & MyString::operator=( const MyString & rhs ) {
    std::cout << "Copy assignment" << std::endl;
    if ( this == &rhs ) {
        return *this;
    }
    delete[ ] this->str;
    str = new char[std::strlen( rhs.str ) + 1];
    std::strcpy( this->str, rhs.str );
    return *this;
}

/*

    Aqui definimos el override del operador =
    Usando el metodo de move assignment
*/
MyString & MyString::operator=( MyString && rhs ) {
    std::cout << "Usando Move Assignment" << std::endl;
    if ( this == &rhs ) {
        return *this;
    }
    delete[ ] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


void MyString::display( ) const { std::cout << str << ":" << get_lenght( ) << std::endl; }

int MyString::get_lenght( ) const { return std::strlen( str ); }

const char * MyString::get_str( ) const { return str; }