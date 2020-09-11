#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class Usuario
{
private:
    int id;
    static int idCounter;
    string nome, cpf, telefone, cidade, bairro;
    int idade;
public:
    Usuario(string, string, string, string, string, int);
    ~Usuario();
    int getId();
};

class Animal
{
private:
    int idUsuario;
    string sexo, raca, cor;
    int idade;
    bool castrado;
public:
    Animal(string, string, string, int, bool);
    ~Animal();
    void setIdUsuario(int);
};

class Cachorro : public Animal
{
private:
    string porte;
public:
    Cachorro(string, string, string, int, bool, string);
    ~Cachorro();
};

class Gato : public Animal
{
private:
    bool calmo, arisco;
public:
    Gato(string, string, string, int, bool, bool);
    ~Gato();
};

class Controle
{
private:
    vector<Usuario> usuarios;
    list<Animal> animais;
    int findUsuario(int id);
public:
    Controle();
    void addUsuario(Usuario entrada);
    void addAnimal(int idUsuario, Animal *entrada);
    void removeUsuario(Usuario entrada);
    void removeAnimal(int idUsuario, Animal entrada);
};


