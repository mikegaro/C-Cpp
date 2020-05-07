#include <iostream>
using namespace std;

class Animal {
private:
  string nombre;
public:
  //Constructor disenado por nosotros
  Animal(){cout << "Animal creado"<< endl;};
  //Este es el copy constructor y tiene este formato
  Animal(const Animal& lacopia){
    nombre = lacopia.nombre;
    cout << "Animal creado de copia" << endl;
  };
  void setNombre(string nombre) { this->nombre = nombre;};
  void hablar() const {
    cout << "Mi nombre es: " << nombre << endl;
  }
};

int main(){
  Animal animal1;
  animal1.setNombre("El tono");
  Animal animal2 = animal1;
  /*
  Al momento de crear animal2, el compilador no mostro
  el constructos no se ejecutó, ya que estamos asignando
  animal2 = animal1 usando el "copy constructor".

  */
  animal2.hablar();
  animal2.setNombre("El baires");

  animal1.hablar();
  animal2.hablar();

  return 0;
}
