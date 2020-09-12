#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>

using namespace std;

class Usuario
{
private:
    int id;
    string nome, cpf, telefone, cidade, bairro;
    int idade;
public:
    Usuario();
    Usuario(string, string, string, string, string, int);
    //~Usuario();
    int getId();
    void print();
    bool isValid();

    // Friend functions to write and read data on files
    // bool operator == (const Usuario & obj) {
    //   return (id == obj.id) &&
    //   (nome == obj.nome) &&
    //   (cpf == obj.cpf) &&
    //   (telefone == obj.telefone) &&
    //   (cidade == obj.cidade) &&            
    //   (bairro == obj.bairro) &&
    //   (idade == obj.idade);
    // }

    friend std::ostream & operator << (std::ostream &out, const Usuario & obj) {
      out << obj.id << "\t" << obj.nome << "\t" << obj.cpf << "\t" 
          << obj.telefone << "\t" << obj.cidade << "\t" 
          << obj.bairro << "\t" << obj.idade << std::endl;
      return out;
    }
    
    friend std::istream & operator >> (std::istream &in,  Usuario &obj) {
      in >> obj.id;
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
