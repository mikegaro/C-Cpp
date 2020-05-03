#include<iostream>

using namespace std;

void showl(int nElementos, string textos[]){
  for(int i = 0; i < sizeof(textos); i++){
    cout << textos[i] << endl;
  }
}

int main(){

  string textos[] = {"perro","gato","pucky"};
  cout << sizeof(textos) << endl;
  showl(3,textos);
  return 0;
}
