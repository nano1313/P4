#ifndef DTPELICULA_HH
#define DTPELICULA_HH

#include <iostream>

using namespace std;

class DtPelicula {
  private:
    string poster;
    string sinopsis;

  public:
    /* Getters */
    string getPoster();
    string getSinopsis();

    /* Setters */
    void setPoster(string poster);
    void setSinopsis(string sinopsis);

    DtPelicula();
    DtPelicula(string poster, string sinopsis);
    ~DtPelicula();
};

#endif
