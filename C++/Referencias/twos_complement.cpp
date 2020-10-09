#include<iostream>
using namespace std;

int main(){
  char valor = 127;
  cout << (int)valor << endl;
  //Despliega 127
  valor++;
  cout << (int)valor << endl;
  //Imprime -128 ya que ahi se reinicie el arreglo del byte
  return 0;
}
