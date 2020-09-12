#ifndef IO_H
#define  IO_H

#include <stdint.h>
#include <iostream>

class Leitora {
public:
    virtual size_t Ler(uint8_t *dados, size_t len);
};

class Escritora {
public:
    virtual size_t Escrever(uint8_t *buffer);
};

#endif // IO_H
