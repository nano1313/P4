#ifndef DEBITO_HH
#define DEBITO_HH

#include <iostream>
#include <string>
#include <stdlib.h>

#include "./Tarjeta.hpp"

using namespace std;

class Debito : public Tarjeta {
	private:
		string banco;

	public:
		/* Getters */
		string getBanco();

		/* Setters */
		void setBanco(string banco);

		Debito(int numero, DtDireccion direccion, string banco);
		~Debito();
};
#endif
