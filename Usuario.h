#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>

using namespace std;

class Usuario
{
private:
    int id;
    string nome, cpf, telefone, cidade, bairro;
    int idade;
public:
    Usuario();
    Usuario(string, string, string, string, string, int);
    //~Usuario();
    int getId();
};

#endif // USUARIO_H
