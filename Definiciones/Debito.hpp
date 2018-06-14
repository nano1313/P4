#ifndef DEBITO_HH
#define DEBITO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./Tarjeta.hpp"

using namespace std;

class Debito : public Tarjeta {
	private:
		string banco;

	public:
		/* Getters */
		string getBanco(); //HECHA

		/* Setters */
		void setBanco(string banco); //HECHA
		
		Debito(string banco); //HECHA
		~Debito(); //FALTA
};
#endif
