#ifndef USUARIO_HH
#define USUARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Reserva.hpp"
#include <set>

class Reserva;

using namespace std;

class Usuario {
	private:
		string nickname;
		string contrasenia;
		string imagen;
		int nivel;
		set<Reserva *> reservas;

	public:
		/* Getters */
		string getNickname();//HECHA
		string getContrasenia();//HECHA
		string getImagen();//HECHA
		int getNivel();//HECHA
		set<Reserva *> getReservas();//HECHA

		/* Setters */
		void setNickname(string nickname);//HECHA
		void setContrasenia(string contrasenia);//HECHA
		void setImagen(string imagen);//HECHA
		void setNivel(int nivel);//HECHA

		/* Metodos */
	    void eliminarAsociaciones(Reserva *r);//HECHA
		void aniadirReserva(Reserva *r);//HECHA

        Usuario();
		Usuario(string nickname, string contrasenia, string imagen, int nivel);//HECHA
		~Usuario();
};
#endif
