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

Usuario::Usuario(string nome, string telefone, string cidade, string bairro, int idade, string cpf) : IdUsuario()
{
    this->nome = nome;
    this->telefone = telefone;
    this->cidade = cidade;
    this->bairro = bairro;
    this->cpf = cpf;
    this->idade = idade;
}

void Usuario::iniciar()
{
    cout << "Insira seus dados: \n\n";
    cin.ignore();
    cout << "Nome: "; getline(cin, this->nome);
    cout << "CPF: "; getline(cin, this->cpf);
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

String Usuario::getCpf()
{
    return cpf;
}

bool Usuario::isValid() {
    if (idade == 0) {
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
