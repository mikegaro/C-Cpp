//La nueva configuracion necesita a fuerza de esta instruccion
#include<iostream>
#include "Pantalla.h"
using namespace std;
using namespace clasePantalla;

/*

Para poder compilar, se necesitan las librerias y los includes necesarios:

> g++ -c archivo.cpp Pantalla.cpp -IC:\SDL\include
      -LC:\SDL\lib -lmingw32 -lSDL2main -lSDL2

luego hay que conectarlo a un objeto usando los .o creados:

> g++ -o colores archivo.o Pantalla.o -IC:\SDL\include
      -LC:\SDL\lib -lmingw32 -lSDL2main -lSDL2

Por ultimo corremos el archivo colores.exe:
> colores

*/

int main(){
  Pantalla pantalla1;

  if(pantalla1.init() == false){
    cout << "Error inicializando << endl";
  }

  while(true){
    for(int y = 0; y < pantalla1.SCREEN_HEIGHT; y++){
      for(int x = 0; x < pantalla1.SCREEN_WIDHT;x++){
        pantalla1.setPixel(x,y,128,0,255);
      }
    }
    for(int i = 0; i < pantalla1.SCREEN_WIDHT;i+=2){
      pantalla1.setPixel(i,300,255,255,255);
    }

    pantalla1.update();


    if(pantalla1.processEvents() == false){
      break;
    }
  }
  pantalla1.close();
  return 0;
}
