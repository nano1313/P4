#ifndef CTRLPELICULA_HH
#define CTRLPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./IPelicula.hpp"
#include "./DtPelicula.hpp"
#include "./Pelicula.hpp"
#include "./Cine.hpp"

using namespace std;


class CtrlPelicula : public IPelicula {

    private:
        static CtrlPelicula* instancia;
        map<string, Pelicula *> peliculas;
        map<string, Cine *> cines;
        
        CtrlPelicula();
        
        public:
        static CtrlPelicula* getInstancia();

        vector<int> darListaCines();

        vector<int> seleccionarCine(int id);

        vector<DtPelicula> darListaPeliculas();

        DtPelicula seleccionarPelicula1(string titulo);

        void seleccionarPelicula2(string titulo);

        void confirmarEliminar();

        void finalizar();
        
};

#endif
