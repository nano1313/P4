#ifndef RESERVA_HH
#define RESERVA_HH

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Reserva {
	private:
		int cantAsientos;
		float costo;
	public:
		/* Getters */
		int getCantAsientos();
		float getCosto();

		/* Setters */
		void setCantAsientos(int cantAsientos);
		void setCosto(float costo);


		Reserva(int cantAsientos, float costo);
		~Reserva();
};
#endif
