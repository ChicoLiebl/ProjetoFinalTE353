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
    std::string userDataFile;
    std::string animalDataFile;
    vector<Usuario> usuarios;
    vector<Animal> animais;
    int findUsuario(int id);
public:
    Controle(const char *user_file = "UserData.txt", const char *animal_file = "AnimalData.txt");
    void addUsuario(Usuario entrada);
    void addAnimal(int idUsuario, Animal *entrada);
    void removeUsuario(Usuario entrada);
    void removeAnimal(int idUsuario, Animal entrada);
    void listUsuarios();
    void saveUserData ();
    void loadUserData ();
};

#endif // CONTROLE_H