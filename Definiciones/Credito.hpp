#ifndef CREDITO_HH
#define CREDITO_HH

#include <iostream>
#include <string>
#include <stdlib.h>

#include "./Tarjeta.hpp"

using namespace std;

class Credito : public Tarjeta {
	private:
		string financiera;
        float descuento;

	public:
		/* Getters */
		string getFinanciera();
        float getDescuento();

		/* Setters */
		void setFinanciera(string financiera);
        void setDescuento(float descuento);

		Credito(int numero, DtDireccion direccion, string financiera, float descuento);
		~Credito();
};
#endif