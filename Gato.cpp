#include "Gato.h"
#include "Animal.h"
#include "iostream"

using namespace std;

Gato::Gato() : Animal()
{
    this->calmo = "NONE";
    this->agitado = "NONE";
}

Gato::Gato(string sexo, string raca, string cor, string castrado, int idade, int idUsuario, string observacoes, string calmo, string agitado)
: Animal(sexo, raca, cor, castrado, idade, idUsuario, observacoes)
{
    this->calmo = calmo;
    this->agitado = agitado;
}

void Gato::cadastrar(int entrada)
{
    this->idUsuario = entrada;
    Animal::cadastrar();
    cout << "Eh calmo? ['sim' ou 'nao'] "; cin >> calmo;
    cout << "Eh agitado? ['sim' ou 'nao'] "; cin >> agitado;
    if(calmo == "sim") calmo = "calmo";
    else calmo == "nao calmo";
    if(agitado == "sim") agitado = "agitado";
    else agitado == "nao agitado";
}

void Gato::print()
{
    Animal::print();
    cout <<"\tcalmo? " << calmo
         << "\tagitado? " << agitado << "\t(GATO)\n\n" << endl;
}

int Gato::getIdUsuario()
{
    return idUsuario;
}