#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
using namespace std;

class Player {
private:
    //Atributos
    string name;
    int health;
    int xp;
public:
    //Metodos
    void talk( string texto ) { cout << texto << endl; }
    bool is_dead( ) { return true; }

};


int main( ) {

    Account frank_account;
    frank_account.deposit( 100.0 );
    frank_account.retirar( 500.0 );
    frank_account.cuantoHay( );

    Player frank;
    frank.talk( "Hola a todos" );

    Player * enemy = new Player;
    enemy->talk( "Quiubo" );
}