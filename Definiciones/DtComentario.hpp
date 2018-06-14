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
    int getId(); //HECHA
	  string getUsuario(); //HECHA
    string getDescripcion(); //HECHA
	  vector<DtComentario> getRespuestas(); //HECHA

    /* Setters */
    void setUsuario(string usuario); //HECHA
    void setDescripcion(string descripcion); //HECHA
  	void setRespuestas(vector<DtComentario> respuestas); //HECHA

<<<<<<< HEAD
    DtComentario();
    DtComentario(int id, string usuario, string descripcion, vector<DtComentario> respuestas);
    //~DtComentario();
=======
    DtComentario(); //FALTA
    DtComentario(int id, string usuario, string descripcion, vector<DtComentario> respuestas); //HECHA
    ~DtComentario(); //FALTA
>>>>>>> 54d5416700228b13609f0b09266ba4e9eb88b3b0

};

#endif
