#include "../Definiciones/Pelicula.hpp"

Pelicula::Pelicula(string titulo, string poster, string sinopsis, float promPuntaje, float duracion) {
	this->titulo = titulo;
	this->poster = poster;
	this->sinopsis = sinopsis;
	this->promPuntaje = promPuntaje;
	this->duracion = duracion;
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

/* Metodos */

int* Pelicula::seleccionarCine(int id) {	return NULL;
	//
}

int* Pelicula::darListaCine() {			return NULL;
	//
}