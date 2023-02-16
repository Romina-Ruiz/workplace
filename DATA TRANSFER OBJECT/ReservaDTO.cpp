#include "ReservaDTO.h"


void ReservaDTO::setNumero(int numero)
{
    _numero=numero;
}

void ReservaDTO::setLegajo(int legajo)
{
    _legajo=legajo;
}

void ReservaDTO::setEspacioTrabajo(int espaciodetrabajo)
{
    _espacio_trabajo=espaciodetrabajo;
}

void ReservaDTO::setFecha(Fecha fecha)
{
    _fecha=fecha;
}

void ReservaDTO::setEstado(bool estadoturno)
{
    _estado=estadoturno;
}


int ReservaDTO::getNumero()
{
    return _numero;
}

int ReservaDTO::getLegajo()
{
    return _legajo;
}

int ReservaDTO::getEspacioTrabajo()
{
    return _espacio_trabajo;
}

Fecha ReservaDTO::getFecha()
{
    return _fecha;
}

bool ReservaDTO::getEstado()
{
    return _estado;
}
