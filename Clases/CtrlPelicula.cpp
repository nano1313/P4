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

    int size = this->peliculas.size();
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
    map<string, Cine *>::iterator it = cines.begin();
    vector<int> cines;

    for (it = this->cines.begin(); it!=this->cines.end(); it++) {
        cines.push_back(it->second->getNumero());
    }
    return cines;
}