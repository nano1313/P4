#ifndef IPELICULA_HH
#define IPELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <vector>

#include "./DtPelicula.hpp"
#include "./Pelicula.hpp"
#include "./DtFuncion.hpp"
#include "./DtCine.hpp"
#include "./DtPuntaje.hpp"
#include "./DtComentario.hpp"


using namespace std;


class IPelicula {

	public:

        // CU en gral
        virtual vector<DtPelicula> darListaPeliculas();
        virtual void seleccionarPelicula2(string titulo);
        virtual vector<DtCine> darListaCines();
        virtual void seleccionarCine(int numCine);

        // CU Alta Cine
        virtual void ingresarDireccion(string calle, int num);
        virtual void ingresarCapacidad(int cap);
				virtual void ingresarPrecioCine(int precio);
        virtual void confirmarAltaCine();
        virtual void cancelar();

        // CU Alta Funcion
        virtual vector<string> darListaSalas();

        // CU Ver info Pelicula
        virtual DtPelicula seleccionarPelicula1(string titulo);
        virtual vector<DtCine> darListaCinesDeUnaFuncion();
        virtual vector<DtFuncion> seleccionarCineConSusFunciones(int id);

        // CU Eliminar Pelicula
        virtual void confirmarEliminar();
        virtual void finalizar();

        // CU Puntuar Pelicula
        virtual bool yaPuntuo();
        virtual int mostrarPuntaje();
        virtual void ingresarPuntaje(int puntaje);

        virtual void setPelicula(Pelicula * pelicula);
        virtual Pelicula * getPelicula();

				//CU ComentarPelicula
				virtual vector<DtComentario> darListaComentarios();
				virtual void crearComentario(string texto);
				virtual void seleccionarComentario(int id);
				virtual void responderComentario(string texto);
				virtual void finalizarComentario();

				//CU Ver Comentarios y puntajes de pelicula
				virtual vector<DtPuntaje> darListaPuntajes();

};

#endif
