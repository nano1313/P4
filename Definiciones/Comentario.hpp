#ifndef COMENTARIO_HH
#define COMENTARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Usuario.hpp"

#include <vector>

using namespace std;

class Usuario;

class Comentario {

	private:
		Usuario *usuario;
		int id;
		string desc;
		vector<Comentario *> respuestas;
		int cantRespuestas;

	public:
		/* Getters */
		int getId();
		string getDesc();
		vector<Comentario *> getRespuestas();
		Usuario * getUsuario();

		/* Setters */
		void setId(int id);
		void setDesc(string desc);
		void setRespuestas(vector<Comentario *> respuestas);
		void setUsuario(Usuario * usuario);

		void agregarRespuesta(Comentario * comentario);
		void masUnaRespuesta();
		void destroy();

		Comentario(int id, string desc);
		//~Comentario();
};
#endif
