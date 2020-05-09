#include<iostream>

using namespace std;

class Testeo{
public:
  static int const MAX = 99;
private:
  //Cuando creamos un static, hay que inicializarse
  //ya que se llama a la memoria dinamica
  static int contador;
public:
  Testeo(){
    contador++;
  }
  static void showInfo(){
    cout << contador << endl;
  }
};

int Testeo::contador = 123;

int main(){
  cout << Testeo::MAX << endl;
  Testeo::showInfo();
  Testeo uno;
  uno.showInfo();
  return 0;
}
