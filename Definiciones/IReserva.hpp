#ifndef IRESERVA_HH
#define IRESERVA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;


class IReserva {

	public:
		virtual void seleccionarFuncion(int num, int cantAsientos);
        virtual DtPago pagoCredito(string nomFin);
        virtual int pagoDebito(string nomBanco);
        virtual void crearReserva();
        virtual void finalizarReserva();
};

#endif
