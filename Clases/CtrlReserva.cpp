#include "../Definiciones/CtrlReserva.hpp"


CtrlReserva* CtrlReserva::getInstancia()
{
    if (instancia == 0)
    {
        instancia = new CtrlReserva();
    }

    return instancia;
}