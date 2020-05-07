#include<iostream>

using namespace std;

class Animal{
public:
  void hablar(){cout << "GRRRR" << endl;}
};

//Esta es una subclase de Animal
class Gato: public Animal {
  //La clase gato hereda todos los metodos publicos de Animal
  //ademas de que Gato puede tener sus propios metodos
public:
  void saltar(){cout << "Miau estoy saltando" << endl;}
};

//Esta es una subclase de Gato que a su vez es una subclase de Animal
class Tigre: public Gato{
//La clase Tigre hereda todos los metodos publicos de Gato
//ademas de que Tigre puede tener sus propios metodos.
public:
  void fuerteRugido(){cout << "ROAAAAAAR" << endl;}
};

int main(){

  Animal a;
  a.hablar();

  Gato b;
  b.hablar();
  b.saltar();

  Tigre c;
  c.hablar();
  c.saltar();
  c.fuerteRugido();
  return 0;
}
