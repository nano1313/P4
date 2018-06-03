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
        Pelicula * pelicula; // Pelicula guardada en memoria. //
        CtrlPelicula();

    public:
        static CtrlPelicula* getInstancia();

        vector<int> darListaCines(Pelicula * pelicula); //Hecha

        vector<int> seleccionarCine(int id); //Hecha

        vector<DtPelicula> darListaPeliculas(); //Hecha

        DtPelicula seleccionarPelicula1(string titulo);

        vector<string> darListaSalas();

        void seleccionarPelicula2(string titulo);

        void confirmarEliminar();

        void finalizar();

        /* Setters */

        void setPelicula(Pelicula * pelicula);


        /* Getters */

        Pelicula * getPelicula();

};

#endif
