#include<iostream>
using namespace std;

class Rana{
private:
  string nombre;
public:
  Rana(string nombre): nombre(nombre){}
  string obtenerNombre(){return nombre;}
  void info() {cout << "Mi nombre es: " << obtenerNombre() << endl;}
};

int main(){

  Rana  rana1("Freddy");
  cout << rana1.obtenerNombre() << endl;
  rana1.info();
  return 0;
}
