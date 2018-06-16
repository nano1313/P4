#ifndef SALA_HH
#define SALA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "./Cine.hpp"

using namespace std;

class Cine;

class Sala {
	private:
		int numero;
		int capacidad;
		int ocupado;
		Cine * cine;

	public:
		/* Getters */
		int getNumero();
		int getCapacidad();
		int getOcupado();
		Cine * getCine();

		/* Setters */
		void setNumero(int numero);
		void setCapacidad(int capacidad);
		void setOcupado(int ocupado);
		void setCine(Cine *cine);

        Sala();
		Sala(int numero, int capacidad);
		Sala(int numero, int capacidad, Cine* cine);
		~Sala();
};

#endif
