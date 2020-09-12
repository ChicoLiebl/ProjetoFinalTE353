#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"

using namespace std;

class Cachorro : public Animal
{
private:
    string porte;
public:
    Cachorro();
    Cachorro(string, string, string, int, bool, int, string);
    //~Cachorro();
    void cadastrar(int id);
};

#endif  //CACHORRO_H
