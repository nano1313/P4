#ifndef DTPELICULA_HH
#define DTPELICULA_HH

#include <iostream>

using namespace std;

class DtPelicula {
  private:
    string titulo;
		string poster;
		string sinopsis;
		float promPuntaje;
		float duracion;

  public:
		/* Getters */
		string getTitulo(); //HECHA
		string getPoster(); //HECHA
		string getSinopsis(); //HECHA
		float getPromPuntaje(); //HECHA
		float getDuracion(); //HECHA

		/* Setters */
		void setTitulo(string titulo); //HECHA
		void setPoster(string poster); //HECHA
		void setSinopsis(string sinopsis); //HECHA
		void setPromPuntaje(float promPuntaje); //HECHA
		void setDuracion(float duracion); //HECHA

    DtPelicula(); //FALTA
    DtPelicula(string titulo, string poster,string sinopsis, float promPuntaje, float duracion); //HECHA
    ~DtPelicula(); //FALTA
};

#endif
