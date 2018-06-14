#ifndef IRESERVA_HH
#define IRESERVA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>

#include "./DtPago.hpp"

using namespace std;


class IReserva {

	public:
				virtual void seleccionarFuncion(int num, int cantAsientos)=0;
        virtual DtPago pagoCredito(string nomFin)=0;
        virtual int pagoDebito(string nomBanco)=0;
        virtual void crearReserva()=0;
        virtual void finalizarReserva()=0; 
};

#endif
