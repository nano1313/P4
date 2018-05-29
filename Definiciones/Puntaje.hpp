#ifndef PUNTAJE_HH
#define PUNTAJE_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Puntaje {
	private:
		int valor;

	public:
		/* Getters */
		int getValor();

		/* Setters */
		void setValor(int valor);
        
        Puntaje();
		Puntaje(int valor);
		~Puntaje();
};
#endif
