#include<iostream>

using namespace std;

class Animal{
private:
  string nombre;
public:
  void setNombre(string nombre){
    this->nombre = nombre;
  }
  void hablar(){
    cout << "Mi nombre es: " << nombre << endl;
  }
};

int main(){

  const int valor = 7;
  const double pi = 3.14159;
  cout << valor << endl;
  cout << pi << endl;
  Animal animal;
  animal.setNombre("Diegol");
  animal.hablar();

  int otrovalor = 8;
  int *pValue = &otrovalor;
  cout << *pValue << endl;

  int numero = 23;
  int const*pValor = &numero;
  //*pValor = 12; <-- Esto no se puede
  //ya que el int es constante
  cout << *pValor << endl;

  //Aqui declaramos un apuntador constante tipo int
  int * const apConstante = &numero;
  cout << *apConstante << endl;
  //apConstante = &otrovalor; <-- esto no se puede
  //ya que el apuntador es constante
  return 0;
}
