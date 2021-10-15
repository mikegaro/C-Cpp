#include<iostream>

using namespace std;

//ShallowCopy
//-----------------------------------------------------------
class ShallowCopy {
    private:
    int * data;
    public:
    void set_data_value( int d ) { *data = d; }
    int get_data_value( ) { return *data; }
    ShallowCopy( int d );
    ShallowCopy( const ShallowCopy & source );
    ~ShallowCopy( );
};

//Constructor
ShallowCopy::ShallowCopy( int d ) {
    data = new int;
    *data = d;
}

//Destructor
ShallowCopy::~ShallowCopy( ) {
    delete data; //free storage
    cout << "Destruyendo" << endl;
}

//Copy Constructor
ShallowCopy::ShallowCopy( const ShallowCopy & source ) : data( source.data ) {
    //Problema!! -> solo se copia el apuntador, NO A LO QUE ESTA APUNTANDO!!!
    cout << "Copy Constructor -> Shalllow" << endl;
    //Ahora source y el objeto que se acaba de crear apuntan al mismo "data"
}

void displayShallowCopy( ShallowCopy s ) {
    cout << s.get_data_value( ) << endl;
}
//-----------------------------------------------------------------


//DeepCopy
//----------------------------------------------------------------


class DeepCopy {
    private:
    int * info;
    public:
    void set_info_value( int d ) { *info = d; }
    int get_info_value( ) { return *info; }
    DeepCopy( int d ) {
        info = new int;
        *info = d;
    }
    DeepCopy( const DeepCopy & source );
    ~DeepCopy( );
};

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

    // {
    //     ShallowCopy principal{ 100 };
    //     displayShallowCopy( principal );
    //     //Cuando la funcion displayShallowCopy termine, se destruirá "s"
    //     //pero al destruir "s" el destructor tiene indicado hacer "delete data"
    //     //lo cual provoca que desaparezca el 100.
    //     // Mientras tanto, la variable "principal" no esta enterada
    //     // de que desaparecio el 100 ya que "principal" no almacena valores
    //     //solo pointers. Por lo que ahora "principal" esta apuntando a basura.

    //     ShallowCopy secundario{ principal };
    //     //Ahora secundario hace copia a principal, lo cual significa
    //     //que va a copiar el pointer de principal que está apuntando a
    //     //basura. Ahora "principal" y "secundario" apuntan a basura

    //     secundario.set_data_value( 1000 );
    //     //Secundario llama a la funcion para cambiar el valor de lo que
    //     //está apuntando. Pero como "principal" y "secundario apuntan"
    //     //al mismo lugar, ahora principal tiene el valor de 1000
    // }

    {
        //Ahora con deep hemos arreglado ese problema
        DeepCopy primero{ 100 };
        display_deep( primero );

        primero.set_info_value( 1000 );
        DeepCopy obj2{ primero };
    }
    return 0;
}


