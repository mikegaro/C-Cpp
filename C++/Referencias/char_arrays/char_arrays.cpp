#include<iostream>
using namespace std;

int main(){
  char texto[] = "hola";

  for(size_t i = 0; i< sizeof(texto); i++){
    cout << i <<": " << texto[i] << endl;
  }

  //Otra forma de hacerlo
  int k = 0;
  while(true){
    if(texto[k] == 0){
      break;
    }
    cout << texto[k] << flush;
    k++;
  }

}
