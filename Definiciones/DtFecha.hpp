#ifndef DTFECHA_HH
#define DTFECHA_HH

#include <iostream>
#include <string>
#include <stdlib.h>

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

    string toString();

    DtFecha();
    DtFecha(int dia, int mes, int anio);
    ~DtFecha();

    bool operator<(const DtFecha&);

    void operator=(const string&);
};

//ostream& operator<<(ostream& cout, DtFecha& f);

#endif
