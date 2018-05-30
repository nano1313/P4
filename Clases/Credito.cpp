#include "../Definiciones/Credito.hpp"

Credito::Credito (string financiera, float descuento) : Tarjeta() { 
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
