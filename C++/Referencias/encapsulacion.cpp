#include<iostream>
using namespace std;

class Rana{
//Se recomienda que se hagan privadas tantas propiedades de
//la clase como se pueda.

//El proposito es reducir el numero
//de bugs en el programa y evitar interferencias
//al momento de desarrollar programas extensos
private:
  string nombre;
//Se pueden crear tantos privates o publics como se deseen
//se recomienda separar variables y metodos en diferentes
//apartados private, esto es muy comun en programacion
private:
  string obtenerNombre(){return nombre;}
public:
  Rana(string nombre): nombre(nombre){}
  void info() {cout << "Mi nombre es: " << obtenerNombre() << endl;}
};

int main(){
  Rana  rana1("Freddy");
  rana1.info();


  return 0;
}
