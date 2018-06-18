#ifndef PELICULA_HH
#define PELICULA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include "Funcion.hpp"
#include "Puntaje.hpp"
#include "Comentario.hpp"

using namespace std;

class Funcion;
class Puntaje;
class Comentario;

class Pelicula {
	private:
		string titulo;
		string poster;
		string sinopsis;
		float promPuntaje;
		int idgen = 0;
		int duracion;
		int cantidadComentarios;
		map<int, Funcion *> funciones;
		map<string, Puntaje *> puntajes;
		map<int, Comentario *> comentarios;

	public:
		void addPuntaje(string usr, int puntos);
		/* Getters */
		string getTitulo();
		string getPoster();
		string getSinopsis();
		float getPromPuntaje();
		int getDuracion();
		int getCantidadComentarios();
		int getIdGen();
		map<int, Funcion *> getFunciones();
		map<string, Puntaje *> getPuntajes();
		map<int, Comentario *> getComentarios();
		Comentario * getComentario(int num);
		Comentario * getComentario2(Comentario *c,int id);
		
		/* Setters */
		void setTitulo(string titulo);
		void setPoster(string poster);
		void setSinopsis(string sinopsis);
		void setPromPuntaje(float promPuntaje);
		void setDuracion(int duracion);
		void masUnoComentario();
		void generarId();

		/* Metodos */
		Funcion * seleccionarFuncion(int numero);
		//int* seleccionarCine(int id);
		//int* darListaCine();
		void agregarNuevoComentario(Comentario * comentario);
		void agregarNuevaRespuesta(Comentario * comentario, int padre); /* Respuesta a comentario, padre es el id del comentario padre */
		void agregarFuncion(Funcion *f);
		void destroy();        	

        Pelicula();
		Pelicula(string titulo, string poster,string sinopsis, int duracion);
		~Pelicula();
};

#endif
