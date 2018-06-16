#include "../Definiciones/Comentario.hpp"

Comentario::Comentario(int id, string desc, int idgral) {
	this->id = id;
	this->desc = desc;
	this->respuestas.clear();
	this->cantRespuestas = 0;
    this->idgral=idgral;
}

/* Getters */

int Comentario::getId() {
	return this->id;
}
int Comentario::getIdGral(){
	return this->idgral;
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
void Comentario::setDesc(string desc) {
	this->desc = desc;
}

void Comentario::setRespuestas(vector<Comentario *> respuestas){

	this->respuestas = respuestas;
}
void Comentario::setIdGral(int id){
	this->idgral=id;
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