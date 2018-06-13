#include "../Definiciones/Pelicula.hpp"

Pelicula::Pelicula(string titulo, string poster, string sinopsis, float promPuntaje, float duracion) {
	this->titulo = titulo;
	this->poster = poster;
	this->sinopsis = sinopsis;
	this->promPuntaje = promPuntaje;
	this->duracion = duracion;
	this->cantidadComentarios = 0;

}

/* Getters */

string Pelicula::getTitulo() {
	return this->titulo;
}

string Pelicula::getPoster() {
	return this->poster;
}

string Pelicula::getSinopsis() {
	return this->sinopsis;
}

float Pelicula::getPromPuntaje() {
	return this->promPuntaje;
}

float Pelicula::getDuracion() {
	return this->duracion;
}

map<string, Puntaje *> Pelicula::getPuntajes() {
	return this->puntajes;
}

map<int, Funcion *> Pelicula::getFunciones() {
	return this->funciones;
}

map<int, Comentario *> Pelicula::getComentarios() {
	return this->comentarios;
}

/* Setters */

void Pelicula::setTitulo(string nombre) {
	this->titulo = nombre;
}

void Pelicula::setPoster(string poster) {
	this->poster = poster;
}

void Pelicula::setSinopsis(string sinopsis) {
	this->sinopsis = sinopsis;
}

void Pelicula::setPromPuntaje(float promPuntaje) {
	this->promPuntaje = promPuntaje;
}

void Pelicula::setDuracion(float duracion) {
	this->duracion = duracion;
}

void Pelicula::masUnoComentario() {
	this->cantidadComentarios++;
}

/* Metodos */

int* Pelicula::seleccionarCine(int id) {	return NULL;
	//
}

int* Pelicula::darListaCine() {			return NULL;
	//
}


Funcion * Pelicula::seleccionarFuncion(int numero) {
	map<int, Funcion *>::iterator it = this->funciones.begin();

	while(it->first!=numero){
		it++;
	}

	return it->second;
}

void Pelicula::agregarNuevoComentario(Comentario * comentario) {
	this->comentarios[comentario->getId()] = comentario;
}

void Pelicula::agregarNuevaRespuesta(Comentario * comentario, int padre) {
	vector<Comentario*> respuestas = this->comentarios[padre]->getRespuestas();
	respuestas.push_back(comentario);
}