#include "../Definiciones/DtSala.hpp"

DtSala::DtSala (int numero, int capacidad) {
	this->numero = numero;
	this->capacidad	= capacidad;
}

DtSala::DtSala () {
	this->numero = 0;
	this->capacidad	= 0;
}

/* Getters */

int DtSala::getNumero() {
	return this->numero;
}

int DtSala::getCapacidad() {
	return this->capacidad;
}

/* Setters */

void DtSala::setNumero(int numero) {
	this->numero = numero;
}

void DtSala::setCapacidad(int capacidad) {
	this->capacidad = capacidad;
}
