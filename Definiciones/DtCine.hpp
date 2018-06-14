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
		int getNumero(); //HECHA
		DtDireccion getDireccion(); //HECHA
		int getPrecio(); //HECHA

		/* Setters */
		void setPrecio(int p); //HECHA
		void setNumero(int numero); //HECHA 
		void setDireccion(DtDireccion direccion); //HECHA

		DtCine(int numero, DtDireccion direccion, int precio); //HECHA
		~DtCine(); //FALTA
};

#endif
