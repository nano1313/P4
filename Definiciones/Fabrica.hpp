#ifndef FABRICA_HH
#define FABRICA_HH

#include <stdlib.h>
#include <iostream>
#include <string.h>

#include "./IReserva.hpp"
#include "./IUsuario.hpp"
#include "./IPelicula.hpp"

using namespace std;


class Fabrica {

    private:
        static Fabrica* instancia;
        Fabrica();
	public:
        static Fabrica* getInstancia();
        IReserva* getIReserva();
        IUsuario* getIUsuario();
        IPelicula* getIPelicula();

};

#endif
