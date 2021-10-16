#include<iostream>

using namespace std;


//DeepCopy
//----------------------------------------------------------------


class DeepCopy {
    private:
    int * info;
    public:
    void set_info_value( int d ) { *info = d; }
    int get_info_value( ) { return *info; }
    DeepCopy( int d );
    DeepCopy( const DeepCopy & source );
    ~DeepCopy( );
};

DeepCopy::DeepCopy( int d ) {
    info = new int;
    *info = d;
}

DeepCopy::~DeepCopy( ) {
    delete info; //free storage
    cout << "Destruyendo" << endl;
}

DeepCopy::DeepCopy( const DeepCopy & source ) {
    info = new int;
    *info = *source.info;
    cout << "Copy Constructor -> Deep" << endl;
    //En deep no copiamos el apuntador, sino que creamos nuestro propio apuntador
    //y asociamos nuestro propio valor a este.
}

/* Otra forma mas sencilla es simplemente
    haciendo que el primer constructor se encargue

    DeepCopy::DeepCopy( const DeepCopy & source )
        : DeepCopy {source.info} {cout << "Copy constructor"}

*/

void display_deep( DeepCopy s ) {
    cout << s.get_info_value( ) << endl;
}

//---------------------------------------------------------------

int main( ) {

    //Ahora con deep hemos arreglado el problema que teniamos con shallow copy
    DeepCopy primero{ 100 };
    //display va a llamar al copy constructor que en lugar de solo copiar el pointer
    //va a generar su propio espacio para almacenar a lo que apunte la variable
    display_deep( primero );

    //Por lo tanto ya no hay problemas al momento de mandar a llamar una copia
    //y nos evitamos problemas que pudieran generar con shallow copy
    primero.set_info_value( 1000 );
    DeepCopy obj2{ primero };

    return 0;
}