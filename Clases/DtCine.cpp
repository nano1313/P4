#include "../Definiciones/DtCine.hpp"

DtCine::DtCine(int numero, DtDireccion direccion, int precio) {
	this->numero = numero;
	this->direccion = direccion;
	this->precio = precio;
}

/* Getters */

int DtCine::getNumero() {
	return this->numero;
}

int DtCine::getPrecio() {
	return this->precio;
}

DtDireccion DtCine::getDireccion() {
	return this->direccion;
}

/* Setters */

void DtCine::setNumero(int numero) {
	this->numero = numero;
}

void DtCine::setDireccion(DtDireccion direccion) {
	this->direccion = direccion;
}
void DtCine::setPrecio(int p) {
	this->precio = p;
}

