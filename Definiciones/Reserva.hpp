#ifndef RESERVA_HH
#define RESERVA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Tarjeta.hpp"


using namespace std;

class Reserva {
	private:
		int cantAsientos;
		float costo;
		Tarjeta* t;
	public:
		/* Getters */
		int getCantAsientos();
		float getCosto();

		/* Setters */
		void setCantAsientos(int cantAsientos);
		void setCosto(float costo);

        Reserva();
		Reserva(int cantAsientos, float costo);   
		Reserva(int cantAsientos ,float costo,Tarjeta *t);
		~Reserva();
};
#endif
