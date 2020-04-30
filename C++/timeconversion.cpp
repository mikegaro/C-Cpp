#include<iostream>
#include<string>
using namespace std;

int main(){
  string s1 = "15:19:00";
  string s2 = "03:23:00";

  char hora[2], minuto[2], segundo[2];
  size_t hh = s1.copy(hora,2,0);
  size_t mm = s1.copy(minuto,2,3);
  size_t ss = s1.copy(segundo,2,6);
  hora[hh] = '\0';
  minuto[mm] = '\0';
  segundo[ss] = '\0';
  
  return 0;

}
