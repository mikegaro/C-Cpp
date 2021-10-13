#include<iostream>
using namespace std;

int main( ) {
  string textos[ ] = { "uno", "dos", "tres" };

  string * pTextos = textos;

  for ( auto i = 0; i < sizeof( textos ) / sizeof( string );i++ ) {

    //lo que hace flush sirve para hacer permanente lo que escribe el buffer
    //lo escribimos para que se conserve el cout
    //endl tambien contiene un flush, por lo tanto
    //ahora que no tenemos endl lo tenemos que escribir explicito.
    cout << *( pTextos + i ) << " " << flush;
    cout << *( pTextos + i ) << " ";
    //-----------------------------------------
  }
  cout << endl;
  //Otra forma de iterar a través de un array es asi:

  string * pPrimero = &textos[0];
  string * pUltimo = &textos[2];
  while ( true ) {
    cout << *pPrimero << " ";
    if ( pPrimero == pUltimo ) {
      break;
    }
    pPrimero++;
  }

  return 0;
}
