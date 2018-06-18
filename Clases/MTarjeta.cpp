#include "../Definiciones/MTarjeta.hpp"

Mtarjeta* Mtarjeta::instancia=NULL;

Mtarjeta::Mtarjeta(){
	Creditos["OCA"]= new Credito("OCA", 15);
	Creditos["CREDITEL"]= new Credito("CREDITEL", 20);
	Debitos["BROU"]= new Debito("BROU");
    Debitos["ITAU"]= new Debito("ITAU");
    Debitos["SANTANDER"]= new Debito("SANTANDER");
    Debitos["SCOTIABANK"]= new Debito("SCOTIABANK");
}

Mtarjeta* Mtarjeta::getInstancia(){
    
    if (instancia == 0)
    {
        instancia = new Mtarjeta();
    }
    return instancia;
}
Credito* Mtarjeta::encontrarInstanciaCredito(string nombre){
    map<string, Credito *>::iterator it = Creditos.begin();
    Credito *c = Creditos[nombre];
    /*for (it = this->Creditos.begin(); it!=this->Creditos.end(); ++it) {
        
        if (nombre == it->first)
        {
            c = it->second;
            break;
        }
    }*/
    return c;
}
Debito* Mtarjeta::encontrarInstanciaDebito(string nombre){
    map<string, Debito *>::iterator it = Debitos.begin();
    Debito *d = Debitos[nombre];
    /*for (it = this->Debitos.begin(); it!=this->Debitos.end(); ++it) {
        
        if (nombre == it->first)
        {
            d = it->second;
            break;
        }
    }*/
    return d;
}
