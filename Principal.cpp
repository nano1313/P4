#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

/*Hpp originales*/
#include "./Definiciones/DtHora.hpp"
#include "./Definiciones/DtFecha.hpp"
#include "./Definiciones/DtDireccion.hpp"
#include "./Definiciones/DtPago.hpp"
#include "./Definiciones/DtPuntaje.hpp"
#include "./Definiciones/DtComentario.hpp"
#include "./Definiciones/Fabrica.hpp"
#include "./Definiciones/IUsuario.hpp"
#include "./Definiciones/IReserva.hpp"
#include "./Definiciones/IPelicula.hpp"
#include "./Definiciones/Utils.hpp"
#include "./Definiciones/DtCine.hpp"
#include "./Definiciones/DtPelicula.hpp"
#include "./Definiciones/DtSala.hpp"
#include "./Definiciones/DtUsuario.hpp"

/*para quitar*/
#include "./Definiciones/Cine.hpp"
#include "./Definiciones/Comentario.hpp"
#include "./Definiciones/Credito.hpp"
#include "./Definiciones/CtrlPelicula.hpp"
#include "./Definiciones/CtrlReserva.hpp"
#include "./Definiciones/CtrlUsuario.hpp"
#include "./Definiciones/Debito.hpp"
#include "./Definiciones/Funcion.hpp"
#include "./Definiciones/MTarjeta.hpp"
#include "./Definiciones/Pelicula.hpp"
#include "./Definiciones/Puntaje.hpp"
#include "./Definiciones/Reserva.hpp"
#include "./Definiciones/Sala.hpp"
#include "./Definiciones/Tarjeta.hpp"
#include "./Definiciones/Usuario.hpp"


#include "./Clases/Cine.cpp"
#include "./Clases/Comentario.cpp"
#include "./Clases/Credito.cpp"
#include "./Clases/CtrlPelicula.cpp"
#include "./Clases/CtrlReserva.cpp"
#include "./Clases/CtrlUsuario.cpp"
#include "./Clases/Debito.cpp"
#include "./Clases/Funcion.cpp"
#include "./Clases/MTarjeta.cpp"
#include "./Clases/Pelicula.cpp"
#include "./Clases/Puntaje.cpp"
#include "./Clases/Reserva.cpp"
#include "./Clases/Sala.cpp"
#include "./Clases/Tarjeta.cpp"
#include "./Clases/Usuario.cpp"



#include "./Clases/DtUsuario.cpp"
#include "./Clases/DtSala.cpp"
#include "./Clases/DtPelicula.cpp"
#include "./Clases/DtCine.cpp"
#include "./Clases/DtHora.cpp"
#include "./Clases/DtFecha.cpp"
#include "./Clases/DtDireccion.cpp"
#include "./Clases/DtPago.cpp"
#include "./Clases/DtPuntaje.cpp"
#include "./Clases/DtComentario.cpp"
#include "./Clases/Fabrica.cpp"




using namespace std;
/*Cabezales de funciones a utilizar*/
void iniciarSesion(); //listo sin probar
void verInfoPelicula();//Listo sin probar
void verComentariosPelicula();//Listo sin probar
void crearReserva();//Listo sin probar
void puntuarPelicula();//Listo sin probar
void comentarPelicula(); //Listo sin probar
void verReservas();
void cerrarSesion(); //listo sin probar
void altaCine(); //listo sin probar
void altaFuncion(); //listo sin probar
void eliminarPelicula(); //lista sin probar
void cargarDatos();//Listo sin probar


void switchNoLog(int resp);
void switchLog(int resp);
void switchAdmin(int resp);

void mostrarComentario(vector<DtComentario> l, int tab);
/*Fin Cabezales*/

Fabrica* fab;

int main(){

		/*Inicializo variables */
		DtUsuario* usrLogueado=NULL;
    string menuDesplegado;//<//="Bienvenido. Elija la opción.\n1) Registrar socio\n2) Agregar mascota\n3) Ingresar consulta\n4) Ver consulta antes de una fecha\n5) Eliminar socio\n6) Obtener mascotas de un socio\n0) Salir\n";
		string menuCabezal="******************************************************************************\n*                                                                            *\n*                           MOVIEFING                                        *\n*                                                                            *\n******************************************************************************\nBienvenido. Elija la opción.";

		string menuUsuarioNoLog="1) Iniciar Sesion\n2) Ver Informacion de Pelicula\n3) Ver Comentarios y Puntaje de Pelicula\n4) Cargar Datos\n0) Salir\n";
		string menuUsuarioLog="1) Crear Reserva\n2) Puntuar Pelicula\n3) Comentar Pelicula\n4) Ver Informacion de Pelicula\n5) Ver Comentarios y Puntaje de Pelicula\n6) Ver Reservas\n7) Cargar Datos\n8)Cerrar Sesion\n0) Cerrar Sesion y Salir\n";
		string menuUsuarioAdmin="1) Crear Reserva\n2) Puntuar Pelicula\n3) Comentar Pelicula\n4) Ver Informacion de Pelicula\n5) Ver Comentarios y Puntaje de Pelicula\n6) Ver Reservas\n7) Alta Cine\n8) Alta Funcion\n9) Eliminar Pelicula\n10) Cargar Datos\n11)Cerrar Sesion\n0) Cerrar Sesion y Salir\n";
		menuDesplegado=menuCabezal + menuUsuarioNoLog;
		string respStr;
		int resp;
		fab=Fabrica::getInstancia();
		IUsuario* iUsr=fab->getIUsuario();

    do
		{
			usrLogueado=iUsr->getUsuarioLog();
			if (usrLogueado==NULL){
				cout << menuCabezal +  menuUsuarioNoLog<<endl;
				cin >> respStr;
				resp	=	StrToInt(respStr);
				switchNoLog(resp);
			}else if(usrLogueado->getNivel()==1){
				cout << menuCabezal +  menuUsuarioLog<<endl;
				cin >> respStr;
				resp	=	StrToInt(respStr);
				switchLog(resp);
			}else{
				cout << menuCabezal +  menuUsuarioAdmin<<endl;
				cin >> respStr;
				resp	=	StrToInt(respStr);
				switchAdmin(resp);
			}
    }while(resp!=0);

}

void switchNoLog (int resp) {
	switch (resp){
		case 1:
			iniciarSesion();
		break;
		case 2:
		  	verInfoPelicula();
		break;
		case 3:
			verComentariosPelicula();
		break;
		case 4:
			cargarDatos();
		break;
	}
}

void switchLog (int resp) {
	switch (resp){
		case 1:
			crearReserva();
		break;
		case 2:
		  	puntuarPelicula();
		break;
		case 3:
		  	comentarPelicula();
		break;
		case 4:
		  	verInfoPelicula();
		break;
		case 5:
			verComentariosPelicula();
		break;
		case 6:
			verReservas();
		break;
		case 7:
			cargarDatos();
		break;
		case 8:
			cerrarSesion();
		break;

		case 0:
			cerrarSesion();
		break;
	}
}

void switchAdmin (int resp) {
	switch (resp){
		case 1:
			crearReserva();
		break;
		case 2:
		  	puntuarPelicula();
		break;
		case 3:
		  	comentarPelicula();
		break;
		case 4:
		  	verInfoPelicula();
		break;
		case 5:
			verComentariosPelicula();
		break;
		case 6:
			verReservas();
		break;
		case 7:
			altaCine();
		break;
		case 8:
			altaFuncion();
		break;
		case 9:
			eliminarPelicula();
		break;
		case 10:
			cargarDatos();
		break;
		case 11:
			cerrarSesion();
		break;
		case 0:
			cerrarSesion();
		break;
	}
}

void iniciarSesion(){
			IUsuario* iUser =fab->getIUsuario();
			string aux="";//Guardara las respuestas del usuario
			bool flagWhile;//Sera la bandera para seguir iterando

			do {
				cout << "Ingresa tu nick: " << '\n';
				cin >> aux;
				iUser->ingresarNick(aux);
				cout << "Ingresa tu password: " << '\n';
				cin >> aux;
				flagWhile=iUser->ingresarContrasenia(aux);

				if(!flagWhile) {
					cout << "Datos incorrectos... \nDesea volver a intentar(S/N):" << '\n';
					cin >> aux;
					flagWhile=(aux=="n" || aux=="N");//Si no desea intentar mas
				}
			} while(!flagWhile);
}

void cerrarSesion() {
	IUsuario* iUser=fab->getIUsuario();
	iUser->cerrarSesion();
}

void altaCine() {

		DtDireccion direccion;
		IPelicula* iPeli = fab->getIPelicula();
		string aux=""; //Guardara las respuestas del usuario
		bool flagWhile=true;
		bool seguirAgregandoSalas=true;

		do {
			cout << "Ingresa la calle del Cine: " << '\n';
			cin >> aux;
			direccion.setCalle(aux);
			cout << "Ingresa la el numero de direccion del Cine: " << '\n';
			cin >> aux;
			direccion.setNumero(stoi(aux)); //Convierte a numero el string, Capturar excepcion?
			iPeli->ingresarDireccion(direccion.getCalle(), direccion.getNumero());
			int i=1;
			do{
				cout << "Ingresa la capacidad de la Sala Nro." + to_string(i) + ": " << '\n';
				cin >> aux;
				iPeli->ingresarCapacidad(stoi(aux));
				cout << "Desea seguir ingresando salas? (S/N): " << '\n';
				cin >> aux;
				seguirAgregandoSalas=(aux!="n" && aux!="N");
			} while(seguirAgregandoSalas);

			cout << "Ingresa el precio del cine:"  << '\n';
			cin >> aux;
			iPeli->ingresarPrecioCine(stoi(aux));

			cout << "Desea confirmar el ingreso del Cine(" + direccion.getCalle() + ", " + to_string(direccion.getNumero()) + "): " << '\n';
			cin >> aux;

			if (aux=="s" || aux=="S") {
				iPeli->confirmarAltaCine();
			}else {
				iPeli->cancelar(); //Esta funcion solo libera la memoria para que no interfiera con el caso de uso siguiente
			}

			cout << "Desea ingresar otro Cine? (S/N): " << '\n';
			cin >> aux;
			flagWhile=(aux!="n" && aux!="N");

		}while(flagWhile);

}

void altaFuncion() {
		string aux="";
		DtFecha fecha;
		DtHora hora;
		string auxFecha="", auxHora="";
		IPelicula* iPeli=fab->getIPelicula();
		vector<DtPelicula> listaPeliculas=iPeli->darListaPeliculas();
		bool sigueAgregando=true;
		cout << "Selecciona una Pelicula de la lista: " << '\n';
		for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++it){
				cout << (*it).getTitulo() << '\n';
		}
		//cin >> aux;
		cin.ignore();
		getline(cin,aux, '\n');
		iPeli->seleccionarPelicula2(aux);
		vector<DtCine> listaCines=iPeli->darListaCines();
		do{

			cout << "Selecciona un Cine de la lista: " << '\n';
			for(vector<DtCine>::iterator it=listaCines.begin(); it!=listaCines.end(); ++it){
					cout << (*it).getNumero() << '\n';
			}
			cin >> aux;
			iPeli->seleccionarCine(stoi(aux));
			vector<DtSala> listaSalas=iPeli->darListaSalas();
			cout << "Selecciona una Sala de la lista: " << '\n';
			for(vector<DtSala>::iterator it=listaSalas.begin(); it!=listaSalas.end(); ++it){
					cout << (*it).getNumero() << '\n';
			}
			cin >> aux;
			iPeli->seleccionarSala(stoi(aux));
			cout << "Ingresa la fecha (dd/mm/yyyy): " << '\n';
			cin >> auxFecha;
			fecha=auxFecha; //sobre carga operador=
			cout << "Ingresa la hora (hh:mm): " << '\n';
			cin >> auxHora;
			hora=auxHora;
			iPeli->altaFuncion(fecha, hora);		
			cout << "Desea ingresar otra Funcion? (S/N): " << '\n';
			cin >> aux;
			sigueAgregando=(aux!="n" && aux!="N");
			listaSalas.clear();


		}while(sigueAgregando);
		iPeli->finalizar();

		listaCines.clear();

		listaPeliculas.clear();

}

void verInfoPelicula(){
	IPelicula* iPeli = fab->getIPelicula();
	bool cancelar=true;
	string aux;
	DtPelicula datosPelicula;
	vector<DtPelicula> listaPeliculas = iPeli->darListaPeliculas();
	vector<DtCine> listaCines;
	vector<DtFuncion> listaFunciones;
	do{
		cout << "Selecciona una Pelicula de la lista(Cancelar=-1): " << '\n';
		for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++it){
				cout << (*it).getTitulo() << '\n';
		}
		cin.ignore();
		getline(cin,aux, '\n');
		cancelar=(aux=="-1");//si elije cancelar
		if (!cancelar){
			datosPelicula=iPeli->seleccionarPelicula1(aux);
			cout<< "Pelicula seleccionada:\nPoster:" + datosPelicula.getPoster() + "\nSinopsis:" + datosPelicula.getSinopsis()<<'\n';
			cout<< "Desea ver mas informacion?(S/N):"<<'\n';
			cin >> aux;
			cancelar=(aux=="N" || aux=="n");
			if (!cancelar){
				listaCines=iPeli->darListaCines();
				cout << "Selecciona un Cine de la lista(Cancelar=-1): " << '\n';
				for(vector<DtCine>::iterator it=listaCines.begin(); it!=listaCines.end();++it){
					cout<< to_string((*it).getNumero()) <<'\n';
				}
				cin >> aux;
				cancelar= (aux=="-1");
				if (!cancelar){
					listaFunciones=iPeli->seleccionarCineConSusFunciones(stoi(aux));
					for(vector<DtFuncion>::iterator it=listaFunciones.begin(); it!=listaFunciones.end(); ++it){
							cout << it->getNumero() + " " + it->getFecha().toString() + " " + it->getHora().toString()<< '\n';
					}
				}
			}

		}
		cout<< "Desea consultar informacion de otra Pelicula?(S/N):"<<'\n';
		cin >> aux;
		cancelar=(aux=="N" || aux=="n");
	}while(!cancelar);
	iPeli->finalizar();
}

void eliminarPelicula(){
	string aux="";
	IPelicula* iPeli = fab->getIPelicula();
	vector<DtPelicula> listaPeliculas=iPeli->darListaPeliculas();
	cout << "Selecciona una Pelicula de la lista: " << '\n';
	for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++it){
			cout << (*it).getTitulo() << '\n';
	}
	cin.ignore();
	getline(cin,aux, '\n');
	iPeli->seleccionarPelicula2(aux);
	cout << "Confirma que desea eliminar la pelicula " + aux +"?(S/N)" << '\n';
	cin >> aux;
	if (aux=="S" || aux=="s"){
		iPeli->confirmarEliminar();
	}
	iPeli->finalizar();
	listaPeliculas.clear();

}

void comentarPelicula(){
	IPelicula* iPeli = fab->getIPelicula();
	bool quiereAgregarCom;
	string aux;
	vector<DtComentario> listaComentarios;
	vector<DtPelicula> listaPeliculas = iPeli->darListaPeliculas();
	cout << "Selecciona una Pelicula de la lista: " << '\n';
	for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++it){
			cout << (*it).getTitulo() << '\n';
	}
	cin.ignore();
	getline(cin,aux, '\n');
	iPeli->seleccionarPelicula2(aux);
	do{
		listaComentarios=iPeli->darListaComentarios();
		mostrarComentario(listaComentarios, 0);
		cout << "Que desea hacer: \n1-Nuevo comentario a Pelicula.\n2-Responder Comentario.  " << '\n';
		cin >> aux;
		if (aux=="1"){
			cout << "Escribi el nuevo comentario: " << '\n';
			cin.ignore();
			getline(cin,aux, '\n');
			iPeli->crearComentario(aux);
		}else{
			cout << "Selecciona el codigo por su id: " << '\n';
			cin >> aux;
			iPeli->seleccionarComentario(stoi(aux));
			cout << "Escribi el nuevo comentario: " << '\n';
			cin.ignore();
			getline(cin,aux, '\n');
			iPeli->responderComentario(aux);
		}
		cout << "Desea seguir comentando esta Pelicula? (S/N)" << '\n';
		cin >> aux;
		quiereAgregarCom=(aux=="S" || aux=="s");
		listaComentarios.clear();
	}while(quiereAgregarCom);
	listaPeliculas.clear();


}

void verComentariosPelicula(){
	IPelicula* iPeli = fab->getIPelicula();
	bool quiereAgregarCom;
	string aux;
	vector<DtPelicula> listaPeliculas = iPeli->darListaPeliculas();
	cout << "Selecciona una Pelicula de la lista: " << '\n';
	for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++it){
			cout << (*it).getTitulo() + " " + (*it).getPoster() << '\n';
	}
	cin.ignore();
	getline(cin,aux, '\n');
	iPeli->seleccionarPelicula2(aux);
	vector<DtComentario> listaComentarios=iPeli->darListaComentarios();
	cout << aux << '\n';

	mostrarComentario(listaComentarios, 0);
	vector<DtPuntaje> listaPuntaje=iPeli->darListaPuntajes();
	cout << "Puntajes" << '\n';
	for(vector<DtPuntaje>::iterator it=listaPuntaje.begin(); it!=listaPuntaje.end(); ++it){
			cout << (*it).getUsuario() + ": " + to_string((*it).getPuntaje())<< '\n';
	}

	listaPeliculas.clear();
	listaComentarios.clear();
	listaPuntaje.clear();

}

//Funcion auxiliar
void mostrarComentario(vector<DtComentario> l, int tab){
	string altura="";
	for(int i=1; i<=tab; i++){
			altura=altura + "		";
	}
	for(vector<DtComentario>::iterator it=l.begin(); it!=l.end(); ++it){
			cout << altura + "<" + (*it).getUsuario() + ">:<" + (*it).getDescripcion() + ">" << '\n';
			mostrarComentario((*it).getRespuestas(), tab+1);
	}
}

void puntuarPelicula(){
	IPelicula* iPeli = fab->getIPelicula();
	bool quiereAgregarCom;
	string aux;
	vector<DtPelicula> listaPeliculas = iPeli->darListaPeliculas();
	cout << "Selecciona una Pelicula de la lista: " << '\n';
	for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++it){
			cout << (*it).getTitulo() + " " + (*it).getPoster() << '\n';
	}
	cin.ignore();
	getline(cin,aux, '\n');
	iPeli->seleccionarPelicula2(aux);
	if (iPeli->yaPuntuo()){
		string puntaje = to_string(iPeli->mostrarPuntaje());
		cout << "Ya puntuaste esta pelicula, con " + puntaje + "puntos. Deseas cambiarlo?(S/N)"<< '\n';
		cin >> aux;
		if (aux=="S" || aux=="s"){
			cout << "Cual es el nuevo puntaje? (1 al 10)"<< '\n';
			cin >> aux;
			iPeli->ingresarPuntaje(stoi(aux));
		}
	}else{
		cout << "Ccon cuanto deseas puntuar la pelicula? (1 al 10)"<< '\n';
		cin >> aux;
		iPeli->ingresarPuntaje(stoi(aux));
	}

}

void crearReserva(){
	IPelicula* iPeli = fab->getIPelicula();
	bool cancelar=true;
	string aux;
	DtPelicula datosPelicula;
	vector<DtPelicula> listaPeliculas = iPeli->darListaPeliculas();
	vector<DtCine> listaCines;
	vector<DtFuncion> listaFunciones;
	do{
		cout << "Selecciona una Pelicula de la lista(Cancelar=-1): " << '\n';
		for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++it){
				cout << it->getTitulo() << '\n';
		}
		cin.ignore();
		getline(cin,aux, '\n');
		cancelar=(aux=="-1");//si elije cancelar
		if (!cancelar){
			datosPelicula=iPeli->seleccionarPelicula1(aux);
			cout<< "Pelicula seleccionada:\nPoster:" + datosPelicula.getPoster() + "\nSinopsis:" + datosPelicula.getSinopsis()<<'\n';
			cout<< "Desea ver mas informacion?(S/N):"<<'\n';
			cin >> aux;
			cancelar=(aux=="N" || aux=="n");
			if (!cancelar){
				listaCines=iPeli->darListaCines();
				cout << "Selecciona un Cine de la lista(Cancelar=-1): " << '\n';
				for(vector<DtCine>::iterator it=listaCines.begin(); it!=listaCines.end();++it){
					cout<< it->getNumero() + " " + it->getDireccion().getCalle() + " " + it->getDireccion().getCalle()<<'\n';
				}
				cin >> aux;
				cancelar= (aux=="-1");
				if (!cancelar){
					listaFunciones=iPeli->seleccionarCineConSusFunciones(stoi(aux));
					for(vector<DtFuncion>::iterator it=listaFunciones.begin(); it!=listaFunciones.end(); ++it){
							cout << it->getNumero() + " " + it->getFecha().toString() + " " + it->getHora().toString()<< '\n';
					}
					IReserva* iRes=fab->getIReserva();
					string numFuncion="";
					string cantAsientos="";
					int descuento=0;
					DtPago desc;

					cout << "Selecciona una Funcion: " << '\n';
					cin >> numFuncion;
					cout << "Selecciona la cantidad de asientos: " << '\n';
					cin >> cantAsientos;
					cout << "Que tipo de pago desea? (1-Debito, 2-Credito): " << '\n';
					cin >> aux;
					iRes->seleccionarFuncion(stoi(numFuncion), stoi(cantAsientos));
					cout << "Que tipo de pago desea? (1-Debito, 2-Credito): " << '\n';
					cin >> aux;
					if (aux=="1"){//pago debito
						cout << "Ingrese el nombre del Banco: " << '\n';
						cin >> aux;
						descuento=iRes->pagoDebito(aux);
						cout << "Descuento: " + descuento << '\n';

					}else{//pago credito
						cout << "Ingrese el nombre de la Financiera: " << '\n';
						cin >> aux;
						desc=iRes->pagoCredito(aux);
						cout << "Descuento: " + desc.getDescuento() << '\n';
					}
					cout << "Confirma la reserva? (S/N): " << '\n';
					cin >> aux;
					if (aux=="S" || aux=="s"){
						iRes->crearReserva();
					}
					iRes->finalizarReserva();
				}
			}

		}
	}while(!cancelar);
	iPeli->finalizar();
	listaPeliculas.clear();
	listaCines.clear();
	listaFunciones.clear();
}

void cargarDatos(){

	//CINE 21 DE SEPTIEMBRE
	DtDireccion direccion;
	IPelicula* iPeli = fab->getIPelicula();
	IUsuario* iUser = fab->getIUsuario();
	direccion.setCalle("21 de Septiembre");
	direccion.setNumero(6658); //Convierte a numero el string, Capturar excepcion?
	iPeli->ingresarDireccion(direccion.getCalle(), direccion.getNumero());
	iPeli->ingresarPrecioCine(300);
	iPeli->ingresarCapacidad(20);
	iPeli->ingresarCapacidad(60);
	iPeli->ingresarCapacidad(30);
	iPeli->confirmarAltaCine();

	//CINE MIGUEL BARREIRO 4588
	direccion.setCalle("Miguel Barreiro");
	direccion.setNumero(4588); //Convierte a numero el string, Capturar excepcion?
	iPeli->ingresarDireccion(direccion.getCalle(), direccion.getNumero());
	iPeli->ingresarPrecioCine(250);
	iPeli->ingresarCapacidad(200);
	iPeli->ingresarCapacidad(60);
	iPeli->confirmarAltaCine();

	//PELICULAS
	iPeli->altaPelicula("The Vindicators 3", "Tercera entrega de la saga de superheroes.", "/home/accion/posters/vindicators.png", 180);
	iPeli->altaPelicula("Sangre de campeones", "Documental", "/home/accion/posters/scampeones.png", 180);
	iPeli->altaPelicula("El insulto", "Drama libanes.", "/home/accion/posters/elinsulto.png", 180);
	iPeli->altaPelicula("La noche que no se repite", "Drama libanes.", "/home/accion/posters/elinsulto.png", 180);

	//Funciones
	DtFecha fecha;
	DtHora hora;
	//F1
	iPeli->seleccionarPelicula2("The Vindicators 3");
	iPeli->seleccionarCine(1);
	iPeli->seleccionarSala(1);
	fecha="15/06/2018"; //sobre carga operador=
	hora="14:00";
	iPeli->altaFuncion(fecha, hora);
	iPeli->finalizar();

	//F2
	iPeli->seleccionarPelicula2("Sangre de campeones");
	iPeli->seleccionarCine(1);
	iPeli->seleccionarSala(1);
	fecha="15/06/2018"; //sobre carga operador=
	hora="16:30";
	iPeli->altaFuncion(fecha, hora);
	iPeli->finalizar();

	//F3
	iPeli->seleccionarPelicula2("The Vindicators 3");
	iPeli->seleccionarCine(2);
	iPeli->seleccionarSala(1);
	fecha="15/06/2018"; //sobre carga operador=
	hora="14:00";
	iPeli->altaFuncion(fecha, hora);
	iPeli->finalizar();
	
	//F4
	iPeli->seleccionarPelicula2("El insulto");
	iPeli->seleccionarCine(1);
	iPeli->seleccionarSala(3);
	fecha="15/06/2018"; //sobre carga operador=
	hora="22:00";
	iPeli->altaFuncion(fecha, hora);
	iPeli->finalizar();

	//Usuarios
	iUser->crearUsuario("cachoElNumberOne", "jorgeP4", "/users/registered/cachoElNumberOne.png",1);
	iUser->crearUsuario("carmeBeiro2010", "carmela5688", "/users/registered/carmeBeiro2010.png",1);
	iUser->crearUsuario("ale_ulises", "p4eslomejor21", "/users/registered/ale_ulises.png",9);

	//Financieras se cargan en el objeto mismo
	bool auxiliarBool;
	//Comentarios
	
	iUser->ingresarNick("cachoElNumberOne");
	auxiliarBool=iUser->ingresarContrasenia("jorgeP4");
	iPeli->seleccionarPelicula2("The Vindicators 3");
	iPeli->crearComentario("Es tremenda pelicula. La mejor parte es cuando aparecen Rick y Morty.");//Nuevo Comentario
	iUser->cerrarSesion();
	
	iUser->ingresarNick("carmeBeiro2010");
	auxiliarBool=iUser->ingresarContrasenia("carmela5688");
	iPeli->seleccionarComentario(1);
	iPeli->responderComentario("Esta muy buena pero la mejor parte es cuando explota el planeta con los malos.");
	iUser->cerrarSesion();

	iUser->ingresarNick("cachoElNumberOne");
	auxiliarBool=iUser->ingresarContrasenia("jorgeP4");
	iPeli->seleccionarComentario(2);
	iPeli->responderComentario("Callateee no cuentes el final!!");
	iUser->cerrarSesion();
	
	//Puntajes
	iUser->ingresarNick("cachoElNumberOne");
	auxiliarBool=iUser->ingresarContrasenia("jorgeP4");
	iPeli->seleccionarPelicula2("The Vindicators 3");
	iPeli->ingresarPuntaje(9);
	iUser->cerrarSesion();

	iUser->ingresarNick("carmeBeiro2010");
	auxiliarBool=iUser->ingresarContrasenia("carmela5688");
	iPeli->seleccionarPelicula2("El insulto");
	iPeli->ingresarPuntaje(6);
	iUser->cerrarSesion();

	//Reservas

	IReserva* iRes=fab->getIReserva();
	DtPelicula datosPelicula;
	vector<DtPelicula> listaPeliculas = iPeli->darListaPeliculas();
	vector<DtFuncion> listaFunciones;
	int descuento; 
	DtPago desc;
	//R1
	iUser->ingresarNick("cachoElNumberOne");
	auxiliarBool=iUser->ingresarContrasenia("jorgeP4");
	datosPelicula=iPeli->seleccionarPelicula1("The Vindicators 3");
	listaFunciones=iPeli->seleccionarCineConSusFunciones(1);
	iRes->seleccionarFuncion(1, 7);
	descuento=iRes->pagoDebito("BROU");
	iRes->crearReserva();	
	iRes->finalizarReserva();
	listaFunciones.clear();
	listaPeliculas.clear();
	iPeli->finalizar();
	iUser->cerrarSesion();


	
	//R2
	iUser->ingresarNick("carmeBeiro2010");
	auxiliarBool=iUser->ingresarContrasenia("carmela5688");
	datosPelicula=iPeli->seleccionarPelicula1("The Vindicators 3");
	listaFunciones=iPeli->seleccionarCineConSusFunciones(1);
	iRes->seleccionarFuncion(1, 8);
	desc=iRes->pagoCredito("OCA");
	iRes->crearReserva();	
	iRes->finalizarReserva();
	listaFunciones.clear();
	listaPeliculas.clear();
	iPeli->finalizar();
	iUser->cerrarSesion();


}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
