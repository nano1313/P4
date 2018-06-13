#include "../Definiciones/Reserva.hpp"


Reserva::Reserva (int cantAsientos ,float costo) {
	this->cantAsientos = cantAsientos;
	this->costo = costo;
}

Reserva::Reserva (int cantAsientos ,float costo,Tarjeta *t,Funcion *f) {  //Ezequiel inicio

	this->cantAsientos = cantAsientos;
	this->costo = costo;
<<<<<<< HEAD
	this->tarjeta = t;
//    u->setReserva(this)
=======
	this->t = t;
//  u->setReserva(this)
	this->f = f;
>>>>>>> d1a5ea2210a1330088b170f9edd8543d3b9f1d78

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
<<<<<<< HEAD

Tarjeta * Reserva::getTarjeta() {
	return this->tarjeta;
=======
Usuario * Reserva::getUsuario(){
	return this->u;
>>>>>>> d1a5ea2210a1330088b170f9edd8543d3b9f1d78
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
void Reserva::setFuncion(Funcion *f){
	this->f = f;
}

	/* Metodos */

void Reserva::destroy(){
	this->u=NULL;
}

