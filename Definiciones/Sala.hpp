#ifndef SALA_HH
#define SALA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


class Sala {
	private:
		int numero;
		int capacidad;

	public:
		/* Getters */
		int getNumero();
		int getCapacidad();

		/* Setters */
		void setNumero(int numero);
		void setCapacidad(int capacidad);

        Sala();
		Sala(int numero, int capacidad);
		~Sala();
};

#endif
