#include "Cuenta.h"

Cuenta::Cuenta( ) : Cuenta( 0.0 ) {

}

Cuenta::Cuenta( double balance ) : balance( balance ) {

}

void Cuenta::depositar( double amount ) {
    balance += amount;
}

void Cuenta::retirar( double amount ) {
    if ( balance - amount >= 0 ) {
        balance -= amount;
    }
    else {
        std::cout << "Fondos insuficientes..." << std::endl;
    }
}

std::ostream & operator<<( std::ostream & os, const Cuenta & cuenta ) {
    os << "Account balance: " << cuenta.balance;
    return os;
}