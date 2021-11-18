#ifndef _CUENTA_H_
#define _CUENTA_H_

#include<iostream>

class Cuenta {
    friend std::ostream & operator<<( std::ostream & os, const Cuenta & cuenta );
protected:
    double balance;
public:
    Cuenta( );
    Cuenta( double balance );
    void depositar( double amount );
    void retirar( double amount );
};

#endif //_CUENTA_H_