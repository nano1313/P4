#ifndef DTHORA_HH
#define DTHORA_HH

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class DtHora {
  private:
    unsigned int hora;
    unsigned int minutos;

  public:
    /* Getters */
    unsigned int getHora(); //HECHA
    unsigned int getMinutos(); //HECHA

    /* Setters */
    void setHora(int d); //HECHA
    void setMinutos(int m); //HECHA

    string toString(); //FALTA

	  void operator=(const string&);	 //HECHA

    DtHora(); //FALTA

    DtHora(int hora, int minutos); //HECHA
    ~DtHora(); //FALTA

};

#endif
