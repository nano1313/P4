#include "../Definiciones/Debito.hpp"

Debito::Debito(int numero, DtDireccion direccion, string banco) : Tarjeta(numero, direccion) { 
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
