#ifndef GATO_H
#define GATO_H

#include <iostream>

#include "Animal.h"

class Gato : public Animal, IdUsuario
{
private:
    bool calmo, agitado;
public:
    Gato();
    Gato(string, string, string, int, bool, int, string, bool, bool);
    //~Gato();
    void cadastrar(int id);
    
    friend std::ostream & operator << (std::ostream &out, const Gato & obj) {
      out << obj.idUsuario << "\t" << obj.idAnimal << "\t"
          << obj.sexo << "\t" << obj.raca << "\t"
          << obj.cor << "\t" << obj.idade << "\t"
          << obj.castrado << "\t" << obj.observacoes << "\t"
          << obj.calmo << "\t" << obj.agitado << std::endl;
      return out;
    }
    
    friend std::istream & operator >> (std::istream &in,  Gato &obj) {
      in >> obj.idUsuario;
      in >> obj.idAnimal;
      in >> obj.sexo;
      in >> obj.raca;
      in >> obj.cor;
      in >> obj.idade;
      in >> obj.castrado;
      in >> obj.observacoes;
      in >> obj.calmo;
      in >> obj.agitado;
      return in;
    }
};

#endif // GATO_H
