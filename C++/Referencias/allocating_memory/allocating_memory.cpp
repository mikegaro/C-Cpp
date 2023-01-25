#include<iostream>
using namespace std;

//Definimos la clase animal
class Animal {

private:
  string nombre;

public:
  //Definiendo el constructor principal
  Animal(){
    cout << "Animal creado"<< endl;
  }
  Animal(const Animal& otro):
  //Esta es una forma de asociar una varible a la propiedad
  nombre(otro.nombre){
    cout << "Animal creado por copia" << endl;
  }
  //Este es el destructor jejeje
  ~Animal(){
    cout << "Destruyendo animal" << endl;
  }
  //Este es un metodo pedorro por si quieres cambiar el nombre del animal
  void setNombre(string nombre){
    this->nombre = nombre;
  }

  //La neta no se porque hablar() es constant voy a investigar que pedo aqui jejeje
  //ok en geeksforgeeks dice que es para asegurarse que el nombre asociado a
  //la clase no se vaya a modificar por accidente.
  void hablar() const {
    //Se recomienda hacer tantas funciones constantes como se pueda,
    //para asi evitar cambios accidentales a los objetos que se hayan creado.
    cout << "Mi nombre es: " << nombre << endl;
  }
};

int main(){

  Animal *pAnimal = new Animal[10];

  pAnimal[1].setNombre("Jorgito");
  pAnimal[1].hablar();

  delete [] pAnimal;

  char c = 'a';
  //No se porque meti esto aqui pero el punto es que se trata del
  //"fill constructor", uno de los siete constructores posibles para la clase string
  string name(5,c);
  cout << name << endl;

  return 0;
}
