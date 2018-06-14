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
		int getNumero(); //HECHA
		DtFecha getFecha(); //HECHA
		DtHora getHora(); //HECHA
		Sala * getSala(); //HECHA
		set<Reserva *> getReservas(); //HECHA
		Pelicula * getPelicula(); //HECHA

		/* Setters */
		void setNumero(int numero); //HECHA
		void setFecha(DtFecha fecha);//HECHA
		void setHora(DtHora hora);//HECHA
		void setSala(Sala* sala);		//HECHA
		void destroy();//HECHA
		void aniadirReserva(Reserva *r);//HECHA
        
        Funcion(); //FALTA
		Funcion (int numero, DtFecha fecha, DtHora hora, Sala * sala);//HECHA
		~Funcion(); //FALTA
};


#endif
