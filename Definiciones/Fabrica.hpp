#ifndef IRESERVA_HH
#define IRESERVA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;


class Fabrica {

    private:
    Fabrica* instancia;
        
	public:
        Fabrica* getInstancia();
        IReserva getIReserva();
        IUsuario getIUsuario();
        IPelicula getIPelicula();
		
};

#endif
