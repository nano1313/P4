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

<<<<<<< HEAD
		DtCine(int numero, DtDireccion direccion, int precio);
		//~DtCine();
=======
		DtCine(int numero, DtDireccion direccion, int precio); //HECHA
		~DtCine(); //FALTA
>>>>>>> 54d5416700228b13609f0b09266ba4e9eb88b3b0
};

#endif
