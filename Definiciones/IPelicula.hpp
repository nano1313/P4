#ifndef IPELICULA_HH
#define IPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


class IPelicula {

	public:
		virtual darListaCines();//Return set(Integer)
		
        virtual seleccionarCine(int id);//set(int)
        
        virtual darListaPeliculas();//set(String)
        
        virtual DTPelicula seleccionarPelicula(string titulo);
        
        virtual seleccionarPelicula(string titulo);
        
        virtual confirmarEliminar();
        
        virtual finalizar();
        

};

#endif
