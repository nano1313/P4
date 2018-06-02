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
		virtual vector<int> darListaCines(Pelicula * pelicula);
        virtual vector<int> seleccionarCine(int id);
        virtual vector<DtPelicula> darListaPeliculas();
        virtual DtPelicula seleccionarPelicula(string titulo);
        virtual void confirmarEliminar();
        virtual void finalizar();
        virtual void setPelicula(Pelicula * pelicula);
        virtual Pelicula * getPelicula();
        
};

#endif
