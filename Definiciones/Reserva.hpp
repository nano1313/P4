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
		Tarjeta * tarjeta;
		Usuario* usuario;
		Funcion* funcion;

	public:
		/* Getters */
		int getCantAsientos();
		float getCosto();
		Funcion * getFuncion();
		Tarjeta * getTarjeta();

		/* Setters */
		void setCantAsientos(int cantAsientos);
		void setCosto(float costo);
		void setUsuario(Usuario *u);

        Reserva();
		Reserva(int cantAsientos, float costo);   
		Reserva(int cantAsientos ,float costo,Tarjeta *t);
		~Reserva();
};
#endif
