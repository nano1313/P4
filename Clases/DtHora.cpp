#include "../Definiciones/DtHora.hpp"

DtHora::DtHora(int hora, int minutos) {
	if (hora>23 || hora <0){
		throw invalid_argument("HORA NO VALIDO");
	}else if(minutos>59 || minutos <0){
		throw invalid_argument("MINUTOS NO VALIDO");
		
	}

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
	if (hora>23 || hora <0){
		throw invalid_argument("HORA NO VALIDO");
	}

	this->hora = hora;
}

void DtHora::setMinutos(int minutos) {
	if(minutos>59 || minutos <0){
		throw invalid_argument("MINUTOS NO VALIDO");
		
	}

	this->minutos = minutos;
}

void DtHora::operator=(const string& s){
	int _hora=stoi(s.substr(0,2));
	int _minutos=stoi(s.substr(3,2));
	if (_hora>23 || _hora <0){
		throw invalid_argument("HORA NO VALIDO");
	}else if(_minutos>59 || _minutos <0){
		throw invalid_argument("MINUTOS NO VALIDO");
		
	}

	this->hora=_hora;
	this->minutos=_minutos;
}

bool DtHora::operator<(const DtHora& r){
	return (hora<r.hora) || (hora==r.hora && minutos<r.minutos);
}

DtHora DtHora::operator+(const DtHora& r){
	DtHora h = DtHora();
	h.setHora(hora + r.hora);
	h.setMinutos(minutos + r.minutos);

	return h;
}

