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
  m_ventana = SDL_CreateWindow("AM VISSION",
  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDHT,
  SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  if(m_ventana == NULL){
    SDL_Quit();
    return false;
  }
  m_render = SDL_CreateRenderer(m_ventana,-1,
                                            SDL_RENDERER_PRESENTVSYNC);
  m_textura = SDL_CreateTexture(m_render,SDL_PIXELFORMAT_RGBA8888,
                                            SDL_TEXTUREACCESS_STATIC,
                                            SCREEN_WIDHT,SCREEN_HEIGHT);
  if(m_render == NULL){
    cout << "NO SE PUDO CREAR" << endl;
    SDL_DestroyWindow(m_ventana);
    SDL_Quit();
    return false;
  }
  if(m_textura == NULL){
    cout << "NO SE PUDO CREAR TEXTURA" << endl;
    SDL_DestroyRenderer(m_render);
    SDL_DestroyWindow(m_ventana);
    SDL_Quit();
    return false;
  }
  m_buffer = new Uint32[SCREEN_WIDHT*SCREEN_HEIGHT];
  memset(m_buffer, 0, SCREEN_WIDHT*SCREEN_HEIGHT*sizeof(Uint32));
  for(int i = 0; i < SCREEN_WIDHT*SCREEN_HEIGHT;i++){
    m_buffer[i] = 0xFFFF00FF;
  }
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
