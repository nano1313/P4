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

        // CU en gral
		    virtual vector<DtPelicula> darListaPeliculas(); 
        virtual void seleccionarPelicula2(string titulo);
        virtual vector<int> darListaCines();
        virtual void seleccionarCine(int numCine);
        
        // CU Alta Cine
        virtual void ingresarDireccion(string calle, int num);
        virtual void ingresarCapacidad(int cap);
        virtual void confirmarAltaCine();
        virtual void cancelar();

        // CU Alta Funcion
        virtual vector<string> darListaSalas();
        
        // CU Ver info Pelicula
        virtual DtPelicula seleccionarPelicula1(string titulo);
        virtual vector<int> darListaCinesDeUnaFuncion();
        virtual vector<int> seleccionarCineConSusFunciones(int id);    

        // CU Eliminar Pelicula
        virtual void confirmarEliminar();
        virtual void finalizar();

        virtual void setPelicula(Pelicula * pelicula);
        virtual Pelicula * getPelicula();
				
};

#endif
