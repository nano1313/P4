#include "../Definiciones/Credito.hpp"
#include "../Definiciones/Tarjeta.hpp"

Credito::Credito (string financiera, int descuento) : Tarjeta() { 
	this->financiera = financiera;
    this->descuento = descuento;
}

/* Getters */

string Credito::getFinanciera() {
	return this->financiera;
}

int Credito::getDescuento() {
	return this->descuento;
}

/* Setters */

void Credito::setFinanciera(string financiera) {
	this->financiera = financiera;
}

void Credito::setDescuento(int descuento) {
	this->descuento = descuento;
}

Credito::~Credito(){}
