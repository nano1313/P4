#ifndef CTRLUSUARIO_HH
#define CTRLUSUARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>

#include "./Usuario.hpp"
#include "./DtUsuario.hpp"
#include "./IUsuario.hpp"

using namespace std;


class CtrlUsuario : public IUsuario{

        private:
                string nickname;
                string contrasenia;
                Usuario* usuarioLog = NULL;
                static CtrlUsuario* instancia;
                map<string, Usuario *> usuarios;
                CtrlUsuario();
	public:
                static CtrlUsuario* getInstancia(); //HECHA
                void ingresarNick(string nick); //HECHA
                bool ingresarContrasenia(string pass); //HECHA
                void cerrarSesion(); //HECHA
                DtUsuario * getUsuarioLog(); //devuelve NULL si no hay Usuario Logueado //HECHA
                Usuario * getUserlog(); //devuelve NULL si no hay Usuario Logueado //HECHA
                void crearUsuario(string nick, string pass, string imagen, int nivel); //HECHA
};

#endif
