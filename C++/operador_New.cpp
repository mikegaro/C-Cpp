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

int main(){

  //El operador new allocates memoria para el objeto
  Animal *gato1 = new Animal();
  gato1->setNombre("EL tONO");
  gato1->hablar();
  //El destructor no se ejecuta ya que usamos "new"
  //por lo tanto hay que llamar a "delete"
  delete gato1;
  //siempre hay que llamar a delete cuando llamamos a new
  //si no lo hacemos, podemos tener fugas de memoria y
  //nuestro programa puede crashear
  return 0;
}
