#ifndef IRESERVA_HH
#define IRESERVA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <vector>

#include "./DtPago.hpp"
#include "./DtReserva.hpp"

using namespace std;


class IReserva {

	public:
				virtual int seleccionarFuncion(int num, int cantAsientos)=0;
        virtual DtPago pagoCredito(string nomFin)=0;
        virtual int pagoDebito(string nomBanco)=0;
        virtual void crearReserva()=0;
        virtual void finalizarReserva()=0; 
        virtual vector<DtReserva> mostrarReserva()=0;
};

#endif
