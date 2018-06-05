#ifndef CINE_HH
#define CINE_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include <map>
#include <vector>

#include "DtDireccion.hpp"
#include "Sala.hpp"
#include "DtSala.hpp"

using namespace std;

class Sala;
class DtSala;

class Cine {

	private:
		int numero;
		DtDireccion direccion;
		int precio;
		map<int, Sala*> salas;

	public:
		/* Getters */
		int getNumero();
		DtDireccion getDireccion();
		int getPrecio();
		vector<DtSala> getSalas;

		/* Setters */
		void setPrecio(int p);
		void setNumero(int numero);
		void setDireccion(DtDireccion direccion);
		void setSalas(map<int, Sala*> salas);

		Cine(int numero, DtDireccion direccion, int precio);
		Cine(int numero, DtDireccion direccion, int precio, map<int, Sala*> salas);
		~Cine();
};
#endif
