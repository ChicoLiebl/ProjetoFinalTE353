#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal() : IdAnimal()
{
    this->sexo = "NONE";
    this->raca = "NONE";
    this->cor = "NONE";
    this->idade = 0;
    this->castrado = false;
    this->idUsuario = 0;
    this->observacoes = "NONE";
}

Animal::Animal(string sexo, string raca, string cor, int idade, bool castrado, int idUsuario, string observacoes) : IdAnimal()
{
    this->sexo = sexo;
    this->raca = raca;
    this->cor = cor;
    this->idade = idade;
    this->castrado = castrado;
    this->idUsuario = idUsuario;
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