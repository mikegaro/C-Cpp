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

    //ESTA FORMA DE INICIALIZAR ES MUY EFECTIVA YA QUE
    //SE ASOCIAN LAS VARIABLES MIENTRAS SE CREA EL OBJETO Player
    Player( ) : name{ "None" }, health{ 0 }, xp{ 0 } {
        cout << "Constructor sin argumentos -> " << endl;
    }

    //ESTA FORMA DE INICIALIZAR NO ES TAN EFICIENTE YA QUE
    //SE INICIALIZAN LAS VARIABLES CON BASURA Y LUEGO SE INICIALIZAN COMO LO INDICAMOS
    Player( string name ) {
        name = name;
        cout << "Constructor con argumento -> ";
        cout << "quiuo soy " << name << endl;
    }
    //CONSTRUCTOR QUE EN REALIDAD USA OTRO CONSTRUCTOR -> CONSTRUCTOR DELEGATION
    Player( string name, int health ) : Player{ name,health, 0 } {
        cout << "Constructor con dos argumentos -> ";
        cout << "quiuo soy " << name << " y tengo " << health << " de vida y " << xp << " xp." << endl;
    }
    Player( std::string name, int health, int xp ) {
        name = name;
        health = health;
        xp = xp;
        cout << "Constructor con tres argumentos -> ";
        cout << "quiuo soy " << name << " y tengo " << health << " de vida y " << xp << " xp." << endl;
    }
    Player( const Player & source );//PROTOTIPO DEL COPY CONSTRUCTOR

    ~Player( ) {
        cout << "Iniciando destructor para " << name << endl;
    }

};

//DEFINIENDO EL COPY CONSTRUCTOR
Player::Player( const Player & source ) : name( source.name ), health( source.health ), xp( source.xp ) {
    cout << "Copy constructor creado de " << source.name << endl;
}

//AQUI ES DONDE SE UTILIZA EL COPY CONSTRUCTOR
void display_player( Player p ) {
    cout << "Nombre: ";
    p.talk( );
}

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
        display_player( elmikidos );
    }

    Account frank_account;
    frank_account.deposit( 100.0 );
    frank_account.retirar( 500.0 );
    frank_account.cuantoHay( );

}