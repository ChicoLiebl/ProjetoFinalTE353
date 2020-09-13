#include <cstring>
#include <fstream>

#include "Controle.h"

Controle::Controle(const char *user_file, const char *caes_file, const char *gatos_file) : 
userDataFile(user_file), caesDataFile(caes_file), gatosDataFile(gatos_file) {

}

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

std::vector<Cachorro>::iterator Controle::findCao(int id) {
    std::vector<Cachorro>::iterator it;
    for (it = caes.begin(); it != caes.end(); it++)
    {
        if (it->getIdAnimal() == id)
        {
            return it;
        }
    }
    return it;
}

std::vector<Gato>::iterator Controle::findGato(int id) {
    std::vector<Gato>::iterator it;
    for (it = gatos.begin(); it != gatos.end(); it++)
    {
        if (it->getIdAnimal() == id)
        {
            return it;
        }
    }
    return it;
}

void Controle::addCao(Cachorro cao) {
    this->caes.push_back(cao);
}

void Controle::removeCao(Cachorro cao) {
    std::vector<Cachorro>::iterator it = this->findCao(cao.getIdAnimal());
    this->caes.erase(it);
}

void Controle::addGato(Gato gato) {
    this->gatos.push_back(gato);
}

void Controle::removeGato(Gato gato) {
    std::vector<Gato>::iterator it = this->findGato(gato.getIdAnimal());
    this->gatos.erase(it);
}

template <class T>
void Controle::saveData (std::vector<T> & vect, std::string data_file) {
  ofstream file;
  file.open(data_file);
  for (int i = 0; i < vect.size(); i++) {
    file << vect[i];
  }
  file.close();
}

template <class T>
void Controle::loadData(std::vector<T> & vect, std::string data_file) {
  // allocator<T> A;
  ifstream file;
  file.open(data_file);
  do {
    T *temp = new T();
    file >> *temp;
    if (temp->isValid() != true) {
      break;
    }
    vect.push_back(*temp);
  } while (1);
  file.close();
}

template <class T>
void Controle::listData(std::vector<T> & vect) {
  for (int i = 0; i < vect.size(); i++){
    vect[i].print();
  }
}

void Controle::saveUserData () {
  saveData(usuarios, userDataFile);
}

void Controle::loadUserData () {
  loadData(usuarios, userDataFile);
}

void Controle::listUsuarios () {
  listData(usuarios);
}

void Controle::saveCaesData () {
  saveData(caes, caesDataFile);
}

void Controle::loadCaesData () {
  loadData(caes, caesDataFile);
}

void Controle::listCaes () {
  listData(caes);
}

void Controle::saveGatosData () {
  saveData(gatos, gatosDataFile);
}

void Controle::loadGatosData () {
  loadData(gatos, gatosDataFile);
}

void Controle::listGatos () {
  listData(gatos);
}

