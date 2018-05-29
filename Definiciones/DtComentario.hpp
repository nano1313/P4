#ifndef DTCOMENTARIO_HH
#define DTCOMENTARIO_HH

#include <iostream>
#include <string.h>
#include "DtComentario.hpp"

using namespace std;

class DtComentario {
  private:
  	string usuario;
    string descripcion;
	DtComentario respuestas; //set DtComentario

  public:
    /* Getters */
	string getUsuario();
    string getDescripcion();
	DtComentario getRespuestas();

    /* Setters */
    void setUsuario(string usuario);
    void setDescripcion(string descripcion);
	void setRespuestas(DtComentario respuestas);

    DtComentario();
    DtComentario(string usuario, string descripcion, DtComentario respuestas/*Tambien es un set*/);
    ~DtComentario();

};

#endif
