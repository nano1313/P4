#include "../Definiciones/Pelicula.hpp"
#include "../Definiciones/Puntaje.hpp"
#include "../Definiciones/Funcion.hpp"

Pelicula::Pelicula(string titulo, string poster, string sinopsis, float duracion) {
    this->titulo = titulo;
    this->poster = poster;
    this->sinopsis = sinopsis;
    this->duracion = duracion;
    this->cantidadComentarios = 0;
}

/* Getters */
string Pelicula::getTitulo() {
    return this->titulo;
}

string Pelicula::getPoster() {
    return this->poster;
}

string Pelicula::getSinopsis() {
    return this->sinopsis;
}

float Pelicula::getPromPuntaje() {
    map<string, Puntaje *> puntajes = this->puntajes;
    float contador = 0;
    for (map<string,Puntaje *>::iterator it = puntajes.begin(); it!=puntajes.end(); ++it) {
        contador = contador + it->second->getValor();
    }
    if (puntajes.size() > 0)
        return contador = contador / puntajes.size();
    else
        return 0;   
}

float Pelicula::getDuracion() {
    return this->duracion;
}

map<string, Puntaje *> Pelicula::getPuntajes() {
    return this->puntajes;
}

void Pelicula::addPuntaje(string usr, int puntos){
    map<string, Puntaje * >::iterator it; 
    it = this->puntajes.find(usr);
    
    if (it!=this->puntajes.end())
    {   
        it->second->setValor(puntos);
    }else
    {
        puntajes[usr]=new Puntaje(puntos);
    }
}

map<int, Funcion *> Pelicula::getFunciones() {
    return this->funciones;
}

map<int, Comentario *> Pelicula::getComentarios() {
    return this->comentarios;
}

Comentario * Pelicula::getComentario(int num){
	map<int, Comentario *>::iterator it = this->comentarios.begin();

    for (it = this->comentarios.begin(); it!=this->comentarios.end(); ++it) {
        if (num == it->second->getIdGral())
        {
            Comentario *aux;
            aux=it->second;
            return it->second;
			break;
        }
		else if(!it->second->getRespuestas().empty()){
            Comentario *p = getComentario2(it->second,num);
			if(p!=NULL) {
				return p;
				break;
			}
		}
	}
	return NULL;
}

Comentario * Pelicula::getComentario2(Comentario *c,int id){
	if(!c->getRespuestas().empty()){
        vector<Comentario *>::iterator it;
		vector<Comentario *> pibot = c->getRespuestas();
        Comentario *aux;
        for (it = pibot.begin(); it!= pibot.end(); ++it) {
        aux=*it;
        if (id == aux->getIdGral()){
                return aux;
				break;
       		}
        if(!aux->getRespuestas().empty()){
				Comentario *p = getComentario2(aux,id);
				if(p!=NULL){
					return p;
					break;
				}
			}
        }
	}
	return NULL;
}
int Pelicula::getIdGen(){
	return this->idgen;
}
/* Setters */
void Pelicula::setTitulo(string nombre) {
    this->titulo = nombre;
}
void Pelicula::setPoster(string poster) {
    this->poster = poster;
}
void Pelicula::setSinopsis(string sinopsis) {
    this->sinopsis = sinopsis;
}
void Pelicula::setPromPuntaje(float promPuntaje) {
    this->promPuntaje = promPuntaje;
}
void Pelicula::setDuracion(float duracion) {
    this->duracion = duracion;
}
void Pelicula::masUnoComentario() {
    this->cantidadComentarios++;
}
void Pelicula::generarId(){
	this->idgen++;
}

/* Metodos */
/*
int* Pelicula::seleccionarCine(int id) {    return NULL;
    //
}
int* Pelicula::darListaCine() {         return NULL;
    //
}
*/
Funcion * Pelicula::seleccionarFuncion(int numero) {
    return funciones[numero];
}

void Pelicula::agregarNuevoComentario(Comentario * comentario) {
    this->comentarios[comentario->getId()] = comentario;
}

void Pelicula::agregarNuevaRespuesta(Comentario * comentario, int padre) {
    vector<Comentario*> respuestas = this->comentarios[padre]->getRespuestas();
    respuestas.push_back(comentario);
}

void Pelicula::destroy(){
    map<string, Puntaje *>::iterator it1 = this->puntajes.begin();
    //map<int, Cine *>::iterator it = cines.begin();
    for (it1 = this->puntajes.begin(); it1 !=this->puntajes.end(); ++it1)
    {
        this->puntajes.erase(it1->first);
        delete(it1->second);
    }
    map<int, Funcion *>::iterator it2;
    for (it2 = this->funciones.begin(); it2 !=this->funciones.end(); ++it2)
    {
        this->funciones.erase(it2->first);
        it2->second->destroy();
        delete(it2->second);
        
    }
    map<int, Comentario*>::iterator it3;
    for (it3 = this->comentarios.begin(); it3 !=this->comentarios.end(); ++it3)
    {
        this->comentarios.erase(it3->first);
        it3->second->destroy();
        delete(it3->second);
        
    }
    
}
void Pelicula::agregarFuncion(Funcion *f){
    this->funciones[f->getNumero()] = f;
}