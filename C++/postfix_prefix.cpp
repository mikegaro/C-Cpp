#include<iostream>
using namespace std;

int main(){

int valor = 8;

cout << valor++ << endl;
cout << ++valor << endl;

valor = 1;

int posfix = valor++;
cout << "Incremento con posfix:" << endl;
cout << posfix << " " << valor << endl;

valor = 1;

int prefix = ++valor;
cout << "Incremento con prefix:" << endl;
cout << prefix << " " << valor << endl;
return 0;
}
