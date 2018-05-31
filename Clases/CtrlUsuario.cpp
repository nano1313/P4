#include "../Definiciones/CtrlUsuario.hpp"


CtrlUsuario* CtrlUsuario::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlUsuario();
    }

    return instancia;
}