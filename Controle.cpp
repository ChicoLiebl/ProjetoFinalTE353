#include "Controle.h"

void Controle::addUsuario(Usuario usuario)
{
    this->usuarios.push_back(usuario);
}

std::vector<Usuario>::iterator Controle::findUsuario(int id)
{
    std::vector<Usuario>::iterator it;
    for (it = usuarios.begin(); it != usuarios.end(); it++)
    {
        if (it->getIdUsuario() == id)
        {
            return it;
        }
    }
    return it;
}

std::vector<Animal>::iterator Controle::findAnimal(int id)
{
    std::vector<Animal>::iterator it;
    for (it = animais.begin(); it != animais.end(); it++)
    {
        if (it->getIdAnimal() == id)
        {
            return it;
        }
    }
    return it;
}

void Controle::addAnimal(Animal animal)
{
    this->animais.push_back(animal);
}

void Controle::removeAnimal(Animal animal)
{
    std::vector<Animal>::iterator it = this->findAnimal(animal.getIdAnimal());
    this->animais.erase(it);
}