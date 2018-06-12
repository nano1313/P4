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

using namespace std;

class Reserva;
class Pelicula;

class Funcion {
	private:
		int numero;
		DtFecha fecha;
		DtHora hora;
		Sala * sala;
		set<int, Reserva *> reservas;
		Pelicula * pelicula;

	public:
		/* Getters */
		int getNumero();
		DtFecha getFecha();
		DtHora getHora();
		Sala * getSala();
		set<int, Reserva *> getReservas();
		Pelicula * getPelicula();

		/* Setters */
		void setNumero(int numero);
		void setFecha(DtFecha fecha);
		void setHora(DtHora hora);
		void setSala(Sala* sala);
        
        Funcion();
		Funcion (int numero, DtFecha fecha, DtHora hora, Sala * sala);
		~Funcion();
};


#endif
