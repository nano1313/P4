#ifndef DTCOMENTARIO_HH
#define DTCOMENTARIO_HH

#include <iostream>
#include <string.h>

#include <vector>

#include "DtComentario.hpp"

using namespace std;

class DtComentario;

class DtComentario {
  private:
    int id;
  	string usuario;
    string descripcion;
    vector<DtComentario> respuestas; //set DtComentario

  public:
    /* Getters */
    int getId();
	  string getUsuario();
    string getDescripcion();
	  vector<DtComentario> getRespuestas();

    /* Setters */
    void setUsuario(string usuario);
    void setDescripcion(string descripcion);
  	void setRespuestas(vector<DtComentario> respuestas);

    DtComentario();
    DtComentario(int id, string usuario, string descripcion, vector<DtComentario> respuestas);
    //~DtComentario();

};

#endif
