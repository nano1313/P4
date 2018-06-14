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
	  string getUsuario(); //HECHA
    unsigned int getPuntaje(); //HECHA

    /* Setters */
    void setUsuario(string usuario); //HECHA
    void setPuntaje(unsigned int puntaje); //HECHA

    DtPuntaje(); //FALTA
    DtPuntaje(string usuario, unsigned int puntaje); //HECHA
    ~DtPuntaje(); //FALTA

};


#endif
