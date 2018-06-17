#include "../Definiciones/Sala.hpp"

Sala::Sala (int numero, int capacidad) {
	this->numero = numero;
	this->capacidad	= capacidad;
	this->ocupados = 0;
}

Sala::Sala(int numero, int capacidad, Cine* cine){
	this->numero = numero;
	this->capacidad	= capacidad;
	this->cine=cine;
	this->ocupados = 0;
}

/* Getters */

int Sala::getNumero() {
	return this->numero;
}

int Sala::getCapacidad() {
	return this->capacidad;
}

int Sala::getOcupados() {
	return this->ocupados;
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

void Sala::setOcupados(int ocupados) {
	if ((this->ocupados + ocupados) <= this->capacidad)
		this->ocupados = this->ocupados + ocupados;
}

void Sala::setCine(Cine *cine) {
	this->cine = cine;
}
