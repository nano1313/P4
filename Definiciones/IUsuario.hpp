#ifndef IUSUARIO_HH
#define IUSUARIO_HH

#include <iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;


class IUsuario {

	public:
		virtual ingresarNick(string nick);
        virtual ingresarContrasenia(string pass):bool;
};

#endif
