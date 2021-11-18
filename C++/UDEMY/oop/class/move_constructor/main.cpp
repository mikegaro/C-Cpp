#include<iostream>
#include<vector>

using namespace std;

class MoveCopy {
    private:
    int * data;
    public:
    void set_data_value( int d ) { *data = d; }
    int get_data_value( ) { return *data; };
    MoveCopy( int d );
    MoveCopy( const MoveCopy & source );
    MoveCopy( MoveCopy && source ) noexcept;
    ~MoveCopy( );
};

MoveCopy::MoveCopy( int d ) {
    data = new int;
    *data = d;
    cout << "Constructor Normal" << endl;
}

MoveCopy::~MoveCopy( ) {
    delete data;
    cout << "Destructor..." << endl;
}

MoveCopy::MoveCopy( MoveCopy && source ) noexcept : data{ source.data } {
    source.data = nullptr; //"Robamos" el valor de data y borramos lo que haya en source
    cout << "Move constructor -> Moviendo recurso" << endl;
}


MoveCopy::MoveCopy( const MoveCopy & source ) : MoveCopy{ *source.data } {
    cout << "Copy Constructor" << endl;
}

int main( ) {
    vector<MoveCopy> vec;
    cout << "." << endl;
    vec.push_back( MoveCopy{ 10 } );
    /* Dado que estamos pasando un R-value(MoveCopy{10}) en lugar de un L-value(variable)
       se va a generar un objeto temporal(MoveCopy{10}) y cuando push_back use este objeto
       el copy constructor va a generar otro objeto igual, lo cual es ineficiente
     */
    cout << "." << endl;
    vec.push_back( MoveCopy{ 20 } );
    /*Ahora, push_back por cada nuevo elemento, va recorriendo el siguiente por lo que cada
      vez que agregamos un segundo elemento, se generan dos copias nuevas de esos objetos */
    cout << "." << endl;
    /*Ahora se generan tres copias con este nuevo elemento que se recorren*/
    vec.push_back( MoveCopy{ 30 } );
    cout << "." << endl;
    //Con el move constructor el recurso se "mueve" a una nueva direccion en lugar de hacer copias

    return 0;
}

