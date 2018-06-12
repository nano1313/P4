#include "../Definiciones/Reserva.hpp"


Reserva::Reserva (int cantAsientos ,float costo) {
	this->cantAsientos = cantAsientos;
	this->costo = costo;
}

Reserva::Reserva (int cantAsientos ,float costo,Tarjeta *t) {  //Ezequiel inicio

	this->cantAsientos = cantAsientos;
	this->costo = costo;
	this->tarjeta = t;
//    u->setReserva(this)

}
// Ezequiel Fin


/* Getters */

int Reserva::getCantAsientos() {
	return this->cantAsientos;
}

float Reserva::getCosto() {
	return this->costo;
}

Funcion * Reserva::getFuncion() {
	return this->funcion;
}

Tarjeta * Reserva::getTarjeta() {
	return this->tarjeta;
}

/* Setters */

void Reserva::setCantAsientos(int cantAsientos) {
	this->cantAsientos = cantAsientos;
}

void Reserva::setCosto(float costo) {
	this->costo = costo;
}

void Reserva::setUsuario(Usuario *u) {
	this->usuario = u;
}
