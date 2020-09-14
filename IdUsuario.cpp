#include "IdUsuario.h"

int idU = 0;

IdUsuario::IdUsuario()
{
    idUsuario = idU++;
}

int IdUsuario::getIdUsuario()
{
    return idUsuario;
}