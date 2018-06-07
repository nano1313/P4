#ifndef DTCOMENTARIO_HH
#define DTCOMENTARIO_HH

#include <iostream>
#include <string.h>
#include "DtComentario.hpp"

using namespace std;

class DtComentario;

class DtComentario {
  private:
  	string usuario;
    string descripcion;
    vector<DtComentario> respuestas; //set DtComentario

  public:
    /* Getters */
	   string getUsuario();
     string getDescripcion();
	   vector<DtComentario> getRespuestas();

    /* Setters */
    void setUsuario(string usuario);
    void setDescripcion(string descripcion);
  	void setRespuestas(vector<DtComentario> respuestas);

    DtComentario();
    DtComentario(string usuario, string descripcion/*, DtComentario respuestas  Tambien es un set*/);
    ~DtComentario();

};

#endif
