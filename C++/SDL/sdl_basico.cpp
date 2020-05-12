#define SDL_MAIN_HANDLED
#include<iostream>
#include<SDL2/SDL.h>
using namespace std;

int main(){

  const int SCREEN_WIDHT = 800;
  const int SCREEN_HEIGHT = 600;
  if(SDL_Init(SDL_INIT_VIDEO) < 0){
    cout << "ERROR" << endl;
    return 1;
  }

  SDL_Window *ventana = SDL_CreateWindow("AM VISSION",
  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDHT,
  SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

  if(ventana == NULL){
    SDL_Quit();
    return 2;
  }

  bool salir = false;

  SDL_Event evento;
  while(!salir){
    while(SDL_PollEvent(&evento)){
      if(evento.type == SDL_QUIT){
        salir = true;
      }
    }
  }

  SDL_DestroyWindow(ventana);
  SDL_Quit();

  return 0;
}
