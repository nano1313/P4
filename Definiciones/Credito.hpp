#ifndef CREDITO_HH
#define CREDITO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./Tarjeta.hpp"

using namespace std;

class Credito : public Tarjeta {
	private:
		string financiera;
        int descuento;

	public:
		/* Getters */
		string getFinanciera();
        int getDescuento();
		int tipoPago();

		/* Setters */
		void setFinanciera(string financiera);
        void setDescuento(int descuento);

		Credito(string financiera, int descuento);
		//~Credito();
};
#endif
