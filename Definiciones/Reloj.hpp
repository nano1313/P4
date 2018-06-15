#ifndef RELOJ_HH
#define RELOJ_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "DtFecha.hpp"
#include "DtHora.hpp"

using namespace std;


class Reloj {

    private:
        static Reloj* instancia;
        DtFecha fecha;
        DtHora hora;

	public:
        static Reloj* getInstancia();
        void modificarFecha(DtFecha fecha, DtHora hora);
        DtFecha consultarFecha();
};

#endif
