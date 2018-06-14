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
        Mtarjeta(); //FALTA

	public:
        static Mtarjeta* getInstancia(); //HECHA
        Debito* encontrarInstanciaDebito(string nombre); //HECHA
        Credito* encontrarInstanciaCredito(string nombre); //HECHA
};
#endif