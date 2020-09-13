#include "Animal.h"
#include <iostream>

using namespace std;

int idA = 0;

Animal::Animal() {
    this->idAnimal = idA++;
    this->sexo = "NONE";
    this->raca = "NONE";
    this->cor = "NONE";
    this->idade = 0;
    this->castrado = false;
    this->observacoes = "NONE";
}

Animal::Animal(string sexo, string raca, string cor, int idade, bool castrado, int idUsuario, string observacoes)
{
    this->idAnimal = idA++;
    this->sexo = sexo;
    this->raca = raca;
    this->cor = cor;
    this->idade = idade;
    this->castrado = castrado;
    this->observacoes = observacoes;
}

void Animal::cadastrar()
{
    cout << "Insira os dados do animal:\n" << endl;
    cout << "Sexo: "; cin >> sexo;
    cin.ignore();
    cout << "Raça: "; getline(cin, raca);
    cout << "Cor: "; getline(cin, cor);
    cout << "Idade [meses]: "; cin >> idade;
    cout << "É castrado? "; cin >> castrado;
}

int Animal::getIdAnimal()
{
    return this->idAnimal;
}

bool Animal::isValid() {
    if (sexo == "NONE") {
      return false;
    }
    return true;
}

void Animal::print() {
  cout << "\tidAnimal: " << idAnimal
       << "\tsexo: " << sexo
       << "\traca: " << raca
       << "\tcor: " << cor
       << "\tidade: " << idade
       << "\tcastrado: " << castrado
       << "\tobservacoes: " << observacoes << endl;
}