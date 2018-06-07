#ifndef PELICULA_HH
#define PELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include "Funcion.hpp"
#include "Puntaje.hpp"

using namespace std;

class Pelicula {
	private:
		string titulo;
		string poster;
		string sinopsis;
		float promPuntaje;
		float duracion;
		map<int, Funcion *> * funciones;
		map<string, Puntaje *> * puntajes;

	public:
		/* Getters */
		string getTitulo();
		string getPoster();
		string getSinopsis();
		float getPromPuntaje();
		float getDuracion();
		map<int, Funcion *> * getFunciones();
		map<string, Puntaje *> * getPuntajes();

		/* Setters */
		void setTitulo(string titulo);
		void setPoster(string poster);
		void setSinopsis(string sinopsis);
		void setPromPuntaje(float promPuntaje);
		void setDuracion(float duracion);

		/* Metodos */
		Funcion * seleccionarFuncion(int numero);
		int* seleccionarCine(int id);
		int* darListaCine();

        Pelicula();
		Pelicula(string titulo, string poster,string sinopsis, float promPuntaje, float duracion);
		~Pelicula();
};

#endif
