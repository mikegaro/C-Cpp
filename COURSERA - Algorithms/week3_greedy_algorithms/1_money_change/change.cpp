#include <iostream>

int get_change( int m ) {
  //write your code here
  int aux;
  aux = m / 10;
  aux += ( m % 10 ) / 5;
  aux += ( m % 5 );
  return aux;
}

int main( ) {
  int m;
  std::cin >> m;
  std::cout << get_change( m ) << '\n';
  return 0;
}
