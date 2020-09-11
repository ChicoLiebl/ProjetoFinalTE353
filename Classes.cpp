#include "Classes.h"

int Usuario::idCounter = 0;

Usuario::Usuario(string, string, string, string, string, int)
{
    id = idCounter++;
}

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
    entrada2->setIdUsuario(entrada1);
    this->animais.push_back(*entrada2);
}

void removeUsuario(Usuario entrada)
{

}

void removeAnimal(int idUsuario, Animal entrada)
{

}