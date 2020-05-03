#include<iostream>
using namespace std;

class Animal {
private:
  string nombre;

public:
  Animal(){
    cout << "Animal creado"<< endl;
  }
  Animal(const Animal& otro):
  nombre(otro.nombre){
    cout << "Animal creado por copia" << endl;
  }
  ~Animal(){
    cout << "Destruyendo animal" << endl;
  }

  void setNombre(string nombre){
    this->nombre = nombre;
  }

  void hablar() const {
    cout << "Mi nombre es: " << nombre << endl;
  }
};

int main(){

  Animal *pAnimal = new Animal[10];

  pAnimal[1].setNombre("Jorgito");
  pAnimal[1].hablar();

  delete [] pAnimal;

  char c = 'a';
  string name(5,c);
  cout << name << endl;

  return 0;
}
