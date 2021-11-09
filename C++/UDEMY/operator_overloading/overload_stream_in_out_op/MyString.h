#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include<iostream>

class MyString {
    /*

         OPERATOR OVERLOADING DE LOS STREAM INSERTIONS << Y >>

    */
    friend std::ostream & operator<<( std::ostream & os, const MyString & rhs ); //const porque no lo quiero modificar
    friend std::istream & operator>>( std::ostream & in, MyString & rhs ); //const porque si lo quiero modificar
    private:
    char * str;             //pointer to C-style string
    public:
    MyString( );                        //No args constructor
    MyString( const char * s );         //Overloaded constructor
    MyString( const MyString & source );    //Copy constructor
    MyString( MyString && source );            //MOVE Constructor
    ~MyString( );                       //Destructor

    // ->PROTOTIPO EL OPERADOR = HACIENDO OVERLOAD
    MyString & operator=( const MyString & rhs );   // -> Copy assignment (no es constructor)
    MyString & operator=( MyString && rhs );        // -> Move Assignment (no es constructor)
        // -> Con el operator= logramos el overload

    void display( ) const;
    int get_lenght( ) const;
    const char * get_str( ) const;     //getters
};


#endif //_MYSTRING_H_