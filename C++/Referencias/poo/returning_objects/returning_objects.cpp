#include<iostream>
using namespace std;

#include<iostream>

using namespace std;

class Animal{
private:
  string nombre;

public:
  //Constructor
  Animal(){
    cout << "Animal creado" << endl;
  }
  //Copy constructor
  Animal(const Animal& otroAnimal): nombre(otroAnimal.nombre) {
  cout << "Animal creado por copia" << endl;
  }
  //Destructor
  ~Animal(){
    cout << "Destruyendo animal jejeje" << endl;
  }
  void setNombre(string nombre){
    this->nombre = nombre;
  }
  void hablar() const{
    cout << "Mi nombre es: " << nombre << endl;
  }
};


//Para regresar objetos de funciones, no podemos
//hacerlo directamente ya que dentro de la funcion
//se crea y se destruye el objeto, entonces deja
//de existir, lo cual lo hace ineficiente.
//Es mejor aproximarse mediante pointers, junto
//con "new" y luego "delete" cuando ya querramos
//destruir el objeto.

Animal *crearAnimal(){
  Animal *a = new Animal();
  a->setNombre("PEPE");
  return a;
}

int main(){
  Animal *rana = crearAnimal();
  rana->hablar();
  delete rana;

  return 0;
}
