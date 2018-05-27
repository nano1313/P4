#include "../Definiciones/Funcion.hpp"

Funcion::Funcion(int numero, DtFecha fecha, DtHora hora, float precio) {
	this->numero = numero;
	this->fecha = fecha;
	this->hora = hora;
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

float Funcion::getPrecio() {
	return this->precio;
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

void Funcion::setPrecio(float precio) {
	this->precio = precio;
}

