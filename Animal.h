#ifndef ANIMAL_H
#define ANIMAL_H

#include "String.h"
#include "IdUsuario.h"

using namespace std;

class Animal
{
protected:
    int idAnimal;
    String sexo, raca, cor, castrado;
    int idade;
    String observacoes;
public:
    Animal();
    Animal(string, string, string, string, int, int, string);
    void novoId();
    //~Animal();
    void cadastrar();
    void print();
    int getIdAnimal();
    bool isValid();
};

#endif // ANIMAL_H
