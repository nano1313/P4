#ifndef IPELICULA_HH
#define IPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./DtPelicula.hpp";

using namespace std;


class IPelicula {

	public:
		virtual int* darListaCines();//Return set(Integer)
		
        virtual int* seleccionarCine(int id);//set(int)
        
        virtual string* darListaPeliculas();//set(String)
        
        virtual DTPelicula seleccionarPelicula(string titulo);
                
        virtual void confirmarEliminar();
        
        virtual void finalizar();
        

};

#endif
