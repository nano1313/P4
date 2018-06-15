#include "../Definiciones/DtReserva.hpp"

DtReserva::DtReserva (string titulo, DtFecha fecha, DtHora hora, float precio, int asientos, char tipoPago, int cine) {
    this->tituloPelicula = titulo;
    this->fecha = fecha;
    this->hora = hora;
    this->precio = precio;
    this->asientos = asientos;
    this->tipoPago = tipoPago;
    this->numeroCine = cine;
}
/* Getters */
string DtReserva::getTituloPelicula() {
    return this->tituloPelicula;
}
DtFecha DtReserva::getFecha() {
    return this->fecha;
}
DtHora DtReserva::getHora() {
    return this->hora;
}
float DtReserva::getPrecio() {
    return this->precio;
}
int DtReserva::getAsiento() {
    return this->asientos;
}
int DtReserva::getNumeroCine() {
    return this->numeroCine;
}
char DtReserva::getTipoPago() {
    return this->tipoPago;
}
/* Setters */
void DtReserva::setTituloPelicula(string titulo) {
     this->tituloPelicula = titulo;
}
void DtReserva::setFecha(DtFecha fecha) {
     this->fecha = fecha;
}
void DtReserva::setHora(DtHora hora) {
     this->hora = hora;
}
void DtReserva::setPrecio(float precio) {
     this->precio = precio;
}
void DtReserva::setAsiento(int asientos) {
     this->asientos = asientos;
}
void DtReserva::setNumeroCine(int numero) {
     this->numeroCine = numero;
}