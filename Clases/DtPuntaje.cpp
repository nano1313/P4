#include "../Definiciones/DtPuntaje.hpp"


DtPuntaje::DtPuntaje(string usuario, unsigned int puntaje) {
	this->usuario = usuario;
	this->puntaje = puntaje;
}

/* Getters */

string DtPuntaje::getUsuario() {
	return this->usuario;
}

unsigned int DtPuntaje::getPuntaje() {
	return this->puntaje;
}

/* Setters */

void DtPuntaje::setUsuario(string usuario) {
	this->usuario = usuario;
}

void DtPuntaje::setPuntaje(unsigned int puntaje) {
	this->puntaje = puntaje;
}
