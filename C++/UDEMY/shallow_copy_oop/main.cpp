#include<iostream>

using namespace std;

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


int main( ) {


    ShallowCopy principal{ 100 };
    displayShallowCopy( principal );
    //Cuando la funcion displayShallowCopy termine, se destruirá "s"
    //pero al destruir "s" el destructor tiene indicado hacer "delete data"
    //lo cual provoca que desaparezca el 100.
    // Mientras tanto, la variable "principal" no esta enterada
    // de que desaparecio el 100 ya que "principal" no almacena valores
    //solo pointers. Por lo que ahora "principal" esta apuntando a basura.

    ShallowCopy secundario{ principal };
    //Ahora secundario hace copia a principal, lo cual significa
    //que va a copiar el pointer de principal que está apuntando a
    //basura. Ahora "principal" y "secundario" apuntan a basura

    secundario.set_data_value( 1000 );
    //Secundario llama a la funcion para cambiar el valor de lo que
    //está apuntando. Pero como "principal" y "secundario apuntan"
    //al mismo lugar, ahora principal tiene el valor de 1000
    return 0;
}