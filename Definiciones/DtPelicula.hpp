#ifndef DTPELICULA_HH
#define DTPELICULA_HH

#include <iostream>
#include "./DtHora.hpp"

using namespace std;

class DtPelicula {
  private:
    string titulo;
		string poster;
		string sinopsis;
		float promPuntaje;
		DtHora duracion;

  public:
		/* Getters */
		string getTitulo();
		string getPoster();
		string getSinopsis();
		float getPromPuntaje();
		DtHora getDuracion();

		/* Setters */
		void setTitulo(string titulo);
		void setPoster(string poster);
		void setSinopsis(string sinopsis);
		void setPromPuntaje(float promPuntaje);
		void setDuracion(DtHora duracion);

    DtPelicula();
    DtPelicula(string titulo, string poster,string sinopsis, float promPuntaje, DtHora duracion);
    //~DtPelicula();
};

#endif
