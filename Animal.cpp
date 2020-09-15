#include "Animal.h"
#include <string>
#include <iostream>

using namespace std;

int idA = 0;

void Animal::novoId() {
    idAnimal = idA++;
}

Animal::Animal() {
    this->idAnimal = -1;
    this->sexo = "NONE";
    this->raca = "NONE";
    this->cor = "NONE";
    this->idade = 0;
    this->castrado = "NONE";
    this->observacoes = "NONE";
}

Animal::Animal(string sexo, string raca, string cor, string castrado, int idade, int idUsuario, string observacoes)
{
    this->idAnimal = -1;
    this->sexo = sexo;
    this->raca = raca;
    this->cor = cor;
    this->idade = idade;
    this->castrado = castrado;
    this->observacoes = observacoes;
}

void Animal::cadastrar()
{
    novoId();
    cout << "Insira os dados do animal:\n" << endl;
    cin.ignore();
    cout << "Sexo: "; getline(cin, sexo);
    cout << "Raca: "; getline(cin, raca);
    cout << "Cor: "; getline(cin, cor);
    cout << "Idade [meses]: "; cin >> idade;
    cout << "castrado? ['sim' ou 'nao'] "; cin >> castrado;
    if(castrado == "sim") castrado = "castrado";
    else castrado == "nao castrado";
    cout << "Observacoes: ";
    getline(cin, observacoes);
}

int Animal::getIdAnimal()
{
    return this->idAnimal;
}

bool Animal::isValid() {
    if (idade == 0) {
      return false;
    }
    return true;
}

void Animal::print() {
  cout << "ID: " << idAnimal
       << "\tsexo: " << sexo
       << "\traca: " << raca
       << "\tcor: " << cor
       << "\tidade: " << idade
       << "\tcastrado: " << castrado
       << "\tobservacoes: " << observacoes;
}