/*

    BASE CLASS REFERENCES

*/

#include<iostream>

class Account {
public:
    virtual void retirar( double amount ) {
        std::cout << "In account:: withdraw" << std::endl;
    }
    virtual ~Account( ) { std::cout << "Account::destructor" << std::endl; }
};

class Checking : public Account {
public:
    virtual void retirar( double amount ) {
        std::cout << "In Checking:: withdraw" << std::endl;
    }
    virtual ~Checking( ) { std::cout << "Checking::destructor" << std::endl; }
};

class Savings : public Account {
public:
    virtual void retirar( double amount ) {
        std::cout << "In Savings:: withdraw" << std::endl;
    }
    virtual ~Savings( ) { std::cout << "Savings::destructor" << std::endl; }
};

class Trust : public Account {
public:
    virtual void retirar( double amount ) {
        std::cout << "In Trust:: withdraw" << std::endl;
    }
    virtual ~Trust( ) { std::cout << "Trust::destructor" << std::endl; }
};

void do_withdraw( Account & account, double amount ) {
    account.retirar( amount );
}

int main( ) {

    Account a;
    Account & ref = a;
    ref.retirar( 1000 );

    Trust t;
    Account & ref1 = t;
    ref1.retirar( 1000 );

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    std::cout << "=================" << std::endl;

    do_withdraw( a1, 1000 );
    do_withdraw( a2, 2000 );
    do_withdraw( a3, 3000 );
    do_withdraw( a4, 4000 );

    std::cout << "===================" << std::endl;

    return 0;
}