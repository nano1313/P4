#ifndef IUSUARIO_HH
#define IUSUARIO_HH

#include <iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;


class IUsuario {

	public:
		virtual void ingresarNick(string nick);
        virtual bool ingresarContrasenia(string pass);
};

#endif