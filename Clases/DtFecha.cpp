#include "../Definiciones/DtFecha.hpp"

DtFecha::DtFecha(){
	dia=0;
	mes=0;
	anio=0;
}

DtFecha::DtFecha(int _dia, int _mes, int _anio){
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
	 dia=d;
}

void DtFecha::setMes(int m){
	 mes=m;
}

void DtFecha::setAnio(int a){
	 anio=a;
}
/*
ostream& DtFecha::operator<<(ostream& cout, DtFecha& f){
	cout<<f.getDia()<<"/"<<f.getMes()<<"/"<<f.getAnio();
}
*/

void DtFecha::operator=(const string& s){
	dia=stoi(s.substr(0,2));
	mes=stoi(s.substr(3,2));
	anio=stoi(s.substr(6,4));
}
bool DtFecha::operator<(const DtFecha& r){
	return (anio<r.anio) || (anio==r.anio && mes<r.mes) || (anio==r.anio && mes==r.mes && dia<r.dia);
}
