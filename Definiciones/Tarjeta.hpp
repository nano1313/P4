#ifndef TARJETA_HH
#define TARJETA_HH

#include <iostream>
#include <string>
#include <stdlib.h>

#include "./DtDireccion.hpp"

using namespace std;

class Tarjeta {
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

		Tarjeta(int numero, DtDireccion direccion);
		~Tarjeta();
};
#endif
