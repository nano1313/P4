#include "../Definiciones/Sala.hpp"

Sala::Sala (int numero, int capacidad) {
	this->numero = numero;
	this->capacidad	= capacidad;
}

Sala::Sala(int numero, int capacidad, Cine* cine){
	this->numero = numero;
	this->capacidad	= capacidad;
	this->cine=cine;
}

/* Getters */

int Sala::getNumero() {
	return this->numero;
}

int Sala::getCapacidad() {
	return this->capacidad;
}

Cine* Sala::getCine() {
	return this->cine;
}

/* Setters */

void Sala::setNumero(int numero) {
	this->numero = numero;
}

void Sala::setCapacidad(int capacidad) {
	this->capacidad = capacidad;
}

void Sala::setCine(Cine *cine) {
	this->cine = cine;
}
