#include "../Definiciones/Debito.hpp"

Debito::Debito(string banco) : Tarjeta() { 
	this->banco = banco;
}

/* Getters */

string Debito::getBanco() {
	return this->banco;
}

/* Setters */

void Debito::setBanco(string banco) {
	this->banco = banco;
}
