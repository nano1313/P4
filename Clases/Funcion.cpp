#include "../Definiciones/Funcion.hpp"

Funcion::Funcion(int numero, DtFecha fecha, DtHora hora, Sala *sala, Pelicula * pel  /*float precio*/) {
	this->numero = numero;
	this->fecha = fecha;
	this->hora = hora;
	this->sala = sala;
	this->pelicula=pel;
}

/* Getters */
int Funcion::getNumero() {
	return this->numero;
}

DtFecha Funcion::getFecha() {
	return this->fecha;
}

DtHora Funcion::getHora() {
	return this->hora;
}

Sala* Funcion::getSala() {
	return this->sala;
}

set<Reserva *> Funcion::getReservas(){
	return this->reservas;
}

Pelicula* Funcion::getPelicula() {
	return this->pelicula;
}

/* Setters */
void Funcion::setNumero(int numero) {
	this->numero = numero;
}

void Funcion::setFecha(DtFecha fecha) {
	this->fecha = fecha;
}

void Funcion::setHora(DtHora hora) {
	this->hora = hora;
}

void Funcion::setSala(Sala *sala) {
	this->sala = sala;
}

void Funcion::destroy(){
	set<Reserva *>::iterator it;
 	for (it = this->reservas.begin(); it!=this->reservas.end(); ++it)
    {
	
		this->reservas.erase(it);
		Reserva *r = *it;
		Usuario *u = r->getUsuario();
		u->eliminarAsociaciones(r);
		r->destroy();
		delete(r);	
		
	}
	this->sala->eliminarFuncion(this->getNumero());
}

void Funcion::aniadirReserva(Reserva *r){
	this->reservas.insert(r);
}

