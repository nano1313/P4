#ifndef CTRLPELICULA_HH
#define CTRLPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


class CtrlPelicula:public IPelicula {

    private:
        CtrlPelicula instancia;
        CtrlPelicula();
	public:
         CtrlPelicula getInstancia();
         
		 darListaCines();//Return set(Integer)
		
         seleccionarCine(int id);//set(int)
        
         darListaPeliculas();//set(String)
        
         DTPelicula seleccionarPelicula(string titulo);
        
         seleccionarPelicula(string titulo);
        
         confirmarEliminar();
        
         finalizar();
        

};

#endif
