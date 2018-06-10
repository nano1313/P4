#ifndef FUNCION_HH
#define FUNCION_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./DtFecha.hpp"
#include "./DtHora.hpp"
#include "./Sala.hpp"
#include <set>
#include "Reserva.hpp"
#include "Usuario.hpp"


using namespace std;

class Funcion {
	private:
		int numero;
		DtFecha fecha;
		DtHora hora;
		//float precio;
		Sala * sala;
		set<Reserva *> reservas;

	public:
		/* Getters */
		int getNumero();
		DtFecha getFecha();
		DtHora getHora();
		//float getPrecio();
		Sala * getSala();

		/* Setters */
		void setNumero(int numero);
		void setFecha(DtFecha fecha);
		void setHora(DtHora hora);
		void setSala(Sala* sala);
		//void setPrecio(float precio);
        
		void destroy();
		void aniadirReserva(Reserva *r);

        Funcion();
		Funcion (int numero, DtFecha fecha, DtHora hora, Sala * sala  /*float precio*/);
		~Funcion();
};


#endif
