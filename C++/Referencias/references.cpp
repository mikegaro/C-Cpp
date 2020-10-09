#include<iostream>

using namespace std;

void changeSomething(double &valor){
  valor = 1234.5;
}

int main(){

  int valor1 = 8;
  int &valor2 = valor1;
  valor2 = 10;

  cout << "Valor 1: " << valor1 << endl;
  cout << "Valor 2: " << valor2 << endl;

  double value = 4.321;
  changeSomething(value);
  cout << value << endl;

  return 0;
}
