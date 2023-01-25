#include<iostream>

using namespace std;

int main(){

  const int elementos = 5;
  string textos[elementos] = {"uno","dos","tres","cuatro","cinco"};
  string *pTexts = textos;

  pTexts += 3;
  cout << *pTexts << endl;
  pTexts -= 2;
  cout << *pTexts << endl;

  string *pEnd = &textos[elementos];
  pTexts = &textos[0];

  while(pTexts != pEnd){
    cout << *pTexts << endl;
    pTexts++;
  }
  return 0;
}
