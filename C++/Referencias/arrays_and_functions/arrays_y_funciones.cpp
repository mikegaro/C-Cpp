#include<iostream>
using namespace std;

void showl(string textos[]){
  for(size_t i = 0; i < sizeof(textos); i++){
    cout << textos[i] << endl;
  }
}

void showOtro(const int nElementos, string *textos){
  for(size_t i = 0; i < nElementos; i++){
    cout << textos[i] << endl;
  }
}

void show2(string (&textos)[3]){

  for (size_t i = 0; i < sizeof(textos)/sizeof(string); i++) {
    /* code */
    cout << textos[i] << endl;
  }
}

//La siguiente funcion esta mal y no se puede concluir
string *obtenerArray(){
  //No podemos regresar pointers que apunten a variables locales
  //porque cuando el scope termina, desaparece la variables
  //entonces el pointer apunta a la nada.
  string textos[] = {"uno","dos","tres"};
  //incluso el debugger nos arroja una advertencia
  return textos;
}

char *obtenerMemoria(){
  char *pMemoria = new char[100];
  return pMemoria;
}

void freeMemoria(char *pMemoria){
  delete [] pMemoria;
}

int main(){
  cout << "El grupo acaba de descubrir git y piensan que es brujeria" << endl;
  string textos[3] = {"perro","gato","pucky"};
  showl(textos);
  char *pMemoria = obtenerMemoria();
  freeMemoria(pMemoria);


  return 0;
}
