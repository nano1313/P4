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
        Comentario * comentario;
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
        void ingresarPrecioCine(int precio); //Hecha
        void confirmarAltaCine(); //Hecha
        void cancelar(); //Hecha
        vector<DtSala> darListaSalas(); //Hecha
        void seleccionarSala(int num); //Hecha
        void confirmarEliminar(); //Hecha
        void finalizar(); //Hecha
        bool yaPuntuo(); //Hecha
        int mostrarPuntaje(); //Hecha
        void ingresarPuntaje(int puntaje); //Hecha
        void altaPelicula(string titulo, string sinopsis, string portada, float duracion); //Hecha

	void altaFuncion(DtFecha fecha, DtHora hora);
	
        //CU Comentar pelicula
        vector<DtComentario> darListaComentarios(); //Hecha
        void crearComentario(string texto); //Hecha
        void responderComentario(string texto); //Hecha
        void seleccionarComentario(int id); //Hecha
        void finalizarComentario(); //Hecha

        //CU Ver Comentarios y puntajes de pelicula
        vector<DtPuntaje> darListaPuntajes(); //Hecha

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
