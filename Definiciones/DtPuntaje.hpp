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
<<<<<<< HEAD
	string getUsuario();
    	int getPuntaje();

    /* Setters */
    void setUsuario(string usuario);
    void setPuntaje(int puntaje);

    DtPuntaje();
    DtPuntaje(string usuario, int puntaje);
    //~DtPuntaje();
=======
	  string getUsuario(); //HECHA
    unsigned int getPuntaje(); //HECHA

    /* Setters */
    void setUsuario(string usuario); //HECHA
    void setPuntaje(unsigned int puntaje); //HECHA

    DtPuntaje(); //FALTA
    DtPuntaje(string usuario, unsigned int puntaje); //HECHA
    ~DtPuntaje(); //FALTA
>>>>>>> 54d5416700228b13609f0b09266ba4e9eb88b3b0

};


#endif
