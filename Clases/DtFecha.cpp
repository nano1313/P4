#include "../Definiciones/DtFecha.hpp"

DtFecha::DtFecha(){
	dia=0;
	mes=0;
	anio=0;
}

DtFecha::DtFecha(int _dia, int _mes, int _anio){
	if (_dia>31 || _dia <1){
		throw invalid_argument("DIA NO VALIDO");
	}else if(_mes>31 || _mes <1){
		throw invalid_argument("MES NO VALIDO");
		
	}else if(_anio <0){
		throw invalid_argument("ANIO NO VALIDO");
	}
	dia=_dia;
	mes=_mes;
	anio=_anio;
}

string DtFecha::toString(){

		string dia_s, mes_s, anio_s;
		dia_s = to_string(dia);
		anio_s = to_string(anio);
		mes_s = to_string(mes);
		return (dia_s + "/" + mes_s + "/" + anio_s) ;
}

unsigned int DtFecha::getDia(){
	return dia;
}

unsigned int DtFecha::getMes(){
	return mes;
}

unsigned int DtFecha::getAnio(){
	return anio;
}

void DtFecha::setDia(int d){
	if (d>31 ||  d<1){
		throw invalid_argument("DIA NO VALIDO");
	}
	 dia=d;
}

void DtFecha::setMes(int m){
	if(m>12 || m <1){
		throw invalid_argument("MES NO VALIDO");
		
	}
	 mes=m;
}

void DtFecha::setAnio(int a){
	if (a <1){
		throw invalid_argument("ANIO NO VALIDO");
	}
	 anio=a;
}

void DtFecha::operator=(const string& s){
	int _dia=stoi(s.substr(0,2));
	int _mes=stoi(s.substr(3,2));
	int _anio=stoi(s.substr(6,4));
	if (_dia>31 || _dia <1){
		throw invalid_argument("DIA NO VALIDO");
	}else if(_mes>31 || _mes <1){
		throw invalid_argument("MES NO VALIDO");
		
	}else if(_anio <0){
		throw invalid_argument("ANIO NO VALIDO");
	}
	dia=_dia;
	mes=_mes;
	anio=_anio;
}
bool DtFecha::operator<(const DtFecha& r){
	return (anio<r.anio) || (anio==r.anio && mes<r.mes) || (anio==r.anio && mes==r.mes && dia<r.dia);
}

bool DtFecha::operator==(const DtFecha& r){
	return (anio==r.anio && mes==r.mes && dia==r.dia);
}
