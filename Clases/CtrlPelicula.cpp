#include "../Definiciones/CtrlPelicula.hpp"
#include "../Definiciones/Reloj.hpp"

CtrlPelicula* CtrlPelicula::instancia=NULL;

CtrlPelicula* CtrlPelicula::getInstancia()
{
    if (instancia == NULL)
    {
        instancia = new CtrlPelicula();
        instancia->pelicula = NULL;
        instancia->cine = NULL;
        instancia->sala = NULL;
        instancia->cantCines = 0;
    }

    return instancia;
}

    // Setters //

void CtrlPelicula::setPelicula(Pelicula * pelicula) {

    this->pelicula = pelicula;
}

void CtrlPelicula::setSala(Sala *sala){

    this->sala = sala;
}

void CtrlPelicula::setCine(Cine *cine){

    this->cine = cine;
}

void CtrlPelicula::setPrecioCine(int precio){

    this->precioCine = precio;
}

    // Gettters //

Pelicula * CtrlPelicula::getPelicula() {
    return this->pelicula;
}

Cine * CtrlPelicula::getCine(){

    return this->cine;
}

Sala * CtrlPelicula::getSala(){

    return this->sala;
}

int CtrlPelicula::getPrecioCine(){

    return this->precioCine;
}

vector<DtPelicula> CtrlPelicula::darListaPeliculas() {
    map<string, Pelicula *>::iterator it = peliculas.begin();

    vector<DtPelicula> peliculas;

    for (it = this->peliculas.begin(); it!=this->peliculas.end(); it++) {
        DtPelicula nuevo = DtPelicula(it->second->getTitulo(), it->second->getPoster(),
                                      it->second->getSinopsis(),it->second->getPromPuntaje(),
                                      it->second->getDuracion());
        peliculas.push_back(nuevo);
    }

    return peliculas;
}

DtPelicula CtrlPelicula::seleccionarPelicula1(string titulo) {
    map<string, Pelicula *>::iterator it = peliculas.begin();
    DtPelicula pelicula;

    for (it = this->peliculas.begin(); it!=this->peliculas.end(); ++it) {

        if (titulo == it->first)
        {
            pelicula = DtPelicula(it->second->getTitulo(), it->second->getPoster(),
                                  it->second->getSinopsis(), it->second->getPromPuntaje(),
                                  it->second->getDuracion());
            this->setPelicula(it->second);
            break;
        }
    }
    return pelicula;
}

void CtrlPelicula::seleccionarPelicula2(string titulo) {
    map<string, Pelicula *>::iterator it = peliculas.begin();

    for (it = this->peliculas.begin(); it!=this->peliculas.end(); ++it) {

        if (titulo == it->first)
        {
            this->setPelicula(it->second);
        }
    }
}

vector<DtCine> CtrlPelicula::darListaCines() {
    map<int, Cine *>::iterator it = cines.begin();
    vector<DtCine> vector_cines;

    for (it = this->cines.begin(); it!=this->cines.end(); ++it)
    {
        vector_cines.push_back(DtCine(it->second->getNumero(), it->second->getDireccion(), it->second->getPrecio()));
    }

    return vector_cines;
}

void CtrlPelicula::seleccionarCine(int numCine){

    map<int, Cine *>::iterator it = cines.begin();

    for (it = this->cines.begin(); it!=this->cines.end(); ++it) {

        if (numCine == it->first)
        {
            this->setCine(it->second);
        }
    }
}

vector<DtCine> CtrlPelicula::darListaCinesDeUnaPelicula() {
    vector<DtCine> vector_cines;

    map<int, Funcion *> funciones = this->pelicula->getFunciones();

    for (map<int,Funcion *>::iterator it = funciones.begin(); it!=funciones.end(); ++it) {
        vector_cines.push_back(DtCine(it->second->getSala()->getCine()->getNumero(),
                                      it->second->getSala()->getCine()->getDireccion(),
                                      it->second->getSala()->getCine()->getPrecio()));
    }

    return vector_cines;
}

vector<DtFuncion> CtrlPelicula::seleccionarCineConSusFunciones(int id) {
    Reloj * r;
    DtFecha actual = r->getInstancia()->consultarFecha();

    vector<DtFuncion> cines_funciones;

    this->setCine(cines[id]);
    map<int, Funcion *> funciones = this->pelicula->getFunciones();

    for (map<int,Funcion *>::iterator it = funciones.begin(); it!=funciones.end(); ++it)
    {
        if (it->second->getSala()->getCine()->getNumero() == id)
        {
            if (actual < it->second->getFecha())
            {
                cines_funciones.push_back(DtFuncion(it->second->getNumero(), it->second->getFecha(), it->second->getHora()));
            }
        }
    }

    return cines_funciones;
}

void CtrlPelicula::ingresarDireccion(string calle, int num){

    this->direccionCine = DtDireccion(calle, num);
}

void CtrlPelicula::ingresarCapacidad(int cap){

    this->capacidades.push_back(cap);
}
void CtrlPelicula::ingresarPrecioCine(int precio){
    this->precioCine = precio;
}
void CtrlPelicula::confirmarAltaCine(){

    int cont = 1;           //PARA CONTROLAR EL NUMERO DE LAS SALAS
    int cap;
    map<int, Sala *> nuevasSalas;   //CREO LA COLECCION DE SALAS PARA EL NUEVO CINE

    for (vector<int>::iterator it = this->capacidades.begin() ; it!=this->capacidades.end() ; ++it) {
        cap = *it;                  //CARGO LA COLECCION CON LAS CAPACIDADES INGRESADAS
        Sala *sala = new Sala(cont, cap);
        nuevasSalas[cont] = sala;
        cont++;
    }
    cantCines++;
    Cine *nuevoCine = new Cine(cantCines, this->direccionCine, this->precioCine, nuevasSalas);
    this->cines[cantCines] = nuevoCine;   //AGREGO EL NUEVO CINE A LA COLECCIOON GRAL DE CINES

    for(map<int, Sala *>::iterator it = nuevasSalas.begin(); it!=nuevasSalas.end(); ++it){
        it->second->setCine(nuevoCine);     //SETEO EL CINE PARA CADA SALA
    }

    this->cine = NULL;      //INICIALIZACION
    this->sala = NULL;
    vector<int>::iterator inicio,fin;
    inicio = this->capacidades.begin();
    fin = this->capacidades.end();
    this->capacidades.erase(inicio,fin);
    this->precioCine=0;
    this->direccionCine.setCalle("");
    this->direccionCine.setNumero(0);

}

void CtrlPelicula::cancelar() {
    this->cine = NULL;      //INICIALIZACION
    this->sala = NULL;
    vector<int>::iterator inicio,fin;
    inicio = this->capacidades.begin();
    fin = this->capacidades.end();
    this->capacidades.erase(inicio,fin);
}


vector<DtSala> CtrlPelicula::darListaSalas(){

    return this->cine->getSalas();
}

void CtrlPelicula::seleccionarSala(int num){

   this->sala = this->cine->getSala(num);
}

bool CtrlPelicula::yaPuntuo() {

    
    CtrlUsuario *ctrl = ctrl->getInstancia();
    this->usuario = ctrl->getUserlog();

    map<string, Puntaje *> puntajes = this->pelicula->getPuntajes();
    string nickname = this->usuario->getNickname();


	map<string, Puntaje * >::iterator it;	
	it = puntajes.find(nickname);
	return it!=puntajes.end();	
/*
	}else{
		puntajes[usr]=new Puntaje(puntos);
	}



    for (map<string,Puntaje *>::iterator it = puntajes.begin(); it!=puntajes.end(); ++it)
    {
        if (it->second->getUsuario()->getNickname() == nickname)
        {
            return true;
        }
    }

    return false;*/
}

int CtrlPelicula::mostrarPuntaje() {

    
    CtrlUsuario *ctrl = ctrl->getInstancia();
    this->usuario = ctrl->getUserlog();

    map<string, Puntaje *> puntajes = this->pelicula->getPuntajes();
    string nickname = this->usuario->getNickname();
	

    for (map<string,Puntaje *>::iterator it = puntajes.begin(); it!=puntajes.end(); ++it)
    {
        if (it->first == nickname)
        {
            return it->second->getValor();
        }
    }

    return 0;
}

void CtrlPelicula::ingresarPuntaje(int puntaje) {

    
    CtrlUsuario *ctrl = ctrl->getInstancia();
    this->usuario = ctrl->getUserlog();

    //map<string, Puntaje *> puntajes = this->pelicula->getPuntajes();
    string nickname = this->usuario->getNickname();
   /* bool agregar = false;

    for (map<string,Puntaje *>::iterator it = puntajes.begin(); it!=puntajes.end(); ++it)
    {
        if (it->first == nickname)
        {
            it->second->setValor(numero);
            agregar = true;
        }
    }*/

    //if (!agregar)
  // {	
	this->pelicula->addPuntaje(nickname,puntaje);
        //Puntaje * puntaje = new Puntaje(numero);
        //puntajes[nickname] = puntaje;
   // }
}

void CtrlPelicula::crearComentario(string text) {
    int cantidad = this->pelicula->getComentarios().size();
    Comentario * nuevo = new Comentario(cantidad + 1, -1, text);

    CtrlUsuario *ctrl = ctrl->getInstancia();
    this->usuario = ctrl->getUserlog();

    nuevo->setUsuario(this->usuario);
    this->pelicula->agregarNuevoComentario(nuevo);
    this->pelicula->masUnoComentario();
}

void CtrlPelicula::responderComentario(string texto) {
    int cantidad = this->comentario->getRespuestas().size();
    
    Comentario * nuevo = new Comentario(cantidad + 1, this->comentario->getId() , texto);

    CtrlUsuario *ctrl = ctrl->getInstancia();
    this->usuario = ctrl->getUserlog();

    nuevo->setUsuario(this->usuario);
    this->comentario->agregarRespuesta(nuevo);
    this->comentario->masUnaRespuesta();
}

vector<DtComentario> CtrlPelicula::darListaComentarios() {

    map<int, Comentario *> comentarios = this->pelicula->getComentarios(); /* Todos los comentarios de la Pelicula */
    vector<DtComentario> comentario_devolver;
    vector<DtComentario> respuestasDeComentario;

    for (map<int, Comentario *>::iterator it = comentarios.begin(); it!=comentarios.end(); ++it) /* Para cada comentario de la pelicula */
    {
        vector<Comentario *> pibot = it->second->getRespuestas(); /* Agarro las respuestas */

        for (Comentario * c : pibot) /* Para cada respuesta creo un DtComentario */
        {
            vector<DtComentario> respuesta; /* <-- Vacio */
            respuestasDeComentario.push_back( DtComentario(c->getId(), c->getUsuario()->getNickname(), c->getDesc(), respuesta));
        }

        DtComentario nuevo = DtComentario(it->second->getId(), it->second->getUsuario()->getNickname(), it->second->getDesc(), respuestasDeComentario); /* Creo el comentario con sus respuestas */
        comentario_devolver.push_back(nuevo);
    }

    return comentario_devolver;
}

vector<DtPuntaje> CtrlPelicula::darListaPuntajes() {
    vector<DtPuntaje> vpuntajes;

    map<string, Puntaje *> puntajes = this->pelicula->getPuntajes();

    for (map<string,Puntaje *>::iterator it = puntajes.begin(); it!=puntajes.end(); ++it) {
        vpuntajes.push_back(DtPuntaje(it->first,it->second->getValor()));
    }

    return vpuntajes;
}

void CtrlPelicula::seleccionarComentario(int id) {
    this->comentario = this->pelicula->getComentario(id);
}

void CtrlPelicula::finalizarComentario() {
    this->comentario = NULL;
}

void CtrlPelicula::finalizar(){
	
	this->pelicula=NULL;
	
}

void CtrlPelicula::confirmarEliminar() {
    map<string, Pelicula *>::iterator it;
    this->peliculas.erase(this->pelicula->getTitulo());
    this->pelicula->destroy();
    this->pelicula=NULL;
}


void CtrlPelicula::altaPelicula(string titulo, string sinopsis, string portada, float duracion) {
    
    Pelicula *nuevaPeli = new Pelicula(titulo, portada, sinopsis, duracion);
    this->peliculas[titulo] = nuevaPeli;

}
void CtrlPelicula::altaFuncion(DtFecha fecha,DtHora hora){
    this->numfuncion++;
    Funcion *f = new Funcion(this->numfuncion,fecha,hora,this->sala, this->pelicula);
    this->pelicula->agregarFuncion(f);
 
}

