#ifndef SWARM_H_
#define SWARM_H_

#include "Particula.h"
namespace clasePantalla {

  class Swarm{
  public:
    const static int nParticulas = 5000;
  private:
    Particula * m_pParticulas;
  public:
    Swarm();
    ~Swarm();
    const Particula *getParticulas(){return m_pParticulas;};
  };
}
#endif
