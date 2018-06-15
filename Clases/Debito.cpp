#include "../Definiciones/Debito.hpp"
#include "../Definiciones/Tarjeta.hpp"

Debito::Debito(string banco) : Tarjeta() { 
	this->banco = banco;
}

/* Getters */

string Debito::getBanco() {
	return this->banco;
}

int Debito::tipoPago() {
	return 2;
}

/* Setters */

void Debito::setBanco(string banco) {
	this->banco = banco;
}
