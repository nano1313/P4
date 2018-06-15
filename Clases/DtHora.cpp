#include "../Definiciones/DtHora.hpp"

DtHora::DtHora(int hora, int minutos) {
	this->hora = hora;
	this->minutos = minutos;
}

DtHora::DtHora() {
	this->hora = 0;
	this->minutos = 0;
}

/* Getters */
unsigned int DtHora::getHora() {
	return this->hora;
}

unsigned int DtHora::getMinutos() {
	return this->minutos;
}

string DtHora::toString(){
	string horaStr, minutosStr;
	if (this->hora<10){
		horaStr="0" + to_string(this->hora);
	}
	else{
		horaStr=to_string(this->hora);
	}

	if (this->minutos<10){
		minutosStr="0" + to_string(this->minutos);
	}
	else{
		minutosStr=to_string(this->minutos);
	}

	return horaStr + ":" + minutosStr;
}

/* Setters */
void DtHora::setHora(int hora) {
	this->hora = hora;
}

void DtHora::setMinutos(int minutos) {
	this->minutos = minutos;
}

void DtHora::operator=(const string& s){
	this->hora=stoi(s.substr(0,2));
	this->minutos=stoi(s.substr(3,2));
}

