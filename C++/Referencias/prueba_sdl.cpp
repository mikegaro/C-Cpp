//Todos los programas SDL necesitan esta linea antes de su include
#define SDL_MAIN_HANDLED
#include<SDL2/SDL.h>
#include<iostream>

/*
Para poder compilar, se necesita customizar el compilador con el siguiente
comando:

g++ archivo.cpp -IC:\SDL\include -LC:\SDL\lib -lmingw32 -lSDL2main -lSDL2 -o objeto

Es decir, se necesita especificar en donde se encuentran los headers(include) y
las librerias. Ademas, se debe añadir el archivo .dll a la carpeta \bin\ del
compilador

ya se ya se, cuanta pinche cosa para que una tonta ventana aparezca.

*/

using namespace std;

int main(){
  cout << "Hola perras" << endl;
  if(SDL_Init(SDL_INIT_VIDEO) < 0){
    cout << "INICIALIZACION FALLIDA" << endl;
    return 1;
  }
  cout << "SDL Inicializacion correcta" << endl;
  SDL_Quit();
  return 0;
}
