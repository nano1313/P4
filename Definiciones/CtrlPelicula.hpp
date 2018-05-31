#ifndef CTRLPELICULA_HH
#define CTRLPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <vector>

#include "./IPelicula.hpp";
#include "./DtPelicula.hpp";
#include "./Pelicula.hpp";

using namespace std;


class CtrlPelicula : public IPelicula {

    private:
        static CtrlPelicula* instancia;
        map<string, Pelicula *> peliculas;
        

        CtrlPelicula();
        
	public:
         static CtrlPelicula* getInstancia();
         
		 int* darListaCines();
		
         int* seleccionarCine(int id);
        
         vector<string> darListaPeliculas();
        
         DtPelicula seleccionarPelicula1(string titulo);
        
         void seleccionarPelicula2(string titulo);
        
         void confirmarEliminar();
        
         void finalizar();
        

};

#endif
