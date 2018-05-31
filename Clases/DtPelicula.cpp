#include "../Definiciones/DtPelicula.hpp"

DtPelicula::DtPelicula(string titulo, string poster, string sinopsis, float promPuntaje, float duracion) {
	this->titulo = titulo;
	this->poster = poster;
	this->sinopsis = sinopsis;
	this->promPuntaje = promPuntaje;
	this->duracion = duracion;
}

/* Getters */

string DtPelicula::getTitulo() {
	return this->titulo;
}

string DtPelicula::getPoster() {
	return this->poster;
}

string DtPelicula::getSinopsis() {
	return this->sinopsis;
}

float DtPelicula::getPromPuntaje() {
	return this->promPuntaje;
}

float DtPelicula::getDuracion() {
	return this->duracion;
}

/* Setters */

void DtPelicula::setTitulo(string nombre) {
	this->titulo = nombre;
}

void DtPelicula::setPoster(string poster) {
	this->poster = poster;
}

void DtPelicula::setSinopsis(string sinopsis) {
	this->sinopsis = sinopsis;
}

void DtPelicula::setPromPuntaje(float promPuntaje) {
	this->promPuntaje = promPuntaje;
}

void DtPelicula::setDuracion(float duracion) {
	this->duracion = duracion;
}
