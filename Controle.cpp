#include <string.h>
#include <fstream>

#include "Controle.h"

Controle::Controle(const char *user_file, const char *caes_file, const char *gatos_file) : 
userDataFile(user_file), caesDataFile(caes_file), gatosDataFile(gatos_file) {

}

void Controle::addUsuario(Usuario usuario)
{
  this->usuarios.push_back(usuario);
}

Usuario Controle::findUsuarioCPF(string cpf)
{
  for (int i = 0; i != usuarios.size(); i++)
  {
    if (usuarios[i].getCpf() == cpf)
    {
        return usuarios[i];
    }
  }
  cout << "Usuario nao cadastrado!\n" << endl;
  system("pause");
  system("cls");
}

Usuario Controle::findUsuarioID(int id)
{
  for (int i = 0; i != usuarios.size(); i++)
  {
    if (usuarios[i].getIdUsuario() == id)
    {
        return usuarios[i];
    }
  }
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

void Controle::printCaesIdUsuario(int id) {
    std::vector<Cachorro>::iterator it;
    for (it = caes.begin(); it != caes.end(); it++)
    {
        if (it->getIdUsuario() == id)
        {
            it->print();
        }
    }
}

std::vector<Gato>::iterator Controle::findGato(int id)
{
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

void Controle::printGatosIdUsuario(int id)
{
    std::vector<Gato>::iterator it;
    for (it = gatos.begin(); it != gatos.end(); it++)
    {
        if (it->getIdUsuario() == id)
        {
            it->print();
        }
    }
}

void Controle::addCao(Cachorro cao) {
    this->caes.push_back(cao);
}

void Controle::removeCao(int id) {
    std::vector<Cachorro>::iterator it = this->findCao(id);
    this->caes.erase(it);
}

void Controle::addGato(Gato gato) {
    this->gatos.push_back(gato);
}

void Controle::removeGato(int id) {
    std::vector<Gato>::iterator it = this->findGato(id);
    this->gatos.erase(it);
}

template <class T>
void Controle::saveData (std::vector<T> & vect, std::string data_file) {
  ofstream file;
  file.open(data_file.c_str());
  for (int i = 0; i < vect.size(); i++) {
    vect[i].print();
    file << vect[i];
  }
  file.close();
}

template <class T>
void Controle::loadData(std::vector<T> & vect, std::string data_file) {
  // allocator<T> A;
  ifstream file;
  file.open(data_file.c_str());
  if (!file.is_open()) return;

  while (file.peek() != EOF) {
    T temp;
    file >> temp;
    if (temp.isValid() != true) {
      break;
    }
    vect.push_back(temp);
  }
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
  for (int i = 0; i < usuarios.size(); i++) {
    usuarios[i].novoIdAutomatico();
  }
}

void Controle::listUsuarios () {
  listData(usuarios);
}

void Controle::saveCaesData () {
  saveData(caes, caesDataFile);
}

void Controle::loadCaesData () {
  loadData(caes, caesDataFile);
  for (int i = 0; i < caes.size(); i++) {
    caes[i].novoId();
  }
}

void Controle::listCaes () {
  listData(caes);
}

void Controle::saveGatosData () {
  saveData(gatos, gatosDataFile);
}

void Controle::loadGatosData () {
  loadData(gatos, gatosDataFile);
  for (int i = 0; i < gatos.size(); i++) {
    gatos[i].novoId();
  }
}

void Controle::listGatos () {
  listData(gatos);
}

