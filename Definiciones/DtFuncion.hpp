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
		int getNumero(); //HECHA
		DtFecha getFecha(); //HECHA
		DtHora getHora(); //HECHA

		/* Setters */
		void setNumero(int numero); //HECHA
		void setFecha(DtFecha fecha); //HECHA
		void setHora(DtHora hora); //HECHA

<<<<<<< HEAD
        DtFuncion();
        DtFuncion(int numero, DtFecha fecha, DtHora hora);
        //~DtFuncion();
=======
        DtFuncion(); //FALTA
        DtFuncion(int numero, DtFecha fecha, DtHora hora); //HECHA
        ~DtFuncion(); //FALTA
>>>>>>> 54d5416700228b13609f0b09266ba4e9eb88b3b0
};

#endif
