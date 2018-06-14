#ifndef DTDIRECCION_HH
#define DTDIRECCION_HH

#include <iostream>
#include <string.h>
using namespace std;

class DtDireccion {
  private:
    string calle;
    int numero;

  public:
    /* Getters */
    string getCalle(); //HECHA
    int getNumero(); //HECHA

    /* Setters */
    void setCalle(string calle); //HECHA 
    void setNumero(int numero); //HECHA

    DtDireccion(); //FALTA
    DtDireccion(string calle, int numero); //HECHA
    ~DtDireccion(); //FALTA
};

#endif
