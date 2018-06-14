#ifndef SALA_HH
#define SALA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "./Cine.hpp"

using namespace std;

class Cine;

class Sala {
	private:
		int numero;
		int capacidad;
		Cine * cine;

	public:
		/* Getters */
		int getNumero();//HECHA
		int getCapacidad();//HECHA
		Cine * getCine();//HECHA

		/* Setters */
		void setNumero(int numero);//HECHA
		void setCapacidad(int capacidad);//HECHA
		void setCine(Cine *cine);//HECHA

        Sala();
		Sala(int numero, int capacidad);//HECHA
		Sala(int numero, int capacidad, Cine* cine);
		//~Sala();
};

#endif
