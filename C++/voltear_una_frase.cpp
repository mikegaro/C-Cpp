#include<iostream>

using namespace std;

int main(){

  char texto[] = "anita lava la tina";

  int nChars = sizeof(texto)-1;

  char *pStart = texto;
  char *End = texto + nChars -1;

  cout << texto << endl;

  while(pStart < End){
    char auxiliar = *pStart;
    *pStart  = *End;
    *End = auxiliar;

    pStart++;
    End--;
  }

  cout << texto << endl;

  return 0;
}
