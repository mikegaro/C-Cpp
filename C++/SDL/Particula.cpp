#include "Particula.h"
#include<stdlib.h>

namespace clasePantalla{

Particula::Particula(){
  m_x = ((2.0 *rand())/RAND_MAX) - 1;
  m_y = ((2.0 *rand())/RAND_MAX) - 1;

}

Particula::~Particula(){

}

}
