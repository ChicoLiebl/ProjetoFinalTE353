#ifndef ANIMAL_H
#define ANIMAL_H

#include "IdUsuario.h"
#include <string>

using namespace std;

class Animal
{
protected:
    int idAnimal;
    string sexo, raca, cor;
    int idade;
    bool castrado;
    string observacoes;
public:
    Animal();
    Animal(string, string, string, int, bool, int, string);
    //~Animal();
    void cadastrar();
    void print();
    int getIdAnimal();
    bool isValid();
};

#endif // ANIMAL_H
