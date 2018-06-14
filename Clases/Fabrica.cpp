


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
