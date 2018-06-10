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

map<string, Puntaje *>* Pelicula::getPuntajes() {
	return NULL;
}

Funcion * Pelicula::seleccionarFuncion(int numero) {
	map<int, Funcion *>::iterator it = this->funciones->begin();

	while(it->first!=numero){
		it++;
	}

	return it->second;
}
void Pelicula::destroy(){
	map<string, Puntaje *>::iterator it1 = this->puntajes->begin();
 	//map<int, Cine *>::iterator it = cines.begin();

	for (it1 = this->puntajes->begin(); it1 !=this->puntajes->end(); ++it1)
    {
		this->puntajes->erase(it1->first);
		delete(it1->second);
    }
	map<int, Funcion *>::iterator it2;
 	for (it2 = this->funciones->begin(); it2 !=this->funciones->end(); ++it2)
    {
		this->funciones->erase(it2->first);
		it2->second->destroy();
		delete(it2->second);
		
	}
	
}
