#ifndef _CUENTA_AHORROS_H_
#define _CUENTA_AHORROS_H_
#include "Cuenta.h"

// -> CLASE CUENTA DE AHORROS
// -> DEPOSIT METHOD INCREMENTS AMOUNT TO BE DEPOSITED BY AMOUNT * INT_RATE PERCENTAGE
// -> SO A 1000 DEPOSIT AT 5% INTEREST RATE WILL DEPOSIT 1000+50 = 1050

// -> WITHDRAW METHOD DOES NOT SPECIALIZE

class Cuenta_Ahorros : public Cuenta {
    friend std::ostream & operator<<( std::ostream & os, const Cuenta_Ahorros & account );
protected:
    double int_rate;
public:
    Cuenta_Ahorros( );
    Cuenta_Ahorros( double balance, double int_rate );
    void depositar( double amount );
};


#endif //_CUENTA_AHORROS_H_