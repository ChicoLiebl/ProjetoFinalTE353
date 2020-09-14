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

void Usuario::iniciar()
{
    cout << "Insira seus dados: \n\n";
    cin.ignore();
    cout << "Nome: "; getline(cin, this->nome);
    cout << "CPF: "; getline(cin, this->cpf);
    cout << "Telefone: "; getline(cin, this->telefone);
    cout << "Cidade: "; getline(cin, this->cidade);
    cout << "Bairro: "; getline(cin, this->bairro);
    cout << "Idade: "; cin >> idade;

    cout << "\nUsuario cadastrado com sucesso!\n" << endl;
}

int Usuario::getIdUsuario() {
    return idUsuario;
}

string Usuario::getIdCpf()
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
