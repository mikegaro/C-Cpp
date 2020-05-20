//La nueva configuracion necesita a fuerza de esta instruccion
#include<iostream>
#include "Pantalla.h"
#include<stdlib.h>
#include<time.h>
#include "Swarm.h"
#include "Particula.h"
using namespace std;
using namespace clasePantalla;

/*

Para poder compilar, se necesitan las librerias y los includes necesarios:

> g++ -c archivo.cpp Pantalla.cpp c

luego hay que conectarlo a un objeto usando los .o creados:

> g++ -o colores archivo.o Pantalla.o -IC:\SDL\include
      -LC:\SDL\lib -lmingw32 -lSDL2main -lSDL2

Por ultimo corremos el archivo colores.exe:
> colores

*/

int main(){
  srand(time(NULL));

  Pantalla pantalla1;

  if(pantalla1.init() == false){
    cout << "Error inicializando << endl";
  }

  Swarm swarm1;

  while(true){

    const Particula *const pParticulas = swarm1.getParticulas();

    for(int i = 0; i < Swarm::nParticulas; i++){
      Particula particula1 = pParticulas[i];

      int x = (particula1.m_x +1) * pantalla1.SCREEN_WIDHT/2;
      int y = (particula1.m_x +1) * pantalla1.SCREEN_HEIGHT/2;
      pantalla1.setPixel(x,y,255,255,255);
    }
  

    pantalla1.update();


    if(pantalla1.processEvents() == false){
      break;
    }
  }
  pantalla1.close();
  return 0;
}
