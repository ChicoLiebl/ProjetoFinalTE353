#include "Cachorro.h"
#include "Animal.h"
#include <iostream>

using namespace std;

Cachorro::Cachorro() : Animal()
{
    this->porte = "NONE";
}

Cachorro::Cachorro(string sexo, string raca, string cor, int idade, bool castrado, int idUsuario, string observacoes, string porte)
: Animal(sexo, raca, cor, idade, castrado, idUsuario, observacoes)
{
    this->porte = porte;
}

void Cachorro::cadastrar(int entrada)
{
    Animal::cadastrar();
    cout << "Porte: "; cin >> porte;
}