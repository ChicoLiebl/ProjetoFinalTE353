#ifndef USUARIO_H
#define USUARIO_H

#include "IdUsuario.h"
#include "String.h"
#include <iostream>

using namespace std;

class Usuario : public IdUsuario
{
protected:
    String nome, telefone, cidade, bairro;
    int idade;
    String cpf;
public:
    Usuario();
    Usuario(string, string, string, string, int, string);
    //~Usuario();
    void iniciar();
    void print();
    bool isValid();

    String getCpf();
    int getIdUsuario();

    friend std::ostream & operator << (std::ostream &out, const Usuario & obj) {
      out << obj.idUsuario << "\t" << obj.nome << "\t" << obj.cpf << "\t" 
          << obj.telefone << "\t" << obj.cidade << "\t" 
          << obj.bairro << "\t" << obj.idade << std::endl;
      return out;
    }
    
    friend std::istream & operator >> (std::istream &in,  Usuario &obj) {
      in >> obj.idUsuario;
      in >> obj.nome;
      in >> obj.cpf;
      in >> obj.telefone;
      in >> obj.cidade;
      in >> obj.bairro;
      in >> obj.idade;
      return in;
    }
};

#endif // USUARIO_H
