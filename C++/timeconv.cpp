#include<iostream>
#include<string>

using namespace std;

int main(){
  string s1 = "17:03:00";

  char hora[2], minuto[2], segundo[2];
  size_t hh = s1.copy(hora,2,0);
  size_t mm = s1.copy(minuto,2,3);
  size_t ss = s1.copy(segundo,2,6);

  minuto[mm] = '\0';
  hora[hh] = '\0';
  segundo[ss] = '\0';

  if(*hora >= 12){
    *hora = *hora - 12;
    cout << hora << endl;
    cout << minuto << endl;
  }

  return 0;
}
