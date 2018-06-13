#include "../Definiciones/Reserva.hpp"


Reserva::Reserva (int cantAsientos ,float costo) {
	this->cantAsientos = cantAsientos;
	this->costo = costo;
}

Reserva::Reserva (int cantAsientos ,float costo,Tarjeta *t,Funcion *f) {  //Ezequiel inicio

	this->cantAsientos = cantAsientos;
	this->costo = costo;
	this->t = t;
//  u->setReserva(this)
	this->f = f;

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
	return this->f;
}

Tarjeta * Reserva::getTarjeta() {
	return this->t;
}

Usuario * Reserva::getUsuario(){
	return this->u;
}

/* Setters */

void Reserva::setCantAsientos(int cantAsientos) {
	this->cantAsientos = cantAsientos;
}

void Reserva::setCosto(float costo) {
	this->costo = costo;
}

void Reserva::setUsuario(Usuario *u) {
	this->u = u;
}
void Reserva::setFuncion(Funcion *f){
	this->f = f;
}

	/* Metodos */

void Reserva::destroy(){
	this->u=NULL;
}

