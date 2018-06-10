#include "../Definiciones/DtHora.hpp"

DtHora::DtHora(int hora, int minutos) {
	this->hora = hora;
	this->minutos = minutos;
}

/* Getters */
unsigned int DtHora::getHora() {
	return this->hora;
}

unsigned int DtHora::getMinutos() {
	return this->minutos;
}

string DtHora::toString(){
	return this->hora + ":" + this->minutos;
}

/* Setters */
void DtHora::setHora(int hora) {
	this->hora = hora;
}

void DtHora::setMinutos(int minutos) {
	this->minutos = minutos;
}
