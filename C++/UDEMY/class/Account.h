#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_ //Esto es para que el compilador
//lo compile solo una vez si lo encuentra muchas veces 
//en los archivos
#include<string>


class Account {
private:
    //Atributos
    std::string name;
    double balance;

public:
    //Metodos
    void retirar( double amount );
    void deposit( double amount );
    void cuantoHay( );
};

#endif