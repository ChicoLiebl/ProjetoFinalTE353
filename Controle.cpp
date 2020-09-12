#include <cstring>
#include <fstream>

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

void removeUsuario(Usuario entrada) {

}

void Controle::saveUserData () {
  ofstream file;
  file.open(userDataFile);
  for (int i = 0; i < usuarios.size(); i++) {
    file << usuarios[i];
  }
  file.close();
}

void Controle::loadUserData () {
  ifstream file;
  file.open(userDataFile);
  do {
    Usuario *temp = new Usuario();
    file >> *temp;
    // temp->print();
    if (temp->isValid() != true) {
      usuarios.back().getId();
      break;
    }
    usuarios.push_back(*temp);
  } while (1);
  file.close();
}

void Controle::listUsuarios () {
  for (int i = 0; i < usuarios.size(); i++){
    usuarios[i].print();
  }
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

