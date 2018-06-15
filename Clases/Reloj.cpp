#include "../Definiciones/Reloj.hpp" 
#include "../Definiciones/DtFecha.hpp" 
#include "../Definiciones/DtHora.hpp" 

Reloj* Reloj::instancia=NULL;

Reloj* Reloj::getInstancia() {
	if (instancia ==NULL){
		instancia = new Reloj();
	}
	return instancia;
}

void Reloj::modificarFecha(DtFecha fecha, DtHora hora) {
    this->fecha = fecha;
    this->hora = hora;
}

DtFecha Reloj::consultarFecha() {
    return this->fecha;
}

/* Getters */

