#ifndef FUNCION_HH
#define FUNCION_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./DtFecha.hpp"
#include "./DtHora.hpp"
#include "./Sala.hpp"
#include "./Reserva.hpp"
#include "./Pelicula.hpp"

#include <set>
#include "Reserva.hpp"
#include "Usuario.hpp"


using namespace std;

class Reserva;
class Pelicula;
class Sala;

class Funcion {
	private:
		int numero;
		DtFecha fecha;
		DtHora hora;
		Sala * sala;
		set<Reserva *> reservas;
		Pelicula * pelicula;

	public:
		/* Getters */
		int getNumero();
		DtFecha getFecha();
		DtHora getHora();
		Sala * getSala();
		set<Reserva *> getReservas();
		Pelicula * getPelicula();

		/* Setters */
		void setNumero(int numero);
		void setFecha(DtFecha fecha);
		void setHora(DtHora hora);
		void setSala(Sala* sala);
		//void setPrecio(float precio);
		
		void destroy();
		void aniadirReserva(Reserva *r);
        
        Funcion();
		Funcion (int numero, DtFecha fecha, DtHora hora, Sala * sala, Pelicula* pel);
		//~Funcion();
};


#endif
