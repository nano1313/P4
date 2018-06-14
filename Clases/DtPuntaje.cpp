#include "../Definiciones/DtPuntaje.hpp"


DtPuntaje::DtPuntaje(string usuario, int puntaje) {
	this->usuario = usuario;
	this->puntaje = puntaje;
}

/* Getters */

string DtPuntaje::getUsuario() {
	return this->usuario;
}

int DtPuntaje::getPuntaje() {
	return this->puntaje;
}

/* Setters */

void DtPuntaje::setUsuario(string usuario) {
	this->usuario = usuario;
}

void DtPuntaje::setPuntaje(int puntaje) {
	this->puntaje = puntaje;
}
