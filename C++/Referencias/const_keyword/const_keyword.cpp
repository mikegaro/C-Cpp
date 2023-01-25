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
  //Aqui estamos creando un apuntador variable con entero variable
  int *pValue = &otrovalor;
  cout << *pValue << endl;

  int numero = 23;
  //Aqui estamos creando un apuntador a  un entero constante.
  //Tambien lo podemos escribir como const int *pValor
  int const*pValor = &numero;
  //*pValor = 12; <-- Esto no se puede
  //ya que el int es constante
  cout << *pValor << endl;

  //Aqui declaramos un apuntador constante con un int variable.
  int * const apConstante = &numero;

  //apConstante = &otrovalor; <-- esto no se puede
  cout << *apConstante << endl;
  //ya que el apuntador es constante, sin embargo lo que contenga el apuntador
  //si se puede cambiar
  return 0;
}
