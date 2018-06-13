#include "../Definiciones/CtrlReserva.hpp"


CtrlReserva* CtrlReserva::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlReserva();
    }

    return instancia;
}

void CtrlReserva::seleccionarFuncion(int num, int cantAsientos) {
    CtrlPelicula *ctrl = ctrl->getInstancia(); //global en un futuro 
    Pelicula *peli = ctrl->getPelicula();
    this->cant = cantAsientos; //global en un futuro
    this->f = peli->seleccionarFuncion(num);
}

DtPago CtrlReserva::pagoCredito(string nomFin) {
    Sala *s = this->f->getSala();
    Cine *c = s->getCine();
    int p = c->getPrecio(); 
    Mtarjeta *t = t->getInstancia();
    Credito *crd = t->encontrarInstanciaCredito(nomFin);  
    int des = crd->getDescuento();
    this->tar= crd;
    this->total = ((p*this->cant)-(((p*this->cant)*des)/100));  
    DtPago res = DtPago(this->total,des);
    return res;    
}

int CtrlReserva::pagoDebito(string nomBanco){
    Sala *s = this->f->getSala();
    Cine *c = s->getCine();
    this->total = (c->getPrecio()*this->cant);     //GLOBAL A FUTURO
    Mtarjeta *t = t->getInstancia();
    this->tar = t->encontrarInstanciaDebito(nomBanco);
    return total;
}

void CtrlReserva::crearReserva(){
    Reserva r = Reserva(this->cant,this->total,this->tar,this->f);
    Reserva *ptr = &r;
    this->f->aniadirReserva(ptr);
    CtrlUsuario *ctrl = ctrl->getInstancia();  //este es el usuario que estaria logeado 
    Usuario *u = ctrl->getUserlog(); 
    u->aniadirReserva(ptr);
    Usuario *pointer = u;
    r.setUsuario(pointer);
    this->tar=NULL;
    this->f=NULL;
    this->total=-1;
    this->cant=-1;
}

void CtrlReserva::finalizarReserva() {
    this->tar=NULL;
    this->f=NULL;
    this->total=-1;
    this->cant=-1;
    //pongo a null todo lo global
}

vector<DtReserva> CtrlReserva::mostrarReserva() {
    Usuario * usuario;

    set<Reserva *> reservas = usuario->getReservas();
    
    vector<DtReserva> devolver;

    for (Reserva * r : reservas) {
        //Tarjeta * tarjeta = r->getTarjeta();

        
        //const Debito * d = dynamic_cast<Debito*>(*tarjeta);
        
        DtReserva agregar = DtReserva(r->getFuncion()->getPelicula()->getTitulo(),
                                        r->getFuncion()->getFecha(), r->getFuncion()->getHora(),
                                        r->getCosto(), r->getCantAsientos(), r->getFuncion()->getSala()->getCine()->getNumero()
                                     );
        
        devolver.push_back(agregar);
    } 

    return devolver;
}