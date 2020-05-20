#include "Swarm.h"

namespace clasePantalla{
  Swarm::Swarm(){
    m_pParticulas = new Particula[nParticulas];
  }
  Swarm::~Swarm(){
    delete [] m_pParticulas;
  }
}
