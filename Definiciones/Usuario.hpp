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
		string getNickname();
		string getContrasenia();
		string getImagen();
		int getNivel();
		set<Reserva *> getReservas();

		/* Setters */
		void setNickname(string nickname);
		void setContrasenia(string contrasenia);
		void setImagen(string imagen);
		void setNivel(int nivel);

		/* Metodos */
	    void eliminarAsociaciones(Reserva *r);
		void aniadirReserva(Reserva *r);

        Usuario();
		Usuario(string nickname, string contrasenia, string imagen, int nivel);
		~Usuario();
};
#endif
