#include <stdio.h>
#include <iostream>
#include <string>

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
void iniciarSesion();
void verInfoPelicula();
void verComentariosPelicula();
void crearReserva();
void puntuarPelicula();
void comentarPelicula();
void verReservas();
void cerrarSesion();
void altaCine();
void altaFuncion();
void eliminarPelicula();

void switchNoLog(int resp);
void switchLog(int resp);
void switchAdmin(int resp);

/*Fin Cabezales*/

Fabrica fab;

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
		Fabrica* fab;
		fab=fab->getInstancia();
		IUsuario iUsr=fab->getIUsuario();

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
			IUsuario iUser =fab->getIUsuario();
			string aux="";
			bool flagWhile;
			do{
				cout << "Ingresa tu nick: " << '\n';
				cin >> aux;
				iUser->ingresarNick(aux);
				cout << "Ingresa tu password: " << '\n';
				cin >> aux;
				flagWhile=iUser->ingresarContrasenia(aux);
				if(!flagWhile){
					cout << "Datos incorrectos... \nDesea volver a intentar(S/N):" << '\n';
					cin >> aux;
					if(aux=="n" || aux=="N"){
						flagWhile=true;
					}
				}
			}while(!flagWhile);
}

void cerrarSesion(){
	IUsuario iUser=fab->getIUsuario();
	iUser->cerrarSesion();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
