#ifndef IUSUARIO_HH
#define IUSUARIO_HH

#include <iostream>
#include<string.h>
#include <stdlib.h>

#include "./DtUsuario.hpp"

using namespace std;


class IUsuario {

	public:

		virtual void ingresarNick(string nick)=0;
    		virtual bool ingresarContrasenia(string pass)=0;
		virtual DtUsuario* getUsuarioLog()=0; //devuelve NULL si no hay Usuario Logueado
		virtual void cerrarSesion()=0;
		virtual void crearUsuario(string nick, string pass, string imagen, int nivel)=0;
};

#endif
