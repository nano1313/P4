#include "../Definiciones/CtrlPelicula.hpp"


CtrlPelicula* CtrlPelicula::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlPelicula();
    }

    return instancia;
}

void CtrlPelicula::setPelicula(Pelicula * pelicula) {
    this->pelicula = pelicula;
}

Pelicula * CtrlPelicula::getPelicula() {
    return this->pelicula;
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

    for (it = this->peliculas.begin(); it!=this->peliculas.end(); it++) {
        
        if (titulo == it->first)
        {
            pelicula = DtPelicula(it->second->getTitulo(), it->second->getPoster(), it->second->getSinopsis(), it->second->getPromPuntaje(), it->second->getDuracion());
            break;
        }
    }
    return pelicula;
}

void CtrlPelicula::seleccionarPelicula2(string titulo) {
    map<string, Pelicula *>::iterator it = peliculas.begin();

    for (it = this->peliculas.begin(); it!=this->peliculas.end(); it++) {
        
        if (titulo == it->first)
        {
            this->setPelicula(it->second);
        }
    }
}


vector<int> CtrlPelicula::darListaCines(Pelicula * pelicula) {
    vector<int> cines;

    map<string, Funcion *> * funciones = pelicula->getFunciones();

    for (map<string,Funcion *>::iterator it = funciones->begin(); it!=funciones->end(); ++it) {
        cines.push_back(it->second->getSala()->getCine()->getNumero());
    }
        
    return cines;
}

vector<int> CtrlPelicula::seleccionarCine(int id) {
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