#include "../Definiciones/Fabrica.hpp" 
#include "../Definiciones/IReserva.hpp"
#include "../Definiciones/CtrlReserva.hpp"
#include "../Definiciones/IUsuario.hpp"
#include "../Definiciones/CtrlUsuario.hpp"
#include "../Definiciones/IPelicula.hpp"
#include "../Definiciones/CtrlPelicula.hpp"


Fabrica* Fabrica::getInstancia(){
	if (instancia ==NULL){
		instancia = new Fabrica();
	}
	return instancia;
}

/* Getters */

IReserva* Fabrica::getIReserva() {
	return CtrlReserva::getInstancia();
}

IUsuario* Fabrica::getIUsuario() {
	return CtrlUsuario::getInstancia();
}

IPelicula* Fabrica::getIPelicula() {
	return CtrlPelicula::getInstancia();
}
