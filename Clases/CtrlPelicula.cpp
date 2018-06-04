#include "../Definiciones/CtrlPelicula.hpp"


CtrlPelicula* CtrlPelicula::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlPelicula();
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

vector<int> CtrlPelicula::darListaCines(){
    
    map<int, Cine *>::iterator it = cines.begin();
    vector<int> vector_cines;

    for (it = this->cines.begin(); it!=this->cines.end(); ++it) {
        int nuevo = it->second->getNumero();
        vector_cines.push_back(nuevo);
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

vector<int> CtrlPelicula::darListaCinesDeUnaFuncion(Pelicula * pelicula) {
    vector<int> vector_cines;

    map<string, Funcion *> * funciones = pelicula->getFunciones();

    for (map<string,Funcion *>::iterator it = funciones->begin(); it!=funciones->end(); ++it) {
        vector_cines.push_back(it->second->getSala()->getCine()->getNumero());
    }
        
    return vector_cines;
}

vector<int> CtrlPelicula::seleccionarCineConSusFunciones(int id) {
    vector<int> cines_funciones;

    map<string, Funcion *> * funciones = this->getPelicula()->getFunciones();

    for (map<string,Funcion *>::iterator it = funciones->begin(); it!=funciones->end(); ++it) {
        if (it->second->getSala()->getCine()->getNumero() == id)
        {
            cines_funciones.push_back(it->second->getNumero());
        }
    }
    return cines_funciones;
}