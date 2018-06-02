#include "../Definiciones/CtrlReserva.hpp"


CtrlReserva* CtrlReserva::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlReserva();
    }

    return instancia;
}

void CtrlReserva::seleccionarFuncion(int num, int cantAsientos){
    Pelicula *peli = NULL; //global en un futuro 
    int cant1 = cantAsientos; //global en un futuro
    peli->seleccionarFuncion(num,cantAsientos);
}

DtPago CtrlReserva::pagoCredito(string nomFin){
    Funcion *f = NULL; //global en un futuro
    Sala *s = f->getSala();
    Cine *c = s->getCine();
    int p = c->getPrecio(); 
    //Mtarjetas t = getInstancia();
    //Credito *tar = t->tarjetas.find(nomFin)   //GLOBAL A FUTURO
    //int des = tar->getDescuento(nomFin);
    //int total = p-((p*des)/100)               GLOBAL A FUTURO
   // DtPago res = Dtpago(total,des);
    //return res;    
}

int CtrlReserva::pagoDebito(string nomBanco){
    Funcion *f = NULL; //global en un futuro
    Sala *s = f->getSala();
    Cine *c = s->getCine();
    int total = c->getPrecio();     //GLOBAL A FUTURO
    //Mtarjetas t = getInstancia();
    //Debito *tar = t->tarjetas.find(nomBanco) GLOBAL A FUTURO
    return total;
}

void CtrlReserva::crearReserva(){
    Tarjeta *tar = NULL; //ESTA TARJETA SERIA LA QUE OBTENGO EN pagoDebito o pagoCredito
    int total = 0;                        //esto tambien
    int cantasientos = 0;                 //esto lo obtengo en seleccionar funcion
    Reserva r = Reserva(cantasientos,total,tar);
    Usuario *u = NULL;  //este es el usuario que estaria logeado 
    Reserva *coso = r ;
    u->aniadirReserva(coso);
}

void CtrlReserva::finalizarReserva(){
    //pongo a null todo lo global
}