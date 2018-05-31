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


using namespace std;

/*void registrarSocio(string, string, const DtMascota&, DtFecha);
int buscarCi(string);
void ingresarConsulta(string motivo, string ci, DtFecha fecha);
void agregarMascota(string ci, const DtMascota& dtMascota);
void eliminarSocio(string ci);
DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, string ciSocio, int& cantConsultas);
DtMascota** obtenerMascotas(string ci, int& cantMascotas);
Socio** arregloSocios;
int cantSocios;*/


int main(){

		arregloSocios= new Socio*[MAX_SOCIOS];
		for (int i=0; i<MAX_SOCIOS;i++)
			arregloSocios[i]=NULL;

    string menuDesplegado<//="Bienvenido. Elija la opción.\n1) Registrar socio\n2) Agregar mascota\n3) Ingresar consulta\n4) Ver consulta antes de una fecha\n5) Eliminar socio\n6) Obtener mascotas de un socio\n0) Salir\n";
		string menuCabezal="******************************************************************************\n*                                                                            *\n*                           MOVIEFING                                        *\n*                                                                            *\n******************************************************************************\nBienvenido. Elija la opción."

		string menuUsuarioNoLog="1) Iniciar Sesion\n2) Ver Informacion de Pelicula\n3) Ver Comentarios y Puntaje de Pelicula\n0) Salir\n"
		string menuUsuarioLog="1) Crear Reserva\n2) Puntuar Pelicula\n3) Comentar Pelicula\n4) Ver Informacion de Pelicula\n5) Ver Comentarios y Puntaje de Pelicula\n6) Ver Reservas\n7)Cerrar Sesion\n0) Cerrar Sesion y Salir\n";
		string menuUsuarioAdmin="1) Crear Reserva\n2) Puntuar Pelicula\n3) Comentar Pelicula\n4) Ver Informacion de Pelicula\n5) Ver Comentarios y Puntaje de Pelicula\n6) Ver Reservas\n7)Cerrar Sesion\n0) Cerrar Sesion y Salir\n";
		menuDesplegado=menuCabezal + menuUsuarioNoLog;
		string respStr;

    do
		{
	    cout << menuDesplegado <<endl;
	    cin >> respStr;
			resp	=	StrToInt(respStr);
			int dia, mes, anio;

    	switch (resp){
        case 1:

						cout << "Ingresa el dia(dd):"<<endl;
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
            cout << "Ingresa el nombre del socio:"<<endl;
            //getline(cin,nombreSocio, '\n');
						cin.ignore();
						getline(cin,nombreSocio, '\n');
            cout << "Que tipo de mascota ingresara Perro (P) o Gato(G):"<<endl;
            cin >> tipoMascota;
            cout << "Nombre de la mascota:"<<endl;
						cin.ignore();
						getline(cin,nombreMascota, '\n');
            //cin >> nombreMascota;
            cout << "Genero de la mascota Macho(M) o Hembra(H):"<<endl;
            cin >> respAux;

            if (respAux=="M")
            	generoMascota	=	Macho;
            else
            	generoMascota	=	Hembra;

            cout << "Que peso tiene la mascota:"<<endl;
            cin >> pesoMascota;

            if (tipoMascota=="P" || tipoMascota=="p")
						{
            	cout << "De que raza es su Perro (0-labrador, 1-ovejero 2-bulldog 3-pitbull 4-collie 5-pekines 6-otro):"<<endl;
	            cin >> razaMascota;
	            cout << "Esta vacunado? (S/N):"<<endl;
	            cin >> respAux;

	            if(respAux=="S")
	            	vacunaCachorro=true;
	            else
	            	vacunaCachorro=false;

	            DtPerro perroAux(nombreMascota, generoMascota, pesoMascota, getRazaPerroFromInt(razaMascota),vacunaCachorro);
							registrarSocio(ciSocio, nombreSocio, perroAux,fechaAux);
            }else
						{
            	cout << "Que tipo de pelo tiene su Gato (0-Corto, 1-Mediano, 2-Largo):"<<endl;
	            cin >> tipoPelo;
	            DtGato gatoAux(nombreMascota, generoMascota, pesoMascota, getTipoPeloFromInt(tipoPelo));
	            registrarSocio(ciSocio, nombreSocio, gatoAux,fechaAux);
            }

        break;
        case 2:

        		cout << "Ingresa la CI del socio:"<<endl;
            cin >> ciSocio;
            cout << "Que tipo de mascota ingresara Perro (P) o Gato(G):"<<endl;
            cin >> tipoMascota;
            cout << "Nombre de la mascota:"<<endl;
            //cin >> nombreMascota;
						cin.ignore();
						getline(cin,nombreMascota, '\n');
            cout << "Genero de la mascota Macho(M) o Hembra(H):"<<endl;
            cin >> respAux;

            if (respAux=="M" || respAux=="m" )
            	generoMascota=Macho;
            else
            	generoMascota=Hembra;

            cout << "Que peso tiene la mascota:"<<endl;
            cin >> pesoMascota;
						try{
	            if (tipoMascota=="P" || tipoMascota=="p")
							{
	            	cout << "De que raza es su Perro(0-labrador, 1-ovejero 2-bulldog 3-pitbull 4-collie 5-pekines 6-otro):"<<endl;
		            cin >> razaMascota;
		            cout << "Esta vacunado? (S/N):"<<endl;
		            cin >> respAux;

		            if(respAux=="S")
		            	vacunaCachorro=true;
		            else
		            	vacunaCachorro=false;

		            DtPerro perroAux(nombreMascota, generoMascota, pesoMascota, getRazaPerroFromInt(razaMascota),vacunaCachorro);
		            agregarMascota(ciSocio, perroAux);
	            }else
							{
	            	cout << "Que tipo de pelo tiene su Gato(0-Corto, 1-Mediano, 2-Largo):"<<endl;
		            cin >> tipoPelo;
		            DtGato gatoAux(nombreMascota, generoMascota, pesoMascota, getTipoPeloFromInt(tipoPelo));
		            agregarMascota(ciSocio, gatoAux);
	            }
						}catch(invalid_argument a)
						{
							cout << a.what() << '\n';
						}
        break;
        case 3:
						cout << "Ingresa el dia(dd):"<<endl;
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
						}
				break;
        case 4:
						cout << "Ingresa el dia(dd):"<<endl;
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
						cantConsultas=0;

						try
						{
							ArreglosConsultas= verConsultasAntesDeFecha(fechaAux, ciSocio, cantConsultas);

							for(int k=0; k<cantConsultas;k++)
								cout << ArreglosConsultas[k][0] <<endl;

						}catch(invalid_argument a)
						{
							cout << a.what() << '\n';
						}

        break;
        case 5:
        	cout << "Ingresa la CI del socio:"<<endl;
            cin >> ciSocio;
						try
						{
							eliminarSocio(ciSocio);
						}catch(invalid_argument a)
						{
							cout << a.what() << '\n';
						}
        break;
        case 6:
        	cout << "Ingresa la CI del Socio:"<<endl;
            cin >> ciSocio;
            cantMascotas=0;

						try
						{
							ArregloMascotas = obtenerMascotas(ciSocio ,cantMascotas);

							for(int k=0; k<cantMascotas;k++)
							{
									DtPerro* aux = dynamic_cast<DtPerro*>(&ArregloMascotas[k][0]);

									if (aux!=nullptr)
									{
										DtPerro* p = dynamic_cast<DtPerro*>(&ArregloMascotas[k][0]);
										cout << (*p) <<endl;
									}else
									{
										DtGato* g = dynamic_cast<DtGato*>(&ArregloMascotas[k][0]);
										cout << (*g) <<endl;
									}
								}
						}catch(invalid_argument a){
							cout << a.what() << '\n';
						}

        break;
    }

    }while(resp!=0);

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void registrarSocio(string ci, string nombre, const DtMascota& dtMascota, DtFecha fecha)
{
	if (cantSocios != MAX_SOCIOS && arregloSocios[cantSocios]!=NULL)
		cantSocios++;

	arregloSocios[cantSocios] = new Socio(ci, nombre, fecha);
	arregloSocios[cantSocios]->agregarMascotaDeSocio(dtMascota);
};

void agregarMascota(string ci, const DtMascota& dtMascota)
{
	int i = buscarCi(ci);

	if (i == MAX_SOCIOS)
		throw std::invalid_argument("NO EXISTE SOCIO");										//LEVANTAR EXCEPCION
	else
		arregloSocios[i]->agregarMascotaDeSocio(dtMascota);

};

void ingresarConsulta(string motivo, string ci, DtFecha fecha)
{
	int i = buscarCi(ci);

	if (i == MAX_SOCIOS)
		throw std::invalid_argument("NO EXISTE SOCIO");
	else
		arregloSocios[i]->ingresarConsultaDeSocio(motivo,fecha);
};

void eliminarSocio(string ci)
{
	int i = buscarCi(ci);

	if (i == MAX_SOCIOS)
		throw std::invalid_argument("NO EXISTE SOCIO");
	else
	{
		delete arregloSocios[i];
		arregloSocios[i]=NULL;
		Socio *aux;

		for (int j = i; j < MAX_SOCIOS - 1; j++)
		{
			aux = arregloSocios[j];
			arregloSocios[j] = arregloSocios[j + 1];
			arregloSocios[j + 1] = aux;
		}
	}

	cantSocios--;
};

DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, string ciSocio, int& cantConsultas)
{
	int lugar = buscarCi(ciSocio);
	DtConsulta** aux = new DtConsulta*[20];

	if (lugar!=MAX_SOCIOS)
	{
		Consulta** arreglo = arregloSocios[lugar]->getConsultas();

		int i = 0;
		int j = 0;

		while((j<20)&&(arreglo[j]!=NULL))
		{
			if ((arreglo[j][0].getFechaConsulta())<Fecha)
			{
					aux[i]=new DtConsulta(arreglo[j][0].getFechaConsulta(),arreglo[j][0].getMotivo());
					i++;
			}
			j++;
		}
		cantConsultas	=	i;
	}else
		throw invalid_argument("NO EXISTE SOCIO");

	return aux;
}

DtMascota** obtenerMascotas(string ci, int& cantMascotas)
{
	int lugar = buscarCi(ci);
	DtMascota** aux = new DtMascota*[10];

	if (lugar	!=	MAX_SOCIOS)
	{
		Mascota** arreglo = arregloSocios[lugar]->getMascotas();

		int j=0;
		int i=0;

		while((j < 10) && (arreglo[j]	!=	NULL))
		{
			Perro* p = dynamic_cast<Perro*>(arreglo[j]);

			if(p != nullptr)
			{
				aux[i] = new DtPerro(p->getNombre(), p->getGenero(), p->getPeso(), p->getRaza(), p->getVacuna(), p->obtenerRacionDiaria());
			}else
			{
				Gato* g = dynamic_cast<Gato*>(arreglo[j]);
				aux[i]=new DtGato(g->getNombre(), g->getGenero(), g->getPeso(), g->getTipoPelo(), g->obtenerRacionDiaria());
			}

			i++;
			j++;
			cantMascotas++;
		}

		DtMascota** res;
		res = aux;
		return res;

	}else
		throw invalid_argument("NO EXISTE SOCIO");

}

int buscarCi(string ci)
{
	int i = 0;

	while((i<MAX_SOCIOS) && (arregloSocios[i] != NULL) && (arregloSocios[i]->getCi() != ci))
		i++;

	if (arregloSocios[i] == NULL)
		i = MAX_SOCIOS;

	return i;
}
