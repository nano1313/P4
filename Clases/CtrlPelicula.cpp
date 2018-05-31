#include "../Definiciones/CtrlPelicula.hpp"


CtrlPelicula* CtrlPelicula::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlPelicula();
    }

    return instancia;
}


vector<string> CtrlPelicula::darListaPeliculas() {
    map<string, Pelicula *>::iterator it = peliculas.begin();

    vector<string> nombres;

    for (it = this->peliculas.begin(); it!=this->peliculas.end(); it++) {
        nombres.push_back(it->second->getTitulo());
    }

    return nombres;
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


vector<int> CtrlPelicula::darListaCines() {
    Pelicula * pelicula; // Global en el futuro
    vector<int> cines;

    map<string, Funcion *> * funciones = pelicula->getFunciones();

    for (map<string,Funcion *>::iterator it = funciones->begin(); it!=funciones->end(); ++it) {
        cines.push_back(it->second->getSala()->getCine()->getNumero());
    }
        
    return cines;
}

vector<int> CtrlPelicula::seleccionarCine(int id) {
    Pelicula * pelicula; // Global en el futuro
    vector<int> cines_funciones;

    map<string, Funcion *> * funciones = pelicula->getFunciones();

    for (map<string,Funcion *>::iterator it = funciones->begin(); it!=funciones->end(); ++it) {
        if (it->second->getSala()->getCine()->getNumero())
        {
            cines_funciones.push_back(it->second->getNumero());
        }
    }
    return cines_funciones;
}