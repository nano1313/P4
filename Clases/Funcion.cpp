#include "../Definiciones/Funcion.hpp"

Funcion::Funcion(int numero, DtFecha fecha, DtHora hora, Sala *sala  /*float precio*/) {
	this->numero = numero;
	this->fecha = fecha;
	this->hora = hora;
	this->sala = sala;
}

/* Getters */
int Funcion::getNumero() {
	return this->numero;
}

DtFecha Funcion::getFecha() {
	return this->fecha;
}

DtHora Funcion::getHora() {
	return this->hora;
}

Sala* Funcion::getSala() {
	return this->sala;
}

/*
float Funcion::getPrecio() {
	return this->precio;
}
*/

set<int, Reserva *> Funcion::getReservas(){
	return this->reservas;
}

Pelicula* Funcion::getPelicula() {
	return this->pelicula;
}

/* Setters */
void Funcion::setNumero(int numero) {
	this->numero = numero;
}

void Funcion::setFecha(DtFecha fecha) {
	this->fecha = fecha;
}

void Funcion::setHora(DtHora hora) {
	this->hora = hora;
}

void Funcion::setSala(Sala *sala) {
	this->sala = sala;
}
/*
void Funcion::setPrecio(float precio) {
	this->precio = precio;
}
*/
