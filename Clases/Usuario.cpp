#include "../Definiciones/Usuario.hpp"

Usuario::Usuario (string nickname ,string contrasenia ,string imagen) {
	this->nickname = nickname;
	this->contrasenia = contrasenia;
	this->imagen = imagen;
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

/* Metodos */

void Usuario::eliminarAsociaciones(Reserva reserva) {
	//
}