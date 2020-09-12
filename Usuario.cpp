#include "Usuario.h"

int idCounter = 0;

Usuario::Usuario()
{
    id = idCounter++;
    nome = "NONE";
    cpf = "NONE";
    telefone = "NONE";
    cidade = "NONE";
    bairro = "NONE";
    idade = 0;
}

Usuario::Usuario(string entrada1, string entrada2, string entrada3, string entrada4, string entrada5, int entrada6)
{
    id = idCounter++;
    nome = entrada1;
    cpf = entrada2;
    telefone = entrada3;
    cidade = entrada4;
    bairro = entrada5;
    idade = entrada6;
}

int Usuario::getId()
{
    return id;
}