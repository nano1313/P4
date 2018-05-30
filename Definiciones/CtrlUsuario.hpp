#ifndef CTRLUSUARIO_HH
#define CTRLUSUARIO_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


class CtrlUsuario:public IUsuario{

    private:
        CtrlUsuario instancia;
        CtrlUsuario();
	public:
        CtrlUsuario getInstancia();
		ingresarNick(string nick);
        bool ingresarContrasenia(string pass);
};

#endif
