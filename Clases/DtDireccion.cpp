#include "../Definiciones/DtDireccion.hpp"

DtDireccion::DtDireccion(string calle, int numero) {
	this->calle = calle;
	this->numero = numero;
}

DtDireccion::DtDireccion() {
	this->calle = "";
	this->numero = 0;
}

/* Getters */

string DtDireccion::getCalle() {
	return this->calle;
}

int DtDireccion::getNumero() {
	return this->numero;
}

/* Setters */

void DtDireccion::setCalle(string calle) {
	this->calle = calle;
}

void DtDireccion::setNumero(int numero) {
	this->numero = numero;
}
