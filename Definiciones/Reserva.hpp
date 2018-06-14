#ifndef RESERVA_HH
#define RESERVA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Tarjeta.hpp"
#include "Funcion.hpp"

class Usuario;
class Funcion;

using namespace std;

class Reserva {
	private:
		int cantAsientos;
		float costo;
		Tarjeta * t;
		Usuario* u;
		Funcion* f;

	public:
		/* Getters */
		int getCantAsientos();
		float getCosto();
		Funcion* getFuncion();
		Usuario* getUsuario(); 
		Tarjeta* getTarjeta(); 

		/* Setters */
		void setCantAsientos(int cantAsientos);
		void setCosto(float costo);
		void setUsuario(Usuario *u);
		void setFuncion(Funcion *f); 


		void destroy();

        Reserva();
		Reserva(int cantAsientos, float costo);   
		Reserva(int cantAsientos ,float costo,Tarjeta *t,Funcion *f);
		//~Reserva();
};
#endif
