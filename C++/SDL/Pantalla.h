#define SDL_MAIN_HANDLED
#ifndef SCREEN_H_
#define SCREEN_H_
#include "SDL2/SDL.h"
namespace clasePantalla{

class Pantalla{
private:
  SDL_Window *m_ventana;
  SDL_Renderer *m_render;
  SDL_Texture *m_textura;
  Uint32 *m_buffer;
public:
  const int SCREEN_WIDHT = 800;
  const int SCREEN_HEIGHT = 600;
public:
  Pantalla();
  bool init();
  bool processEvents();
  void close();
};
}

#endif
