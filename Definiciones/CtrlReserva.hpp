#ifndef CTRLRESERVA_HH
#define CTRLRESERVA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;


class CtrlReserva:public IReserva {
    
    private:
        CtrlReserva instancia;
        CtrlReserva();
	public:
         CtrlReserva getInstancia();
		 seleccionarFuncion(int num, int cantAsientos);
         DtPago pagoCredito(string nomFin);
         int pagoDebito(string nomBanco);
         crearReserva();
         finalizarReserva();
};

#endif
