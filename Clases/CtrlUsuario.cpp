#include "../Definiciones/CtrlUsuario.hpp"


CtrlUsuario* CtrlUsuario::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlUsuario();
    }

    return instancia;
}

void CtrlUsuario::ingresarNick(string nick){

    this->Nickname = nick;
}

bool CtrlUsuario::ingresarContrasenia(string pass){

    map<string, Pelicula *>::iterator it;
    it = this->usuarios[this->Nickname];
    return (it->getContrasenia() == pass);
}

DtUsuario* CtrlUsuario::getUsuarioLog(){

    if (this->UsuarioLog != NULL){

        string nick = this->UsuarioLog->getNickname();
        string pass = this->UsuarioLog->getCpntrasenia();
        string imagen = this->UsuarioLog->getImagen();
        int nivel = this->UsuarioLog->getNivel();
        DtUsuario *Data = new DtUsuario(nick, pass, imagen, nivel);
        return Data;
    }
    else return NULL;

} //devuelve NULL si no hay Usuario Logueado