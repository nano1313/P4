#include "../Definiciones/DtComentario.hpp"

DtComentario::DtComentario(int id, string usuario, string descripcion/*, DtComentario respuestas*/) {
	this->id = id;
	this->usuario = usuario;
	this->descripcion = descripcion;
//    this->respuestas = respuestas;
}

/* Getters */

string DtComentario::getUsuario() {
	return this->usuario;
}

string DtComentario::getDescripcion() {
	return this->descripcion;
}
/*
DtComentario DtComentario::getRespuestas() {
	return this->respuestas;
}

*/
/* Setters */

void DtComentario::setUsuario(string usuario) {
	this->usuario = usuario;
}

void DtComentario::setDescripcion(string descripcion) {
	this->descripcion = descripcion;
}
/*
void DtComentario::setRespuestas(DtComentario respuestas) {
	this->respuestas = respuestas;
}
*/