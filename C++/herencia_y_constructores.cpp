#include<iostream>
using namespace std;

class Maquina{
private:
  int id;
public:
  Maquina(): id(0) {cout << "Maquina creada ->Constructor sin parametro" << endl;}
  Maquina(int i): id(i){cout << "Maquina creada ->Constructor con parametro"<< endl;}
  void info() {cout << "ID: " << id << endl;}
};

//El constructor vehiculo(int i) va a llamar al Constructor
//parametrizado de
class Vehiculo: public Maquina{
public:
  Vehiculo(int i): Maquina(i){cout<< "Vehiculo creado -> Constructor con parametro" << endl;}
  Vehiculo(){cout << "Vehiculo creado -> Constructor sin parametro" << endl;}
};

//El constructor carro va a llamar al constructor
//parametrizado de vehiculo
class Carro: public Vehiculo{
public:
  Carro(): Vehiculo(){cout << "Carro creado -> Constructor sin parametro" << endl;}
  Carro(int i): Vehiculo(i){cout <<"Carro creado-> Constructor con parametro" << endl;}
};

int main(){

  Carro carro1;
  carro1.info();
  Carro carro2(12);
  carro2.info();
/*
  carro3() no acepta .info ya que
  no hereda el constructor de Vehiculo(i)
  el cual hereda a Maquina cuya clase
  contiene al metodo "info".

  En su lugar carro3() hereda
  al constructor Vehiculo() el cual no
  hereda propiedades de Maquina */

  Carro carro3();
//  carro3.info(); <- ERROR
  return 0;
}
