#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
private:
    string sexo, raca, cor;
    int idade;
    bool castrado;
    int idUsuario;
public:
    Animal();
    Animal(string, string, string, int, bool, int);
    //~Animal();
    void cadastrar(int id);
};

#endif // ANIMAL_H
