#include "../Definiciones/Puntaje.hpp"

Puntaje::Puntaje (int valor) {
	this->valor = valor;
}

/* Getters */

int Puntaje::getValor() {
	return this->valor;
}
Usuario * Puntaje::getUsuario(){
	return this->usuario;
}

/* Setters */

void Puntaje::setValor(int valor) {
	this->valor = valor;
}

void Puntaje::setUsuario(Usuario * usuario) {
	this->usuario = usuario;
}