#ifndef RESERVA_HH
#define RESERVA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Tarjeta.hpp"
#include "Funcion.hpp"

class Usuario;
class Funcion;

using namespace std;

class Reserva {
	private:
		int cantAsientos;
		float costo;
		Tarjeta * t;
		Usuario* u;
		Funcion* f;

	public:
		/* Getters */
		int getCantAsientos();//HECHA
		float getCosto();//HECHA
		Funcion* getFuncion();//HECHA
		Usuario* getUsuario(); //HECHA
		Tarjeta* getTarjeta(); //HECHA

		/* Setters */
		void setCantAsientos(int cantAsientos); //HECHA
		void setCosto(float costo);//HECHA
		void setUsuario(Usuario *u);//HECHA
		void setFuncion(Funcion *f); //HECHA


		void destroy();//HECHA

        Reserva();
		Reserva(int cantAsientos, float costo);   //HECHA
		Reserva(int cantAsientos ,float costo,Tarjeta *t,Funcion *f);//HECHA
		~Reserva();
};
#endif
