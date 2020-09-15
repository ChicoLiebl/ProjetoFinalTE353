#ifndef IDUSUARIO_H
#define IDUSUARIO_H

class IdUsuario
{
protected:
    static int idCounter;
    int idUsuario;
    //int getIdUsuario();
public:
    IdUsuario();
    void novoIdAutomatico();
};

#endif // IDUSUARIO_H
