#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    //Atributos
    string name;
    int health;
    int xp;

    //Metodos
    void talk( string texto ) { cout << texto << endl; }
    bool is_dead( ) { return true; }

};

class Account {
public:
    //Atributos
    std::string name;
    double balance;

    //Metodos
    bool retirar( double amount ) { balance -= amount; }
    bool deposit( double amount ) { balance += amount; }

};


int main( ) {

    Account frank_account;
    int hola{ 10 };
    frank_account.name = "Frank account.";
    frank_account.balance = 500.0;
    frank_account.deposit( 100.0 );
    frank_account.retirar( 500.0 );
    cout << frank_account.balance << endl;

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk( "Hola a todos" );

    Player * enemy = new Player;
    ( *enemy ).name = "Enemy";
    ( *enemy ).health = 100;
    enemy->xp = 15;
    enemy->talk( "Quiubo" );
    return 0;
}