#ifndef SALA_HH
#define SALA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "./Cine.hpp"
#include "./Funcion.hpp"
#include <map>

using namespace std;

class Cine;
class Funcion;

class Sala {
	private:
		int numero;
		int capacidad;
		int ocupados;
		Cine * cine;
		map<int, Funcion *> funciones;

	public:
		/* Getters */
		int getNumero();
		int getCapacidad();
		int getOcupados();
		Cine * getCine();
		map<int, Funcion *> getFunciones();

		/* Setters */
		void setNumero(int numero);
		void setCapacidad(int capacidad);
		void setOcupados(int ocupado);
		void setCine(Cine *cine);
		void setFunciones(map<int, Funcion*> funciones);
		void eliminarFuncion(Funcion *funcion);
		bool fechaOcupada(DtFecha fecha, DtHora hora);
		void agregarFuncion(Funcion *funcion);

        Sala();
		Sala(int numero, int capacidad);
		Sala(int numero, int capacidad, Cine* cine);
		~Sala();
};

#endif
