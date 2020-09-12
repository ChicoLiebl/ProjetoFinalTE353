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
    vector<Animal> animais;
    std::vector<Usuario>::iterator findUsuario(int id);
    std::vector<Animal>::iterator findAnimal(int id);
public:
    Controle();
    void addUsuario(Usuario entrada);
    void addAnimal(Animal entrada);
    void removeAnimal(Animal entrada);
};

#endif // CONTROLE_H