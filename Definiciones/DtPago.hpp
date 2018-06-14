#ifndef DTPAGO_HH
#define DTPAGO_HH

#include <iostream>

using namespace std;

class DtPago {
  private:
    unsigned int precio;
    unsigned int descuento;

  public:
    /* Getters */
    unsigned int getPrecio();
    unsigned int getDescuento();

    /* Setters */
    void setPrecio(unsigned int precio);
    void setDescuento(unsigned int descuento);

    DtPago();
    DtPago(unsigned int precio, unsigned int descuento);
    ~DtPago();
};

#endif
