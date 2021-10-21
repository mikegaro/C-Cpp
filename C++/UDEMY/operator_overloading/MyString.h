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
    void display( ) const;
    int get_lenght( ) const;
    const char * get_str( ) const;     //getters
};


#endif //_MYSTRING_H_