/*

     FRIEND OF CLASS

     Friendship must be granted NOT  taken
     Declared explicitly in the class that is granting friendship
     Declared in the function prototype with the keyword "friend"

     Friendship is NOT SYMMETRIC:
     Must be explicitly granted
        -> if A is a friend of B
        -> B if NOT a friend of A

     Friendship is NOT TRANSITIVE:
     Must be explicitly granted:
        -> If A is a friend of B AND B is a friend of C
        -> that doesn't mean A is a friend of C

*/

#include<iostream>

class Player {
    private:
    friend void display_player( Player & p ); //display_player ahora tiene acceso a lo privado
    std::string name;
    int health;
    int xp;
    public:

};

void display_player( Player & p ) {
    std::cout << p.name << std::endl; // -> ok
    std::cout << p.health << std::endl; // -> ok  
    std::cout << p.xp << std::endl; // -> ok
}