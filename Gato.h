#ifndef GATO_H
#define GATO_H

#include "Animal.h"

class Gato : public Animal
{
private:
    bool calmo, agitado;
public:
    Gato();
    Gato(string, string, string, int, bool, int, bool, bool);
    //~Gato();
    void cadastrar(int id);
};

#endif // GATO_H
