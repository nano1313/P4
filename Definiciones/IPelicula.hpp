#ifndef IPELICULA_HH
#define IPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <vector>

#include "./DtPelicula.hpp"

using namespace std;


class IPelicula {

	public:
		virtual vector<int> darListaCines();
        virtual vector<int> seleccionarCine(int id);
        virtual vector<string> darListaPeliculas();
        virtual DtPelicula seleccionarPelicula(string titulo);
        virtual void confirmarEliminar();
        virtual void finalizar();

};

#endif
