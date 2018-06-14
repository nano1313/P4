#ifndef DTPUNTAJE_HH
#define DTPUNTAJE_HH

#include <iostream>
#include <string.h>

using namespace std;

class DtPuntaje {
  private:
  	string usuario;
    unsigned int puntaje;

  public:
    /* Getters */
	string getUsuario();
    unsigned int getPuntaje();

    /* Setters */
    void setUsuario(string usuario);
    void setPuntaje(unsigned int puntaje);

    DtPuntaje();
    DtPuntaje(string usuario, unsigned int puntaje);
    ~DtPuntaje();

};


#endif
