#include "../Definiciones/Tarjeta.hpp"

Tarjeta::Tarjeta (int numero, DtDireccion direccion) {
	this->numero = numero;
    this->direccion = direccion;
}

/* Getters */

int Tarjeta::getNumero() {
	return this->numero;
}

DtDireccion Tarjeta::getDireccion() {
	return this->direccion;
}

/* Setters */

void Tarjeta::setNumero(int numero) {
	this->numero = numero;
}

void Tarjeta::setDireccion(DtDireccion direccion) {
	this->direccion = direccion;
}
