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
		string getNickname(); //HECHA
		string getContrasenia(); //HECHA
		string getImagen(); //HECHA
		int getNivel(); //HECHA

		/* Setters */
		void setNickname(string nickname); //HECHA
		void setContrasenia(string contrasenia); //HECHA
		void setImagen(string imagen); //HECHA
		void setNivel(int nivel); //HECHA

<<<<<<< HEAD
        DtUsuario();
		DtUsuario(string nickname, string contrasenia, string imagen, int nivel);
		//~DtUsuario();
=======
        DtUsuario(); //FALTA
		DtUsuario(string nickname, string contrasenia, string imagen, int nivel); //HECHA
		~DtUsuario(); //FALTA
>>>>>>> 54d5416700228b13609f0b09266ba4e9eb88b3b0
};
#endif
