#include "Cuenta_Ahorros.h"

Cuenta_Ahorros::Cuenta_Ahorros( double balance, double int_rate ) :
    Cuenta( balance ), int_rate{ int_rate }{

}

Cuenta_Ahorros::Cuenta_Ahorros( ) :
    Cuenta_Ahorros{ 0.0,0.0 } {

}

void Cuenta_Ahorros::depositar( double amount ) {
    amount += amount + ( amount * int_rate / 100 );
    Cuenta::depositar( amount );
}

std::ostream & operator<<( std::ostream & os, const Cuenta_Ahorros & cuenta ) {
    os << "Savings account balance" << cuenta.balance << "Interest rate: " << cuenta.int_rate;
}