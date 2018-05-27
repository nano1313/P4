#ifndef CINE_HH
#define CINE_HH

#include <iostream>
#include <string>
#include <stdlib.h>

#include "DtDireccion.hpp"

using namespace std;

class Cine {

	private:
		int numero;
		DtDireccion direccion;

	public:
		/* Getters */
		int getNumero();
		DtDireccion getDireccion();

		/* Setters */
		void setNumero(int numero);
		void setDireccion(DtDireccion direccion);

		Cine(int numero, DtDireccion direccion);
		~Cine();
};
#endif
