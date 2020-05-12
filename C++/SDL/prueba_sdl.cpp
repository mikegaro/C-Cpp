//Todos los programas SDL necesitan esta linea antes de su include
#define SDL_MAIN_HANDLED
#include<SDL2/SDL.h>
#include<iostream>

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
