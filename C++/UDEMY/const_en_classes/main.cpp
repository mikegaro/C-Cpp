#include<iostream>
using namespace std;

class Player {
    private:
    //Atributos
    string name;
    int health;
    int xp;
    public:
    //Metodos
    string get_name( ) const { return name; } //Agregamos const para
    // garantizar que la funcion no modifique al objeto
    void set_name( string texto ) { name = texto; }
    bool is_dead( ) { return true; }

    Player( ) : Player{ "None", 0,0 } {
        cout << "Constructor sin argumentos -> " << endl;
    }

    Player( string name ) : Player{ name, 0,0 } {
        cout << "Constructor con argumento -> ";
    }
    Player( std::string name, int health, int xp ) :
        name{ name }, health{ health }, xp{ xp } {
        cout << "Constructor con tres argumentos -> ";
        cout << "quiuo soy " << name << " y tengo " << health << " de vida y " << xp << " xp." << endl;
    }

    ~Player( ) {
        cout << "Iniciando destructor para " << name << endl;
    }

};

void display_player_name( const Player & p ) {
    cout << p.get_name( ) << endl;
}


int main( ) {
    const Player villano{ "Villano", 100, 55 };
    Player hero{ "Hero", 100, 15 };

    display_player_name( villano );
    display_player_name( hero );

}