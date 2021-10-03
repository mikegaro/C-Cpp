#include <iostream>

using namespace std;

class Player {

    //Atributos
    string name;
    int health;
    int xp;

    //Metodos
    void talk( string );
    bool is_dead( );

};

int main( ) {

    Player frank;
    Player hero;

    Player * enemy{ nullptr };
    enemy = new Player;

    delete enemy;

    return 0;
}