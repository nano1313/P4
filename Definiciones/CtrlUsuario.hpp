#ifndef CTRLUSUARIO_HH
#define CTRLUSUARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "./IUsuario.hpp";

using namespace std;


class CtrlUsuario : public IUsuario{

    private:
        Usuario* UsuarioLog;
        static CtrlUsuario* instancia;
        CtrlUsuario();
	public:
        static CtrlUsuario* getInstancia();
		    void ingresarNick(string nick);
        bool ingresarContrasenia(string pass);
        DtUsuario* getUsuarioLog(); //devuelve NULL si no hay Usuario Logueado
};

#endif
