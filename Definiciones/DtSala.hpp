#ifndef DTSALA_HH
#define DTSALA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "./Cine.hpp"

using namespace std;


class DtSala {
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

        DtSala();
		DtSala(int numero, int capacidad);
        ~DtSala();
};

#endif