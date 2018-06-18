#include "../Definiciones/Sala.hpp"

Sala::Sala (int numero, int capacidad) {
	this->numero = numero;
	this->capacidad	= capacidad;
	this->ocupados = 0;
}

Sala::Sala(int numero, int capacidad, Cine* cine){
	this->numero = numero;
	this->capacidad	= capacidad;
	this->cine=cine;
	this->ocupados = 0;
}

/* Getters */

int Sala::getNumero() {
	return this->numero;
}

int Sala::getCapacidad() {
	return this->capacidad;
}

int Sala::getOcupados() {
	return this->ocupados;
}

Cine* Sala::getCine() {
	return this->cine;
}

map<int, Funcion *> Sala::getFunciones(){

	return this->funciones;
}

/* Setters */

void Sala::setNumero(int numero) {
	this->numero = numero;
}

void Sala::setCapacidad(int capacidad) {
	this->capacidad = capacidad;
}

void Sala::setOcupados(int ocupados) {
	if ((this->ocupados + ocupados) <= this->capacidad)
		this->ocupados = this->ocupados + ocupados;
}

void Sala::setCine(Cine *cine) {
	this->cine = cine;
}

void Sala::setFunciones(map<int, Funcion*> funciones){
	this->funciones = funciones;
}

void Sala::eliminarFuncion(Funcion *funcion){

	this->funciones.erase(funcion->getNumero());
}

void Sala::agregarFuncion(Funcion *funcion){

	this->funciones[funcion->getNumero()]=funcion;
}

bool Sala::fechaOcupada(DtFecha fecha, DtHora hora){

	bool aux=false;
	for(map<int, Funcion*>::iterator it=funciones.begin(); it!=funciones.end(); ++it){
		bool condicion1=(it)->second->getFecha()==fecha;
		bool condicion2=(it)->second->getHora().getHora()+((it)->second->getPelicula()->getDuracion()/60)>hora.getHora();
		bool condicion3=(it)->second->getHora().getHora()+((it)->second->getPelicula()->getDuracion()/60)==hora.getHora() && ((it)->second->getPelicula()->getDuracion()%60) > hora.getMinutos();
		
		aux=aux || (condicion1 && (condicion2 || condicion3));  

	}
	return aux;
	
}
