#ifndef DTDIRECCION_HH
#define DTDIRECCION_HH

#include <iostream>

using namespace std;

class DtDireccion {
  private:
    string calle;
    int numero;

  public:
    /* Getters */
    string getCalle();
    int getNumero();

    /* Setters */
    void setCalle(string calle);
    void setNumero(int numero);

    DtDireccion();
    DtDireccion(string calle, int numero);
};

#endif
