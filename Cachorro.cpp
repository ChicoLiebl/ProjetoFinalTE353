#include "Cachorro.h"
#include "Animal.h"
#include <iostream>

using namespace std;

Cachorro::Cachorro() : Animal()
{
    porte = "NONE";
}

Cachorro::Cachorro(string entrada1, string entrada2, string entrada3, int entrada4, bool entrada5, int entrada6,
string entrada7)
: Animal(entrada1, entrada2, entrada3, entrada4, entrada5, entrada6)
{
    porte = entrada7;
}

void Cachorro::cadastrar(int id)
{
    Animal::cadastrar(id);
    cout << "Porte: "; cin >> porte;
}