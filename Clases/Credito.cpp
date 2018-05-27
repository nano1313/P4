#include "../Definiciones/Credito.hpp"

Credito::Credito (int numero, DtDireccion direccion, string financiera, float descuento) : Tarjeta(numero, direccion) { 
	this->financiera = financiera;
    this->descuento = descuento;
}

/* Getters */

string Credito::getFinanciera() {
	return this->financiera;
}

float Credito::getDescuento() {
	return this->descuento;
}

/* Setters */

void Credito::setFinanciera(string financiera) {
	this->financiera = financiera;
}

void Credito::setDescuento(float descuento) {
	this->descuento = descuento;
}
