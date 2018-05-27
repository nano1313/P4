#ifndef SALA_HH
#define SALA_HH

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Sala;

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

		Sala(int numero, int capacidad);
		~Sala();
};

#endif
