#include "../Definiciones/DtComentario.hpp"

DtComentario::DtComentario(int id, string usuario, string descripcion, vector<DtComentario> respuestas) {
	this->id = id;
	this->usuario = usuario;
	this->descripcion = descripcion;
    this->respuestas = respuestas;
}

/* Getters */

int DtComentario::getId() {
	return this->id;
}

string DtComentario::getUsuario() {
	return this->usuario;
}

string DtComentario::getDescripcion() {
	return this->descripcion;
}

vector<DtComentario> DtComentario::getRespuestas() {
	return this->respuestas;
}

/* Setters */

void DtComentario::setUsuario(string usuario) {
	this->usuario = usuario;
}

void DtComentario::setDescripcion(string descripcion) {
	this->descripcion = descripcion;
}

void DtComentario::setRespuestas(vector<DtComentario> respuestas) {
	this->respuestas = respuestas;
}
