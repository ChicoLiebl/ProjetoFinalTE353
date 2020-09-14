#include "Cachorro.h"
#include "Animal.h"
#include <iostream>

using namespace std;

Cachorro::Cachorro() : Animal(), IdUsuario()
{
    this->porte = "NONE";
}

Cachorro::Cachorro(string sexo, string raca, string cor, string castrado, int idade, int idUsuario, string observacoes, string porte)
: Animal(sexo, raca, cor, castrado, idade, idUsuario, observacoes), IdUsuario()
{
    this->porte = porte;
}

void Cachorro::cadastrar(int entrada)
{
    this->idUsuario = entrada;
    Animal::cadastrar();
    cout << "Porte: ";
    //cin.ignore();
    getline(cin, porte);
    cout << "\n";
}

void Cachorro::print()
{
    Animal::print();
    cout << "\tporte: " << porte << endl;
}

int Cachorro::getIdUsuario()
{
    return idUsuario;
}