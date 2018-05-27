#ifndef COMENTARIO_HH
#define COMENTARIO_HH

#include <iostream>
#include <string>
#include <stdlib.h>

#include "DtDireccion.hpp"

using namespace std;

class Comentario {

	private:
		int id;
		string desc;

	public:
		/* Getters */
		int getId();
		string getDesc();

		/* Setters */
		void setId(int id);
		void setDesc(string desc);

		Comentario(int id, string desc);
		~Comentario();
};
#endif
