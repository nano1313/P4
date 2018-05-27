#include "../Definiciones/DtPago.hpp"


DtPago::DtPago(unsigned int precio, unsigned int descuento) {
	this->precio = precio;
	this->descuento = descuento;
}

/* Getters */

unsigned int DtPago::getPrecio() {
	return this->precio;
}

unsigned int DtPago::getDescuento() {
	return this->descuento;
}

/* Setters */

void DtPago::setPrecio(unsigned int precio) {
	this->precio = precio;
}

void DtPago::setDescuento(unsigned int descuento) {
	this->descuento = descuento;
}
