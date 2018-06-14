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
		float duracion;
		int cantidadComentarios;
		map<int, Funcion *> funciones;
		map<string, Puntaje *> puntajes;
		map<int, Comentario *> comentarios;

	public:
		/* Getters */
		string getTitulo();//HECHA
		string getPoster();//HECHA
		string getSinopsis();//HECHA
		float getPromPuntaje();//HECHA
		float getDuracion();//HECHA
		int getCantidadComentarios();//HECHA
		map<int, Funcion *> getFunciones();//HECHA
		map<string, Puntaje *> getPuntajes();//HECHA
		map<int, Comentario *> getComentarios();//HECHA
		
		/* Setters */
		void setTitulo(string titulo);//HECHA
		void setPoster(string poster);//HECHA
		void setSinopsis(string sinopsis);//HECHA
		void setPromPuntaje(float promPuntaje);//HECHA
		void setDuracion(float duracion);//HECHA
		void masUnoComentario();//HECHA

		/* Metodos */
		Funcion * seleccionarFuncion(int numero);
		//int* seleccionarCine(int id);
		//int* darListaCine();
		void agregarNuevoComentario(Comentario * comentario); //HECHA
		void agregarNuevaRespuesta(Comentario * comentario, int padre); /* Respuesta a comentario, padre es el id del comentario padre */ //HECHA

		void destroy(); //HECHA       	

        Pelicula();
		Pelicula(string titulo, string poster,string sinopsis, float duracion);//HECHA
		~Pelicula();
};

#endif
