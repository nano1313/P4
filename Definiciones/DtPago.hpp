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
    unsigned int getPrecio();  //HECHA
    unsigned int getDescuento(); //HECHA

    /* Setters */
    void setPrecio(unsigned int precio); //HECHA
    void setDescuento(unsigned int descuento); //HECHA

<<<<<<< HEAD
    DtPago();
    DtPago(unsigned int precio, unsigned int descuento);
    //~DtPago();
=======
    DtPago(); //FALTA
    DtPago(unsigned int precio, unsigned int descuento); //HECHA
    ~DtPago(); //FALTA
>>>>>>> 54d5416700228b13609f0b09266ba4e9eb88b3b0
};

#endif
