#include "../Definiciones/Sala.hpp"

Sala::Sala (int numero, int capacidad) {
	this->numero = numero;
	this->capacidad	= capacidad;
}

/* Getters */

int Sala::getNumero() {
	return this->numero;
}

int Sala::getCapacidad() {
	return this->capacidad;
}


/* Setters */

void Sala::setNumero(int numero) {
	this->numero = numero;
}

void Sala::setCapacidad(int capacidad) {
	this->capacidad = capacidad;
}