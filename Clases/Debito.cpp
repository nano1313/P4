#include "../Definiciones/Debito.hpp"
#include "../Definiciones/Tarjeta.hpp"

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
