
// Below is C++ program
#include <iostream>
#include "utilidades.h"


using namespace std;

//El prototipo de seleccion(); está en
//el header 'utilidades.h'

int main()
{
  int seleccionado = seleccion();
  switch(seleccionado) {
    case 1:
      cout << "Valor es uno" << endl;
      break;
    case 5:
      cout << "Valor es cinco" << endl;
      break;
    default:
      cout << "No es el valor";
    }
    return 0;
}



int seleccion(){
  int input;
  cout << "Ingresar seleccion" << endl;
  cin >> input;

  return input;
}
