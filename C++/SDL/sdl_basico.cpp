#define SDL_MAIN_HANDLED
#include<iostream>
#include "Pantalla.h"
using namespace std;
using namespace clasePantalla;

int main(){
  Pantalla pantalla1;

  if(pantalla1.init() == false){
    cout << "Error inicializando << endl";
  }

  while(true){
    if(pantalla1.processEvents() == false){
      break;
    }
  }

  pantalla1.close();
  return 0;
}
