#ifndef USUARIO_HH
#define USUARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./Reserva.hpp"

using namespace std;

class Usuario {
	private:
		string nickname;
		string contrasenia;
		string imagen;
		int nivel;
	public:
		/* Getters */
		string getNickname();
		string getContrasenia();
		string getImagen();
		int getNivel();

		/* Setters */
		void setNickname(string nickname);
		void setContrasenia(string contrasenia);
		void setImagen(string imagen);

		/* Metodos */
		void eliminarAsociaciones(Reserva r);

        Usuario();
		Usuario(string nickname, string contrasenia, string imagen, int nivel);
		~Usuario();
};
#endif
