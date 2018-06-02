#ifndef CINE_HH
#define CINE_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "DtDireccion.hpp"

using namespace std;

class Cine {

	private:
		int numero;
		DtDireccion direccion;
		int precio;
	public:
		/* Getters */
		int getNumero();
		DtDireccion getDireccion();
		int getPrecio();

		/* Setters */
		void setPrecio(int p);
		void setNumero(int numero);
		void setDireccion(DtDireccion direccion);

		Cine(int numero, DtDireccion direccion);
		~Cine();
};
#endif
