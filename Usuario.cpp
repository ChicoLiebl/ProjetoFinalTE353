#include "Usuario.h"

int idCounter = 0;

Usuario::Usuario() : IdUsuario()
{
    this->nome = "NONE";
    this->cpf = "NONE";
    this->telefone = "NONE";
    this->cidade = "NONE";
    this->bairro = "NONE";
    this->idade = 0;
}

Usuario::Usuario(string nome, string cpf, string telefone, string cidade, string bairro, int idade) : IdUsuario()
{
    this->nome = nome;
    this->cpf = cpf;
    this->telefone = telefone;
    this->cidade = cidade;
    this->bairro = bairro;
    this->idade = idade;
}

int Usuario::getIdUsuario() {
    return idUsuario;
}

bool Usuario::isValid() {
    if (nome == "NONE") {
      return false;
    }
    return true;
}

void Usuario::print () {
  cout << "ID: " << idUsuario <<
          "\tNome: " << nome <<
          "\tCPF: " << cpf <<
          "\tTel: " << telefone <<
          "\tCidade: " << cidade <<
          "\tBairro: " << bairro <<
          "\tIdade: " << idade << endl;
}
