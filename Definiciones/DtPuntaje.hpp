#ifndef DTPUNTAJE_HH
#define DTPUNTAJE_HH

#include <iostream>
#include <string.h>

using namespace std;

class DtPuntaje {
  private:
  	string usuario;
    	int puntaje;

  public:
    /* Getters */
	string getUsuario();
     int getPuntaje();

    /* Setters */
    void setUsuario(string usuario);
    void setPuntaje(int puntaje);

    DtPuntaje();
    DtPuntaje(string usuario, int puntaje);
    //~DtPuntaje();

};


#endif
