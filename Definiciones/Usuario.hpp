#ifndef USUARIO_HH
#define USUARIO_HH

#include <iostream>
#include <string>
#include <stdlib.h>

#include "./Reserva.hpp"

using namespace std;

class Usuario {
	private:
		string nickname;
		string contrasenia;
		string imagen;
	public:
		/* Getters */
		string getNickname();
		string getContrasenia();
		string getImagen();

		/* Setters */
		void setNickname(string nickname);
		void setContrasenia(string contrasenia);
		void setImagen(string imagen);

		/* Metodos */
		void eliminarAsociaciones(Reserva r);

		Usuario(string nickname, string contrasenia, string imagen);
		~Usuario();
};
#endif
