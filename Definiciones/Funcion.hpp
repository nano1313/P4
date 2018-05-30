#ifndef FUNCION_HH
#define FUNCION_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./DtFecha.hpp"
#include "./DtHora.hpp"

using namespace std;

class Funcion {
	private:
		int numero;
		DtFecha fecha;
		DtHora hora;
		float precio;

	public:
		/* Getters */
		int getNumero();
		DtFecha getFecha();
		DtHora getHora();
		float getPrecio();

		/* Setters */
		void setNumero(int numero);
		void setFecha(DtFecha fecha);
		void setHora(DtHora hora);
		void setPrecio(float precio);
        
        Funcion();
		Funcion (int numero, DtFecha fecha, DtHora hora, float precio);
		~Funcion();
};


#endif
