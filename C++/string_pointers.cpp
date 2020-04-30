#include<iostream>
using namespace std;

int main(){
  string textos[] ={"uno", "dos", "tres"};

  string *pTextos = textos;

  for(int i = 0; i < sizeof(textos)/sizeof(string);i++){

    //-----------------------------------------
    cout << *(pTextos + i)  << " " << flush;
    //-----------------------------------------
  }
  cout << endl;
  //Otra forma de iterar a través de un array es asi:

  string *pPrimero = &textos[0];
  string *pUltimo = &textos[2];
  while(true){
    cout << *pPrimero << " ";
    if(pPrimero == pUltimo){
      break;
    }
    pPrimero++;
  }

  return 0;
}
