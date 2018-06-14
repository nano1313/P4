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
#include "./DtFecha.hpp"


using namespace std;


class IPelicula {

	public:
        // CU en gral
        virtual vector<DtPelicula> darListaPeliculas()=0;
        virtual void seleccionarPelicula2(string titulo)=0;
        virtual vector<DtCine> darListaCines()=0;
        virtual void seleccionarCine(int numCine)=0;

        // CU Alta Cine
        virtual void ingresarDireccion(string calle, int num)=0;
        virtual void ingresarCapacidad(int cap)=0;
				virtual void ingresarPrecioCine(int precio)=0;
        virtual void confirmarAltaCine()=0;
        virtual void cancelar()=0;

        // CU Alta Funcion
        virtual vector<DtSala> darListaSalas()=0;
        virtual void seleccionarSala(int num)=0;

	virtual void altaFuncion(DtFecha fecha, DtHora hora)=0;


        // CU Ver info Pelicula
        virtual DtPelicula seleccionarPelicula1(string titulo)=0;
        virtual vector<DtCine> darListaCinesDeUnaFuncion()=0;
        virtual vector<DtFuncion> seleccionarCineConSusFunciones(int id)=0;

        // CU Eliminar Pelicula
        virtual void confirmarEliminar()=0;
        virtual void finalizar()=0;

        // CU Puntuar Pelicula
        virtual bool yaPuntuo()=0;
        virtual int mostrarPuntaje()=0;
        virtual void ingresarPuntaje(int puntaje)=0;

        virtual void setPelicula(Pelicula * pelicula)=0;
        virtual Pelicula * getPelicula()=0;


    
				//CU ComentarPelicula
				virtual vector<DtComentario> darListaComentarios()=0;
				virtual void crearComentario(string texto)=0;
				virtual void seleccionarComentario(int id)=0;
				virtual void responderComentario(string texto)=0;
				virtual void finalizarComentario()=0;

				//CU Ver Comentarios y puntajes de pelicula
				virtual vector<DtPuntaje> darListaPuntajes()=0;

        virtual void altaPelicula(string titulo, string sinopsis, string portada, float duracion)=0;

};

#endif
