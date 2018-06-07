#ifndef PUNTAJE_HH
#define PUNTAJE_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Usuario.hpp"

using namespace std;

class Puntaje {
	private:
		int valor;
		Usuario * usuario;

	public:
		Usuario * getUsuario();
		void setUsuario();

		/* Getters */
		int getValor();

		/* Setters */
		void setValor(int valor);
		void setUsuario(Usuario * usuario);
        
        Puntaje();
		Puntaje(int valor);
		~Puntaje();
};
#endif
