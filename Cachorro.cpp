#include "Cachorro.h"
#include "Animal.h"
#include <iostream>

using namespace std;

Cachorro::Cachorro() : Animal()
{
    this->porte = "NONE";
}

Cachorro::Cachorro(string sexo, string raca, string cor, string castrado, int idade, int idUsuario, string observacoes, string porte)
: Animal(sexo, raca, cor, castrado, idade, idUsuario, observacoes)
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
    cout << "\tporte: " << porte << "\t(CACHORRO)\n\n" << endl;
}

int Cachorro::getIdUsuario()
{
    return idUsuario;
}