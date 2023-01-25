#include<iostream>
using namespace std;

int main(){

  int color = 0x123456;
  unsigned char rojo = (color & 0xFF0000) >> 16;
  [[maybe_unused]] unsigned char verde = (color & 0x00FF00) >> 8;
  [[maybe_unused]] unsigned char blue = (color & 0x0000FF);

  cout << hex << (int)rojo << endl;

  unsigned char otroRojo = color << 16;

  cout << hex << (int)otroRojo << endl;


  return 0;
}
