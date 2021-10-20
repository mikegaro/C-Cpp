#ifndef _PLAYER_H_
#define _PLAYER_H_
#include<string>

class Player {
    private:
    //Atributos
    std::string name;
    int health;
    int xp;
    //El siguiente miembro no pertenece al objeto, sino pertenece a la clase
    static int num_players; //En el archivo .h no se puede inicializar esto, hay que ir al .cpp
    public:
    //Metodos
    std::string get_name( ) { return name; }
    int get_health( ) { return health; }
    int get_xp( ) { return xp; }
    Player( std::string name_val = "None", int health_val = 0, int xp_val = 0 );
    Player( const Player & source );
    ~Player( );
    //La siguiente funcion NO pertenece al objeto, sino pertenece a la clase
    static int get_num_players( );
    //ESTAS FUNCIONES SOLO TIENEN ACCESO A STATIC DATA MEMBERS
};


#endif // _PLAYER_H_