/*

    STATIC CLASS MEMBERS
        ->Informacion que pertenece a la clase, no al objeto
        ->Useful to store class-wide information
        ->Se declaran como static
        ->No necesitan un objeto para existir.
        ->Como pertenece a la clase, puedes llamarla con el nombre de la clase


*/

#include<iostream>
#include "Player.h"

using namespace std;

void display_active_players( ) {
    cout << "Jugadores activos:" << Player::get_num_players( ) << endl;
}

int main( ) {

    display_active_players( );
    Player hero{ "Shrek" };
    display_active_players( );
    {
        display_active_players( );
        Player frank{ "frank" };
        display_active_players( );
    }
    display_active_players( );

    Player * enemy = new Player( "Enemy", 100, 100 );
    display_active_players( );
    delete enemy;
    display_active_players( );
    return 0;
}