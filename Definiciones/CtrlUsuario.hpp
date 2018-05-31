#ifndef CTRLUSUARIO_HH
#define CTRLUSUARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./Usuario.hpp"
#include "./DtUsuario.hpp"
#include "./IUsuario.hpp";

using namespace std;


class CtrlUsuario : public IUsuario{

        private:
                string Nickname;
                string Contrasenia;
                Usuario* UsuarioLog = NULL;
                static CtrlUsuario* instancia;
                map<string, Usuario *> usuarios;
                CtrlUsuario();
	public:
                static CtrlUsuario* getInstancia();
                void ingresarNick(string nick);
                bool ingresarContrasenia(string pass);
                DtUsuario* getUsuarioLog(); //devuelve NULL si no hay Usuario Logueado
};

#endif
