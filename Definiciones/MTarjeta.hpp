#ifndef MTARJETA_HH
#define MTARJETA_HH

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include "Tarjeta.hpp"
#include "Debito.hpp"
#include "Credito.hpp"

using namespace std;

class Mtarjeta {
	private:
        static Mtarjeta* instancia;
        map<string, Credito *> Creditos;
        map<string, Debito *> Debitos;
        Mtarjeta();
	public:
        static Mtarjeta* getInstancia();
        Debito* encontrarInstanciaDebito(string nombre);
        Credito* encontrarInstanciaCredito(string nombre);
};
#endif