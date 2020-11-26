#include "SDL2/SDL.h"
#include <iostream>

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

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_Window *window;

  window = SDL_CreateWindow("ESTO ES UNA PRUEBA",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            500,
                            500,
                            SDL_WINDOW_RESIZABLE);
if(window == NULL){
  cout << "Hubo un problema tratando de abrir la ventana" << endl;
  cout << SDL_GetError() << endl;
}

  SDL_Quit();
  return 0;
}
