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
    void talk( ) { cout << "quiubo soy" << name << endl; }
    void set_name( string texto ) { name = texto; }
    bool is_dead( ) { return true; }
    Player( ) {
        cout << "Constructor sin argumentos -> " << endl;
    }
    Player( string name ) {
        cout << "Constructor con argumento -> ";
        cout << "quiuo soy " << name << endl;
    }
    Player( std::string name, int health, int xp ) {
        cout << "Constructor con tres argumentos -> ";
        cout << "quiuo soy " << name << " y tengo " << health << " de vida y " << xp << " xp." << endl;
    }
    ~Player( ) {
        cout << "Iniciando destructor para " << name << endl;
    }
};


int main( ) {

    {
        Player elmiki;
        elmiki.talk( );
        elmiki.set_name( "Miki" );
        elmiki.talk( );
        Player elmikidos( "mikidos" );
        elmikidos.talk( );
        elmikidos.set_name( "mai" );
        elmikidos.talk( );
    }

    Account frank_account;
    frank_account.deposit( 100.0 );
    frank_account.retirar( 500.0 );
    frank_account.cuantoHay( );

}