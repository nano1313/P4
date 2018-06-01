#include "../Definiciones/DtUsuario.hpp"

DtUsuario::DtUsuario (string nickname ,string contrasenia ,string imagen, int nivel) {
	this->nickname = nickname;
	this->contrasenia = contrasenia;
	this->imagen = imagen;
	this->nivel = nivel;
}

/* Getters */

string DtUsuario::getNickname() {
	return this->nickname;
}

string DtUsuario::getContrasenia() {
	return this->contrasenia;
}

string DtUsuario::getImagen() {
	return this->imagen;
}

int DtUsuario::getNivel(){

	return this->nivel;
}


/* Setters */

void DtUsuario::setNickname(string nickname) {
	this->nickname = nickname;
}

void DtUsuario::setContrasenia(string contrasenia) {
	this->contrasenia = contrasenia;
}

void DtUsuario::setImagen(string imagen) {
	this->imagen = imagen;
}

void DtUsuario::setNivel(int nivel){

	this->nivel = nivel;
}
