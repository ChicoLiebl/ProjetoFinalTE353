#include "Usuario.h"

int idCounter = 0;

Usuario::Usuario()
{
    this->id = idCounter++;
    this->nome = "NONE";
    this->cpf = "NONE";
    this->telefone = "NONE";
    this->cidade = "NONE";
    this->bairro = "NONE";
    this->idade = 0;
}

Usuario::Usuario(string nome, string cpf, string telefone, string cidade, string bairro, int idade)
{
    this->id = idCounter++;
    this->nome = nome;
    this->cpf = cpf;
    this->telefone = telefone;
    this->cidade = cidade;
    this->bairro = bairro;
    this->idade = idade;
}

int Usuario::getId()
{
    return id;
}

bool Usuario::isValid() {
    if (nome == "NONE") {
      return false;
    }
    return true;
}

void Usuario::print () {
  cout << "ID: " << id <<
          "\tNome: " << nome <<
          "\tCPF: " << cpf <<
          "\tTel: " << telefone <<
          "\tCidade: " << cidade <<
          "\tBairro: " << bairro <<
          "\tIdade: " << idade << endl;
}
