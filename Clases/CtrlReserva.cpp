#include "../Definiciones/IUsuario.hpp"
#include "../Definiciones/CtrlReserva.hpp"
#include "../Definiciones/Debito.hpp"
#include "../Definiciones/Tarjeta.hpp"


CtrlReserva* CtrlReserva::instancia=NULL;

CtrlReserva* CtrlReserva::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlReserva();
    }

    return instancia;
}

void CtrlReserva::seleccionarFuncion(int num, int cantAsientos) {
    CtrlPelicula * ctrl = ctrl->getInstancia(); //global en un futuro 
    Pelicula * peli = ctrl->getPelicula();
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
    Reserva* r = new Reserva(this->cant,this->total,this->tar,this->f);
    //Reserva *ptr = &r;
    this->f->aniadirReserva(r);
    CtrlUsuario *ctrl = ctrl->getInstancia();  //este es el usuario que estaria logeado 
    Usuario *u = ctrl->getUserlog(); 
    u->aniadirReserva(r);
    Usuario *pointer = u;
    r->setUsuario(pointer);
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

    CtrlUsuario * ctrl;
    ctrl = ctrl->getInstancia();
    Usuario * usuario = ctrl->getUserlog();

    set<Reserva *> reservas = usuario->getReservas();
    
    vector<DtReserva> devolver;
    set<Reserva *>::iterator it;
	//cout<<"1"<<'\n';
    for (it = reservas.begin(); it != reservas.end(); ++it) {
	Reserva* r=(*it);
	
        Tarjeta * tarjeta = r->getTarjeta();
	//cout<<"2"<<'\n';
        char tipoPago;
	
	
	Credito * d = dynamic_cast<Credito*>(&(*tarjeta));

	//cout<<"3"<<'\n';
        if (d==nullptr)
        {
            tipoPago = 'C';
        }else
        {
            tipoPago = 'D';
        }
        
        //cout<<"4"<<'\n';
        //Debito * d = dynamic_cast<Debito*>(tarjeta);
	
	DtFecha f=r->getFuncion()->getFecha();
        DtHora h=r->getFuncion()->getHora();
        float c=r->getCosto();
        int a = r->getCantAsientos();
        char c2=tipoPago;
	int asd=r->getFuncion()->getSala()->getCine()->getNumero();
	
//cout<<"5"<<'\n';
        
        DtReserva agregar = DtReserva(r->getFuncion()->getPelicula()->getTitulo(),
                                        r->getFuncion()->getFecha(),
                                        r->getFuncion()->getHora(),
                                        r->getCosto(),
                                        r->getCantAsientos(),
                                        tipoPago,
                                        r->getFuncion()->getSala()->getCine()->getNumero()
                                     );
        
        devolver.push_back(agregar);
    } 

    return devolver;
}
