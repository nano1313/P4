#ifndef IPELICULA_HH
#define IPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <vector>

#include "./DtPelicula.hpp"
#include "./Pelicula.hpp"

using namespace std;


class IPelicula {

	public:
		    virtual vector<DtPelicula> darListaPeliculas();
        virtual DtPelicula seleccionarPelicula1(string titulo);
        virtual void seleccionarPelicula2(string titulo);
        virtual vector<int> darListaCines();
        virtual void seleccionarCine(int numCine);
        virtual vector<int> darListaCinesDeUnaFuncion();
        virtual vector<int> seleccionarCineConSusFunciones(int id);    
        virtual void confirmarEliminar();
        virtual void finalizar();
        virtual void setPelicula(Pelicula * pelicula);
        virtual Pelicula * getPelicula();
				virtual vector<string> darListaSalas();
};

#endif
