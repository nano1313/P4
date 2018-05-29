#ifndef DTHORA_HH
#define DTHORA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class DtHora {
  private:
    unsigned int hora;
    unsigned int minutos;

  public:
    /* Getters */
    unsigned int getHora();
    unsigned int getMinutos();

    /* Setters */
    void setHora(int d);
    void setMinutos(int m);

    DtHora();
    DtHora(int hora, int minutos);
    ~DtHora();

};

#endif
