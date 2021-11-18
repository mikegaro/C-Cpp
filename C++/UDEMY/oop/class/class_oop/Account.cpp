#include "Account.h"
#include<iostream>

void Account::deposit( double amount ) {
    balance += amount;
}

void Account::retirar( double amount ) {
    balance -= amount;
}

void Account::cuantoHay( ) {
    std::cout << balance << std::endl;
}