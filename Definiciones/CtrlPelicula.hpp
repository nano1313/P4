#ifndef CTRLPELICULA_HH
#define CTRLPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./IPelicula.hpp"
#include "./DtPelicula.hpp"
#include "./Pelicula.hpp"
#include "./Cine.hpp"
#include "./Sala.hpp"

using namespace std;


class CtrlPelicula : public IPelicula {

    private:
        static CtrlPelicula* instancia;
        map<string, Pelicula *> peliculas; // Coleccion gral de Pelicula //
        map<int, Cine *> cines; // Coleccion gral de Cines //
        Pelicula * pelicula; // Pelicula guardada en memoria. //
        Cine * cine; // Cine guardado en memoria //
        Sala * sala; // Sala guardada en memoria //
        CtrlPelicula();

    public:
        static CtrlPelicula* getInstancia();//Hecha 
        vector<DtPelicula> darListaPeliculas(); //Hecha
        DtPelicula seleccionarPelicula1(string titulo);//Hecha
        void seleccionarPelicula2(string titulo);//Hecha
        vector<int> darListaCines(); //Hecha
        void seleccionarCine(int numCine);//Hecha
        vector<int> darListaCinesDeUnaFuncion(Pelicula * pelicula); //Hecha
        vector<int> seleccionarCineConSusFunciones(int id); //Hecha  
        vector<string> darListaSalas();
        void confirmarEliminar();
        void finalizar();

        /* Setters */

        void setPelicula(Pelicula * pelicula);
        void setCine(Cine *cine);
        void setSala(Sala *sala);


        /* Getters */

        Pelicula * getPelicula();
        Cine * getCine();
        Sala * getSala();

};

#endif
