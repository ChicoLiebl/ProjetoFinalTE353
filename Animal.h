#ifndef ANIMAL_H
#define ANIMAL_H

#include "IdAnimal.h"
#include "IdUsuario.h"
#include <string>

using namespace std;

class Animal : public IdAnimal, IdUsuario
{
protected:
    string sexo, raca, cor;
    int idade;
    bool castrado;
public:
    Animal();
    Animal(string, string, string, int, bool, int);
    //~Animal();
    void cadastrar();
    int getIdAnimal();
};

#endif // ANIMAL_H
