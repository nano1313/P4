#include "../Definiciones/Reserva.hpp"

Reserva::Reserva (int cantAsientos ,float costo) {
	this->cantAsientos = cantAsientos;
	this->costo = costo;
}

/* Getters */

int Reserva::getCantAsientos() {
	return this->cantAsientos;
}

float Reserva::getCosto() {
	return this->costo;
}


/* Setters */

void Reserva::setCantAsientos(int cantAsientos) {
	this->cantAsientos = cantAsientos;
}

void Reserva::setCosto(float costo) {
	this->costo = costo;
}

