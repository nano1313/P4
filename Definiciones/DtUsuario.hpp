#ifndef DTUSUARIO_HH
#define DTUSUARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class DtUsuario {
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
		void setNivel(int nivel);

        DtUsuario();
		DtUsuario(string nickname, string contrasenia, string imagen, int nivel);
		//~DtUsuario();
};
#endif
