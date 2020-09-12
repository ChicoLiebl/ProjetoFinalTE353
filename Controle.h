#ifndef CONTROLE_H
#define CONTROLE_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"
#include "Usuario.h"

using namespace std;

class Controle
{
private:
    vector<Usuario> usuarios;
    list<Animal> animais;
    int findUsuario(int id);
public:
    Controle();
    void addUsuario(Usuario entrada);
    void addAnimal(int idUsuario, Animal *entrada);
    void removeUsuario(Usuario entrada);
    void removeAnimal(int idUsuario, Animal entrada);
};

#endif // CONTROLE_H