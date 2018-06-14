#ifndef PUNTAJE_HH
#define PUNTAJE_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "./Usuario.hpp"

using namespace std;

class Usuario;

class Puntaje {
	private:
		int valor;
		Usuario * usuario;

	public:
	
		/* Getters */
		int getValor();//HECHA
		Usuario * getUsuario();//HECHA

		/* Setters */
		void setValor(int valor);//HECHA
		void setUsuario(Usuario * usuario);//HECHA
        
        Puntaje();
		Puntaje(int valor);//HECHA
		~Puntaje();
};
#endif
