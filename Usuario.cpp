#include "Usuario.h"

int idCounter = 0;

Usuario::Usuario() : IdUsuario()
{
    this->nome = "NONE";
    this->telefone = "NONE";
    this->cidade = "NONE";
    this->bairro = "NONE";
    this->idade = 0;
}

Usuario::Usuario(string nome, string telefone, string cidade, string bairro, int cpf, int idade) : IdUsuario()
{
    this->nome = nome;
    this->telefone = telefone;
    this->cidade = cidade;
    this->bairro = bairro;
    this->cpf = cpf;
    this->cpf = 0;
    this->idade = idade;
}

void Usuario::iniciar()
{
    cout << "Insira seus dados: \n\n";
    cin.ignore();
    cout << "Nome: "; getline(cin, this->nome);
    cout << "CPF: "; cin >> this->cpf;
    cin.ignore();
    cout << "Telefone: "; getline(cin, this->telefone);
    cout << "Cidade: "; getline(cin, this->cidade);
    cout << "Bairro: "; getline(cin, this->bairro);
    cout << "Idade: "; cin >> this->idade;
    cin.ignore();

    cout << "\nUsuario cadastrado com sucesso!\n" << endl;
}

int Usuario::getIdUsuario() {
    return idUsuario;
}

int Usuario::getCpf()
{
    return cpf;
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
    cout << "\n";
}
