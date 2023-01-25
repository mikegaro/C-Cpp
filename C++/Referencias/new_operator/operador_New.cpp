#include<iostream>

class Animal{
private:
  std::string nombre;

public:
  //Constructor
  Animal():nombre(" ")
  {
    std::cout << "Animal creado" << std::endl;
  }
  //Copy constructor
  Animal(const Animal& otroAnimal): nombre(otroAnimal.nombre)
  {
  std::cout << "Animal creado por copia" << std::endl;
  }
  //Destructor
  ~Animal(){
    std::cout << "Destruyendo animal jejeje" << std::endl;
  }
  void setNombre(std::string nombre){
    this->nombre = nombre;
  }
  void hablar() const{
    std::cout << "Mi nombre es: " << nombre << std::endl;
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
