#ifndef COMENTARIO_HH
#define COMENTARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>


using namespace std;

class Comentario {

	private:
		int id;
		string desc;
		vector<Comentario> respuestas;

	public:
		/* Getters */
		int getId();
		string getDesc();
		vector<Comentario> getRespuestas();

		/* Setters */
		void setId(int id);
		void setDesc(string desc);
		void getRespuestas(vector<Comentario> l);

		Comentario(int id, string desc);
		~Comentario();
};
#endif
