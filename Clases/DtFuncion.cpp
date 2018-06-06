#include "../Definiciones/DtFuncion.hpp"

DtFuncion::DtFuncion(int numero, DtFecha fecha, DtHora hora) {
	this->numero = numero;
	this->fecha = fecha;
	this->hora = hora;
}

/* Getters */

int DtFuncion::getNumero() {
	return this->numero;
}

DtFecha DtFuncion::getFecha() {
	return this->fecha;
}

DtHora DtFuncion::getHora() {
	return this->hora;
}


/* Setters */
void DtFuncion::setNumero(int numero) {
	this->numero = numero;
}

void DtFuncion::setFecha(DtFecha fecha) {
	this->fecha = fecha;
}

void DtFuncion::setHora(DtHora hora) {
	this->hora = hora;
}