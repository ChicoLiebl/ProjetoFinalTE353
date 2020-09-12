#include "Gato.h"
#include "Animal.h"
#include "iostream"

using namespace std;

Gato::Gato() : Animal()
{
    this->calmo = false;
    this->agitado = false;
}

Gato::Gato(string sexo, string raca, string cor, int idade, bool castrado, int idUsuario, string observacoes, bool calmo, bool agitado)
: Animal(sexo, raca, cor, idade, castrado, idUsuario, observacoes)
{
    this->calmo = calmo;
    this->agitado = agitado;
}

void Gato::cadastrar(int entrada)
{
    Animal::cadastrar();
    cout << "É calmo? "; cin >> calmo;
    cout << "É agitado? "; cin >> agitado;
}