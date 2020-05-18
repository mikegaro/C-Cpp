//La nueva configuracion necesita a fuerza de esta instruccion
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
    for(int i = 0; i < pantalla1.SCREEN_WIDHT;i++){
      for(int y = 0; y < pantalla1.SCREEN_HEIGHT; y++){
        for(int x = 0; x < pantalla1.SCREEN_WIDHT;x++){
          pantalla1.setPixel(x,y,128,0,255);
        }
      }
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
