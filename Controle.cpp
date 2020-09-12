#include <cstring>
#include <fstream>

#include "Controle.h"


Controle::Controle(const char *user_file, const char *animal_file) : userDataFile(user_file), animalDataFile(animal_file)  {

}

void Controle::addUsuario(Usuario usr) {
    this->usuarios.push_back(usr);
}

int Controle::findUsuario(int id) {
    for (int i = 0; i < usuarios.size(); i++)
    {
        if (usuarios[i].getId() == id)
        {
            return i;
        }
    }
    return -1;
}

void Controle::addAnimal(int entrada1, Animal *entrada2) {
    this->animais.push_back(*entrada2);
}

void removeUsuario(Usuario entrada) {

}

void removeAnimal(int idUsuario, Animal entrada) {

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

