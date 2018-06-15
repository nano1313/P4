#ifndef DTRESERVA_HH
#define DTRESERVA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./DtFecha.hpp"
#include "./DtHora.hpp"

using namespace std;

class DtReserva {

	private:
        string tituloPelicula;
        DtFecha fecha;
        DtHora hora;
        float precio;
        int asientos;
        int numeroCine;
        char tipoPago;

	public:
		/* Getters */
        string getTituloPelicula();
        DtFecha getFecha();
        DtHora getHora();
        float getPrecio();
        int getAsiento();
        int getNumeroCine();

		/* Setters */
        void setTituloPelicula(string titulo);
        void setFecha(DtFecha fecha);
        void setHora(DtHora hora);
        void setPrecio(float precio);
        void setAsiento(int asiento);
        void setNumeroCine(int cine);

		DtReserva(string titulo, DtFecha fecha, DtHora hora, float precio, int asientos, char tipoPago, int cine);
		//~DtReserva();
};

#endif
