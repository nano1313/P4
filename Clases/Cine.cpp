#include "../Definiciones/Cine.hpp"

Cine::Cine(int numero, DtDireccion direccion) {
	this->numero = numero;
	this->direccion = direccion;
}

/* Getters */

int Cine::getNumero() {
	return this->numero;
}

DtDireccion Cine::getDireccion() {
	return this->direccion;
}

/* Setters */

void Cine::setNumero(int numero) {
	this->numero = numero;
}
void Cine::setDireccion(DtDireccion direccion) {
	this->direccion = direccion;
}
