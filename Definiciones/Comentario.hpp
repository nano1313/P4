#ifndef COMENTARIO_HH
#define COMENTARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Usuario.hpp"

#include <vector>

using namespace std;

class Comentario {

	private:
		Usuario *usuario;
		int id;
		string desc;
		vector<Comentario *> respuestas;

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

		Comentario(int id, string desc);
		~Comentario();
};
#endif
