#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class MyString {
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

    // -> OPERATOR OVERLOADING COMO MEMBER FUNCTION
    MyString operator-( ) const;         //hacer el string lowercase
    MyString operator+( const MyString & rhs ) const;
    bool operator==( const MyString & rhs ) const;

    void display( ) const;
    int get_lenght( ) const;
    const char * get_str( ) const;     //getters
};


#endif //_MYSTRING_H_