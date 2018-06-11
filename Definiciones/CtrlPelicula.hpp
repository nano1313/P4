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
#include "./Usuario.hpp"
#include "./DtFuncion.hpp"
#include "./Puntaje.hpp"
#include "./DtPuntaje.hpp"
#include "./DtComentario.hpp"

using namespace std;


class CtrlPelicula : public IPelicula {

    private:
        static CtrlPelicula* instancia;
        map<string, Pelicula *> peliculas; // Coleccion gral de Pelicula //
        map<int, Cine *> cines; // Coleccion gral de Cines //
        Pelicula * pelicula; // Pelicula guardada en memoria. //
        Cine * cine; // Cine guardado en memoria //
        Sala * sala; // Sala guardada en memoria //
        Usuario * usuario;
        DtDireccion direccionCine; // Direccion del Cine a crear //
        vector<int> capacidades; // Capacidades de las Salas del Cine a crear //
        int precioCine; // Precio del Cine a agregar //
        int cantCines; // Para poder controlar el numero de los Cines //

        CtrlPelicula();

    public:
        static CtrlPelicula* getInstancia();//Hecha
        vector<DtPelicula> darListaPeliculas(); //Hecha
        DtPelicula seleccionarPelicula1(string titulo);//Hecha
        void seleccionarPelicula2(string titulo);//Hecha
        vector<DtCine> darListaCines(); //Hecha
        void seleccionarCine(int numCine);//Hecha
        vector<DtCine> darListaCinesDeUnaFuncion(); //Hecha
        vector<DtFuncion> seleccionarCineConSusFunciones(int id); //Hecha
        void ingresarDireccion(string calle, int num); //Hecha
        void ingresarCapacidad(int cap); //Hecha
        void confirmarAltaCine(); //Hecha
        void cancelar(); //Hecha
        vector<string> darListaSalas();
        void confirmarEliminar();
        void finalizar();
        bool yaPuntuo();
        int mostrarPuntaje();
        void ingresarPuntaje(int puntaje);

        //CU Comentar pelicula
        vector<DtComentario> darListaComentarios();
/*      virtual void crearComentario(string texto);
        virtual void seleccionarComentario(int id);
        virtual void responderComentario(string texto);
        virtual void finalizarComentario();

        //CU Ver Comentarios y puntajes de pelicula
        virtual vector<DtPuntaje> darListaPuntajes();
*/
        /* Setters */

        void setPelicula(Pelicula * pelicula);
        void setCine(Cine *cine);
        void setSala(Sala *sala);
        void setPrecioCine(int precio);


        /* Getters */

        Pelicula * getPelicula();
        Cine * getCine();
        Sala * getSala();
        int getPrecioCine();

};

#endif
