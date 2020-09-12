#ifndef USUARIO_H
#define USUARIO_H

#include "IdUsuario.h"
#include <iostream>
#include <string>

using namespace std;

class Usuario : public IdUsuario
{
protected:
    string nome, cpf, telefone, cidade, bairro;
    int idade;
public:
    Usuario();
    Usuario(string, string, string, string, string, int);
    //~Usuario();
    int getIdUsuario();
};

#endif // USUARIO_H
