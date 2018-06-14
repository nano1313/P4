#ifndef DTFUNCION_HH
#define DTFUNCION_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./DtFecha.hpp"
#include "./DtHora.hpp"

using namespace std;

class DtFuncion {
	private:
		int numero;
		DtFecha fecha;
		DtHora hora;

	public:
		/* Getters */
		int getNumero();
		DtFecha getFecha();
		DtHora getHora();

		/* Setters */
		void setNumero(int numero);
		void setFecha(DtFecha fecha);
		void setHora(DtHora hora);

        DtFuncion();
        DtFuncion(int numero, DtFecha fecha, DtHora hora);
        ~DtFuncion();
};

#endif
