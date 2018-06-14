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
		int getNumero(); //HECHA
		int getCapacidad(); //HECHA

		/* Setters */
		void setNumero(int numero); //HECHA
		void setCapacidad(int capacidad); //HECHA

<<<<<<< HEAD
        DtSala();
		DtSala(int numero, int capacidad);
        //~DtSala();
=======
        DtSala(); //FALTA
		DtSala(int numero, int capacidad); //HECHA
        ~DtSala(); //FALTA
>>>>>>> 54d5416700228b13609f0b09266ba4e9eb88b3b0
};

#endif
