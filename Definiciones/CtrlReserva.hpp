#ifndef CTRLRESERVA_HH
#define CTRLRESERVA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>

#include "./IReserva.hpp";
#include "./DtPago.hpp";

using namespace std;


class CtrlReserva : public IReserva {
    
    private:
        static CtrlReserva* instancia;
        CtrlReserva();
	public:
         static CtrlReserva* getInstancia();
		 void seleccionarFuncion(int num, int cantAsientos);
         DtPago pagoCredito(string nomFin);
         int pagoDebito(string nomBanco);
         void crearReserva();
         void finalizarReserva();
};

#endif
