#ifndef CTRLPELICULA_HH
#define CTRLPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./DtPelicula.hpp";

using namespace std;


class CtrlPelicula : public IPelicula {

    private:
        static CtrlPelicula* instancia;
        CtrlPelicula();
        
	public:
         static CtrlPelicula* getInstancia();
         
		 int* darListaCines();
		
         int* seleccionarCine(int id);
        
         string* darListaPeliculas();
        
         DTPelicula seleccionarPelicula(string titulo);
        
         void seleccionarPelicula(string titulo);
        
         void confirmarEliminar();
        
         void finalizar();
        

};

#endif
