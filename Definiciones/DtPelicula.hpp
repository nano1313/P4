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
		string getTitulo();
		string getPoster();
		string getSinopsis();
		float getPromPuntaje();
		float getDuracion();

		/* Setters */
		void setTitulo(string titulo);
		void setPoster(string poster);
		void setSinopsis(string sinopsis);
		void setPromPuntaje(float promPuntaje);
		void setDuracion(float duracion);

    DtPelicula();
    DtPelicula(string titulo, string poster,string sinopsis, float promPuntaje, float duracion);
    ~DtPelicula();
};

#endif
