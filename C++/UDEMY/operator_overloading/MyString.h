#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class MyString {
private:
    char * str;             //pointer to C-style string
public:
    MyString( );                        //No args constructor
    MyString( const char * s );         //Overloaded constructor
    MyString( const MyString & source );    //Copy constructor
    ~MyString( );                       //Destructor

    // ->PROTOTIPO EL OPERADOR = HACIENDO OVERLOAD
    MyString & operator=( const MyString & rhs );   // -> Copy assignment (no es constructor)
    // -> Con el operator= logramos el overload

    void display( ) const;
    int get_lenght( ) const;
    const char * get_str( ) const;     //getters
};


#endif //_MYSTRING_H_