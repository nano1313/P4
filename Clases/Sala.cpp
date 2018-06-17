#include "../Definiciones/Sala.hpp"

Sala::Sala (int numero, int capacidad) {
	this->numero = numero;
	this->capacidad	= capacidad;
	this->ocupado = 0;
}

Sala::Sala(int numero, int capacidad, Cine* cine){
	this->numero = numero;
	this->capacidad	= capacidad;
	this->ocupado = 0;
	this->cine=cine;
}

/* Getters */

int Sala::getNumero() {
	return this->numero;
}

int Sala::getCapacidad() {
	return this->capacidad;
}

int Sala::getOcupado() {
	return this->ocupado;
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

void Sala::setOcupado(int asientos) {
	if (! (this->ocupado + asientos > this->capacidad))
		this->ocupado = this->ocupado + asientos;
}

void Sala::setCine(Cine *cine) {
	this->cine = cine;
}
