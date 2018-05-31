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

    this->nickname = nick;
}

bool CtrlUsuario::ingresarContrasenia(string pass){

    map<string, Usuario *>::iterator it;
    it = this->usuarios[this->nickname];
    return (it->getContrasenia() == pass);
}

DtUsuario* CtrlUsuario::getUsuarioLog(){

    if (this->usuarioLog != NULL){

        string nick = this->usuarioLog->getNickname();
        string pass = this->usuarioLog->getCpntrasenia();
        string imagen = this->usuarioLog->getImagen();
        int nivel = this->usuarioLog->getNivel();
        DtUsuario *Data = new DtUsuario(nick, pass, imagen, nivel);
        return Data;
    }
    else return NULL;

} //devuelve NULL si no hay Usuario Logueado
