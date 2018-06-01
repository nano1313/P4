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
                static CtrlUsuario* getInstancia();
                void ingresarNick(string nick);
                bool ingresarContrasenia(string pass);
                void cerrarSesion();
                DtUsuario* getUsuarioLog(); //devuelve NULL si no hay Usuario Logueado
};

#endif
