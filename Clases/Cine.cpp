#include "../Definiciones/Cine.hpp"
#include <map>

Cine::Cine(int numero, DtDireccion direccion, int precio) {
	this->numero = numero;
	this->direccion = direccion;
	this->precio = precio;
}

Cine::Cine(int numero, DtDireccion direccion, int precio, map<int, Sala*> salas) {
	this->numero = numero;
	this->direccion = direccion;
	this->precio = precio;
	this->salas = salas;
}

/* Getters */

int Cine::getNumero() {
	return this->numero;
}

int Cine::getPrecio() {
	return this->precio;
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
void Cine::setPrecio(int p) {
	this->precio = p;
}

