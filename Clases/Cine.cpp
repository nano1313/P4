#include "../Definiciones/Cine.hpp"
#include <map>

Cine::Cine(int numero, DtDireccion direccion, int precio) {
	this->numero = numero;
	this->direccion = direccion;
	this->precio = precio;
}

Cine::Cine(int numero, DtDireccion direccion, int precio, map<int, Sala*> salas) {
	this->numero = numero;
	this->direccion = direccion;
	this->precio = precio;
	this->salas = salas;
}

/* Getters */

int Cine::getNumero() {
	return this->numero;
}

int Cine::getPrecio() {
	return this->precio;
}

DtDireccion Cine::getDireccion() {
	return this->direccion;
}

vector<DtSala> Cine::getSalas(){

	vector<DtSala> vsalas;
	for (map<int,Sala *>::iterator it = this->salas.begin(); it!=this->salas.end(); ++it) {
        vsalas.push_back(DtSala(it->first,it->second->getCapacidad()));
    }

    return vsalas;
}

Sala * Cine::getSala(int num){

	map<int, Sala *>::iterator it = this->salas.begin();

    for (it = this->salas.begin(); it!=this->salas.end(); ++it) {

        if (num == it->first)
        {
            return it->second;
			break;
        }
    }

	return NULL;
}

/* Setters */

void Cine::setNumero(int numero) {
	this->numero = numero;
}

void Cine::setDireccion(DtDireccion direccion) {
	this->direccion = direccion;
}
void Cine::setPrecio(int p) {
	this->precio = p;
}

