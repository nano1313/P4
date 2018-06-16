#include "../Definiciones/Comentario.hpp"

Comentario::Comentario(int id, int id_padre, string desc) {
	this->id = id;
	this->desc = desc;
	this->id_padre = id_padre;
	//vector<Comentario *> respuestas;
	this->cantRespuestas = 0;
}

/* Getters */

int Comentario::getId() {
	return this->id;
}

int Comentario::getIdPadre() {
	return this->id_padre;
}

string Comentario::getDesc() {
	return this->desc;
}

vector<Comentario *> Comentario::getRespuestas(){

	return this->respuestas;
}

Usuario * Comentario::getUsuario(){
	return this->usuario;
}

/* Setters */

void Comentario::setId(int id) {
	this->id = id;
}

void Comentario::setIdPadre(int id) {
	this->id_padre = id;
}

void Comentario::setDesc(string desc) {
	this->desc = desc;
}

void Comentario::setRespuestas(vector<Comentario *> respuestas){

	this->respuestas = respuestas;
}

void Comentario::setUsuario(Usuario * usuario) {
	this->usuario = usuario;
}

void Comentario::masUnaRespuesta() {
	this->cantRespuestas++;
}

void Comentario::agregarRespuesta(Comentario * comentario) {
	this->respuestas.push_back(comentario);
}
void Comentario::destroy(){
	vector <Comentario *> :: iterator it;
	this->usuario=NULL;
	for (it = this->respuestas.begin(); it !=this->respuestas.end(); ++it)
    {
		this->respuestas.erase(it);
		delete(*it);
	}
}