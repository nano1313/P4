#include "../Definiciones/Comentario.hpp"

Comentario::Comentario(int id, string desc) {
	this->id = id;
	this->desc = desc;
}

/* Getters */

int Comentario::getId() {
	return this->id;
}

string Comentario::getDesc() {
	return this->desc;
}

vector<Comentario> Comentario::getRespuestas(){

	return this->respuestas;
}

/* Setters */

void Comentario::setId(int id) {
	this->id = id;
}
void Comentario::setDesc(string desc) {
	this->desc = desc;
}

void Comentario::setRespuestas(vector<Comentario> respuestas){

	this->respuestas = respuestas;
}
