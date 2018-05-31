#ifndef PELICULA_HH
#define PELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Funcion.hpp";

using namespace std;

class Pelicula {
	private:
		string titulo;
		string poster;
		string sinopsis;
		float promPuntaje;
		float duracion;
		map<string, Funcion *> * funciones;

	public:
		/* Getters */
		string getTitulo();
		string getPoster();
		string getSinopsis();
		float getPromPuntaje();
		float getDuracion();
		map<string, Funcion *> * getFunciones();

		/* Setters */
		void setTitulo(string titulo);
		void setPoster(string poster);
		void setSinopsis(string sinopsis);
		void setPromPuntaje(float promPuntaje);
		void setDuracion(float duracion);

		/* Metodos */
		void seleccionarFuncion(int numero, int cantAsientos);
		int* seleccionarCine(int id);
		int* darListaCine();

        Pelicula();
		Pelicula(string titulo, string poster,string sinopsis, float promPuntaje, float duracion);
		~Pelicula();
};

#endif
