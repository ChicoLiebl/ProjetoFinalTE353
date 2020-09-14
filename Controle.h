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

class Controle {
private:
    std::string userDataFile;
    std::string caesDataFile;
    std::string gatosDataFile;
    vector<Usuario> usuarios;
    vector<Cachorro> caes;
    vector<Gato> gatos;
    
    template <class T>
    void saveData(std::vector<T> & vect, std::string data_file);
    
    template <class T>
    void loadData(std::vector<T> & vect, std::string data_file);
    
    template <class T>
    void listData(std::vector<T> & vect);
public:
    Controle(const char *user_file = "UserData.txt", const char *caes_file = "CaesData.txt", const char *gatos_file = "GatosData.txt");
    
    Usuario findUsuarioCPF(int cpf);
    Usuario findUsuarioID(int id);
    std::vector<Cachorro>::iterator findCao(int id);
    std::vector<Gato>::iterator findGato(int id);
    
    void addUsuario(Usuario entrada);
    void removeUsuario(Usuario entrada);

    void addCao(Cachorro cao);
    void removeCao(Cachorro cao);

    void addGato(Gato gato);
    void removeGato(Gato gato);

    void listUsuarios();
    void saveUserData ();
    void loadUserData ();

    void listCaes();
    void saveCaesData ();
    void loadCaesData ();

    void listGatos();
    void saveGatosData ();
    void loadGatosData ();

};

#endif // CONTROLE_H