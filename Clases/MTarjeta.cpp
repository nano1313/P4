#include "../Definiciones/MTarjeta.hpp"

Mtarjeta* Mtarjeta::getInstancia(){
    
    if (instancia == 0)
    {
        instancia = new Mtarjeta();
    }
    return instancia;
}
Credito* Mtarjeta::encontrarInstanciaCredito(string nombre){
    map<string, Credito *>::iterator it = Creditos.begin();
    Credito *c;
    for (it = this->Creditos.begin(); it!=this->Creditos.end(); ++it) {
        
        if (nombre == it->first)
        {
            c = it->second;
            break;
        }
    }
    return c;
}
Debito* Mtarjeta::encontrarInstanciaDebito(string nombre){
    map<string, Debito *>::iterator it = Debitos.begin();
    Debito *d;
    for (it = this->Debitos.begin(); it!=this->Debitos.end(); ++it) {
        
        if (nombre == it->first)
        {
            d = it->second;
            break;
        }
    }
    return d;
}