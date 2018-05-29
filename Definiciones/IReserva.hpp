#ifndef IRESERVA_HH
#define IRESERVA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;


class IReserva {

	public:
		virtual seleccionarFuncion(int num, int cantAsientos);
        virtual pagoCredito(string nomFin):DtPago;
        virtual pagoDebito(string nomBanco):int;
        virtual crearReserva();
        virtual finalizarReserva();
};

#endif
