#ifndef CTRLRESERVA_HH
#define CTRLRESERVA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>

#include "./IReserva.hpp"
#include "./DtPago.hpp"
#include "Pelicula.hpp"
#include "Funcion.hpp"
#include "Sala.hpp"
#include "Cine.hpp"
#include "Tarjeta.hpp"
#include "Debito.hpp"
#include "Credito.hpp"
#include "Reserva.hpp"
#include "Usuario.hpp"
#include "MTarjeta.hpp"
#include "DtPago.hpp"
#include "CtrlPelicula.hpp"
#include "CtrlUsuario.hpp"

using namespace std;


class CtrlReserva : public IReserva {

    private:
        static CtrlReserva* instancia;
        CtrlReserva();
        Funcion *f;
        int cant;
        Tarjeta *tar;
        int total;
	public:
         static CtrlReserva* getInstancia();
		 void seleccionarFuncion(int num, int cantAsientos);
         DtPago pagoCredito(string nomFin);
         int pagoDebito(string nomBanco);
         void crearReserva();
         void finalizarReserva();
};

#endif