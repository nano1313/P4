#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

#include "./Definiciones/DtHora.hpp"
#include "./Definiciones/DtFecha.hpp"
#include "./Definiciones/DtDireccion.hpp"
#include "./Definiciones/DtPago.hpp"
#include "./Definiciones/DtPuntaje.hpp"
#include "./Definiciones/DtComentario.hpp"
#include "./Definiciones/DtPuntaje.hpp"
#include "./Definiciones/Fabrica.hpp"
#include "./Definiciones/IUsuario.hpp"
#include "./Definiciones/IReserva.hpp"
#include "./Definiciones/IPelicula.hpp"
#include "./Definiciones/Utils.hpp"


using namespace std;
/*Cabezales de funciones a utilizar*/
void iniciarSesion(); //listo sin probar
void verInfoPelicula();//Listo sin probar
void verComentariosPelicula();
void crearReserva();
void puntuarPelicula();
void comentarPelicula();
void verReservas();
void cerrarSesion(); //listo sin probar
void altaCine(); //listo sin probar
void altaFuncion(); //listo sin probar
void eliminarPelicula(); //lista sin probar

void switchNoLog(int resp);
void switchLog(int resp);
void switchAdmin(int resp);

/*Fin Cabezales*/

Fabrica* fab;

int main(){

		/*Inicializo variables */
		DtUsuario* usrLogueado=NULL;
    string menuDesplegado;//<//="Bienvenido. Elija la opción.\n1) Registrar socio\n2) Agregar mascota\n3) Ingresar consulta\n4) Ver consulta antes de una fecha\n5) Eliminar socio\n6) Obtener mascotas de un socio\n0) Salir\n";
		string menuCabezal="******************************************************************************\n*                                                                            *\n*                           MOVIEFING                                        *\n*                                                                            *\n******************************************************************************\nBienvenido. Elija la opción.";

		string menuUsuarioNoLog="1) Iniciar Sesion\n2) Ver Informacion de Pelicula\n3) Ver Comentarios y Puntaje de Pelicula\n0) Salir\n";
		string menuUsuarioLog="1) Crear Reserva\n2) Puntuar Pelicula\n3) Comentar Pelicula\n4) Ver Informacion de Pelicula\n5) Ver Comentarios y Puntaje de Pelicula\n6) Ver Reservas\n7)Cerrar Sesion\n0) Cerrar Sesion y Salir\n";
		string menuUsuarioAdmin="1) Crear Reserva\n2) Puntuar Pelicula\n3) Comentar Pelicula\n4) Ver Informacion de Pelicula\n5) Ver Comentarios y Puntaje de Pelicula\n6) Ver Reservas\n7) Alta Cine\n8) Alta Funcion\n9) Eliminar Pelicula\n10)Cerrar Sesion\n0) Cerrar Sesion y Salir\n";
		menuDesplegado=menuCabezal + menuUsuarioNoLog;
		string respStr;
		int resp;
		fab=fab->getInstancia();
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
			/*	cout << "Ingresa el dia(dd):"<<endl;
				cin >> dia;
				cout << "Ingrese el mes(mm):"<<endl;
				cin >> mes;
				cout << "Ingrese el año(yyyy):"<<endl;
				cin >> anio;
				fechaAux.setDia(dia);
				fechaAux.setMes(mes);
				fechaAux.setAnio(anio);
				cout << "Ingresa la CI del socio:"<<endl;
				cin >> ciSocio;
				cout << "Cual es el motivo de la consulta?:"<<endl;
				//cin >> motivoConsulta;
				cin.ignore();
				getline(cin,motivoConsulta, '\n');
				try{
				ingresarConsulta(motivoConsulta,ciSocio,fechaAux);
				}catch(invalid_argument a)
				{
					cout << a.what() << '\n';
				}*/
				verComentariosPelicula();
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
		bool flagWhile=true, seguirAgregandoSalas=true;

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
				cout << "Ingresa la capacidad de la Sala Nro." + i + ": " << '\n';
				cin >> aux;
				iPeli->ingresarCapacidad(stoi(aux));
				cout << "Desea seguir ingresando salas? (S/N): " << '\n';
				cin >> aux;
				seguirAgregandoSalas=(aux!="n" && aux!="N");
			} while(seguirAgregandoSalas)

			cout << "Desea confirmar el ingreso del Cine(" + direccion.getCalle() + ", " + direccion.getNumero() + "): " << '\n';
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
		for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++iterator){
				cout << (*it).getTitulo() << '\n';
		}
		//cin >> aux;
		cin.ignore();
		getline(cin,aux, '\n');
		iPeli->seleccionarPelicula(aux);
		vector<int> listaCines=iPeli->darListaCines();
		do{

			cout << "Selecciona un Cine de la lista: " << '\n';
			for(vector<int>::iterator it=listaCines.begin(); it!=listaCines.end(); ++iterator){
					cout << (*it) << '\n';
			}
			cin >> aux;
			iPeli->seleccionarCine(stoi(aux));
			vector<int> listaSalas=iPeli->darListaSalas();
			cout << "Selecciona una Sala de la lista: " << '\n';
			for(vector<int>::iterator it=listaSalas.begin(); it!=listaSalas.end(); ++iterator){
					cout << (*it) << '\n';
			}
			cin >> aux;
			iPeli->seleccionarSala(stoi(aux));
			cout << "Ingresa la fecha (dd/mm/yyyy): " << '\n';
			cin >> auxFecha;
			fecha=auxFecha; //sobre carga operador=
			cout << "Ingresa la hora (hh:mm): " << '\n';
			cin >> auxHora;
			hora=auxHora;
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
	IPelicula iPeli = fab->getIPelicula();
	bool canelar=true;
	string aux;
	DtPelicula datosPelicula;
	vector<DtPelicula> listaPeliculas = iPeli->darListaPeliculas();
	vector<int> listaCines;
	vector<int> listaFunciones;
	do{
		cout << "Selecciona una Pelicula de la lista(Cancelar=-1): " << '\n';
		for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++iterator){
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
				for(vector<int>::iterator it=listaCines.begin(); it!=listaCines.end();++iterator){
					cout<< (*it) <<'\n';
				}
				cin >> aux;
				cancelar= (aux=="-1");
				if (!cancelar){
					listaFunciones=iPeli->seleccionarCine(stoi(aux));
					for(vector<DtPelicula>::iterator it=listaFunciones.begin(); it!=listaFunciones.end(); ++iterator){
							cout << (*it) << '\n';
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
	IPelicula iPeli = fab->getIPelicula();
	cout << "Selecciona una Pelicula de la lista: " << '\n';
	for(vector<DtPelicula>::iterator it=listaPeliculas.begin(); it!=listaPeliculas.end(); ++iterator){
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

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
