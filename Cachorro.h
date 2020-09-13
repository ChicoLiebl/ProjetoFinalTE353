#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>

#include "Animal.h"


using namespace std;

class Cachorro : public Animal, IdUsuario
{
private:
    string porte;
public:
    Cachorro();
    Cachorro(string, string, string, int, bool, int, string, string);
    //~Cachorro();
    void cadastrar(int id);
    friend std::ostream & operator << (std::ostream &out, const Cachorro & obj) {
      out << obj.idUsuario << "\t" << obj.idAnimal << "\t"
          << obj.sexo << "\t" << obj.raca << "\t"
          << obj.cor << "\t" << obj.idade << "\t"
          << obj.castrado << "\t" << obj.observacoes << "\t" << obj.porte << std::endl;
      return out;
    }
    
    friend std::istream & operator >> (std::istream &in,  Cachorro &obj) {
      in >> obj.idUsuario;
      in >> obj.idAnimal;
      in >> obj.sexo;
      in >> obj.raca;
      in >> obj.cor;
      in >> obj.idade;
      in >> obj.castrado;
      in >> obj.observacoes;
      in >> obj.porte;
      return in;
    }
};

#endif  //CACHORRO_H
