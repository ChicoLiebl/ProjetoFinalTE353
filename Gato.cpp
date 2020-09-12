#include "Gato.h"
#include "Animal.h"
#include "iostream"

using namespace std;

Gato::Gato() : Animal()
{
    calmo = false;
    arisco = false;
}

Gato::Gato(string entrada1, string entrada2, string entrada3, int entrada4, bool entrada5, int entrada6, 
bool entrada7, bool entrada8)
: Animal(entrada1, entrada2, entrada3, entrada4, entrada5, entrada6)
{
    calmo = entrada7;
    arisco = entrada8;
}

void Gato::cadastrar(int id)
{
    Animal::cadastrar(id);
    cout << "É calmo? "; cin >> calmo;
    cout << "É arisco? "; cin >> arisco;
}