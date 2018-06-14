#include "../Definiciones/Usuario.hpp"

Usuario::Usuario (string nickname ,string contrasenia ,string imagen, int nivel) {
	this->nickname = nickname;
	this->contrasenia = contrasenia;
	this->imagen = imagen;
	this->nivel = nivel;
}

/* Getters */

string Usuario::getNickname() {
	return this->nickname;
}

string Usuario::getContrasenia() {
	return this->contrasenia;
}

string Usuario::getImagen() {
	return this->imagen;
}

int Usuario::getNivel(){

	return this->nivel;
}

set<Reserva *> Usuario::getReservas(){
	return this->reservas;
}
/* Setters */

void Usuario::setNickname(string nickname) {
	this->nickname = nickname;
}

void Usuario::setContrasenia(string contrasenia) {
	this->contrasenia = contrasenia;
}

void Usuario::setImagen(string imagen) {
	this->imagen = imagen;
}

void Usuario::setNivel(int nivel){

	this->nivel = nivel;
}


/* Metodos */

void Usuario::eliminarAsociaciones(Reserva *r) {
	 this->reservas.erase(reservas.find(r));
}
void Usuario::aniadirReserva(Reserva *r){
	this->reservas.insert(r);
}