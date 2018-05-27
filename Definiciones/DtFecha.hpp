#ifndef DTFECHA_HH
#define DTFECHA_HH

#include <iostream>

using namespace std;

class DtFecha {
  private:
    unsigned int dia;
    unsigned int mes;
    unsigned int anio;

  public:
    /* Getters */
    unsigned int getDia();
    unsigned int getMes();
    unsigned int getAnio();

    /* Setters */
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);

    DtFecha();
    DtFecha(int dia, int mes, int anio);

    bool operator<(const DtFecha&);
};

ostream& operator<<(ostream& cout, DtFecha& f);

#endif
