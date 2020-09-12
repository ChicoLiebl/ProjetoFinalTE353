#include "Controle.h"


void Controle::addUsuario(Usuario entrada)
{
    this->usuarios.push_back(entrada);
}

int Controle::findUsuario(int id)
{
    for (int i = 0; i < usuarios.size(); i++)
    {
        if (usuarios[i].getId() == id)
        {
            return i;
        }
    }
    return -1;
}

void Controle::addAnimal(int entrada1, Animal *entrada2)
{
    this->animais.push_back(*entrada2);
}

void removeUsuario(Usuario entrada)
{

}

void removeAnimal(int idUsuario, Animal entrada)
{

}