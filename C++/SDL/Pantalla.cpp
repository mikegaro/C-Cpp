#define SDL_MAIN_HANDLED
#include<SDL2/SDL.h>
#include "Pantalla.h"
#include<iostream>
#include<cstring>
using namespace std;
namespace clasePantalla{


//ESTE ES EL CONSTRUCTOR DE PANTALLA
Pantalla::Pantalla():
  m_ventana(NULL),
  m_render(NULL),
  m_textura(NULL),
  m_buffer(NULL) {
}


//*********************************************
//*********************************************

//ESTE ES EL CREADOR DE LA VENTANA
bool Pantalla::init(){

  /*TAMBIEN INCLUYE LA CREACION DEL RENDER
  Y DE LA TEXTURA*/

  if(SDL_Init(SDL_INIT_VIDEO) < 0){
    cout << "ERROR" << endl;
    return false;
  }
  SDL_Window *ventana = SDL_CreateWindow("AM VISSION",
  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDHT,
  SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  if(ventana == NULL){
    SDL_Quit();
    return false;
  }
  SDL_Renderer * render = SDL_CreateRenderer(ventana,-1,
                                            SDL_RENDERER_PRESENTVSYNC);
  SDL_Texture * textura = SDL_CreateTexture(render,SDL_PIXELFORMAT_RGBA8888,
                                            SDL_TEXTUREACCESS_STATIC,
                                            SCREEN_WIDHT,SCREEN_HEIGHT);
  if(render == NULL){
    cout << "NO SE PUDO CREAR" << endl;
    SDL_DestroyWindow(ventana);
    SDL_Quit();
    return false;
  }
  if(textura == NULL){
    cout << "NO SE PUDO CREAR TEXTURA" << endl;
    SDL_DestroyRenderer(render);
    SDL_DestroyWindow(ventana);
    SDL_Quit();
    return false;
  }
  Uint32 *buffer = new Uint32[SCREEN_WIDHT*SCREEN_HEIGHT];
  memset(buffer, 0, SCREEN_WIDHT*SCREEN_HEIGHT*sizeof(Uint32));
  buffer[30000] = 0xFFFFFFFF;
  SDL_UpdateTexture(m_textura, NULL, m_buffer, SCREEN_WIDHT*sizeof(Uint32));
  SDL_RenderClear(m_render);
  SDL_RenderCopy(m_render, m_textura, NULL, NULL);
  SDL_RenderPresent(m_render);
  return true;
}
//AQUI TERMINA EL INICIALIZADOR
//******************************************************
//******************************************************

//AQUI OCRUREN TODOS LOS PROCESOS
bool Pantalla::processEvents(){
  SDL_Event evento;
  while(SDL_PollEvent(&evento)){
    if(evento.type == SDL_QUIT){
      return false;
    }
  }
  return true;
}


//AQUI SE CIERRA LA VENTANA CREADA
void Pantalla::close(){
  delete [] m_buffer;
  SDL_DestroyRenderer(m_render);
  SDL_DestroyTexture(m_textura);
  SDL_DestroyWindow(m_ventana);
  SDL_Quit();
}

}
