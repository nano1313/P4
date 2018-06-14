#ifndef DTCINE_HH
#define DTCINE_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./DtDireccion.hpp"

using namespace std;

class DtCine {

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

		DtCine(int numero, DtDireccion direccion, int precio);
		~DtCine();
};

#endif
