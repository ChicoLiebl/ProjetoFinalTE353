#include "IdUsuario.h"
#include <iostream>

int IdUsuario::idCounter = 0;

IdUsuario::IdUsuario()
{
    idUsuario = -1;
}

void IdUsuario::novoIdAutomatico() {
    idUsuario = idCounter++;
}
