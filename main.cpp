#include <iostream>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"
#include "Controle.h"

using namespace std;

void add_user (Controle* ctrl) {
  Usuario user0("Fulano", "000.000.000-00", "(41)99999-9999", "Curitiba", "Centro", 26);
  ctrl->addUsuario(user0);
}

int main() { 
    Controle dataBase;
    dataBase.loadUserData();

    for (int i =0; i < 10; i++) {
      add_user(&dataBase);
    }
    dataBase.listUsuarios();
    dataBase.saveUserData();
    return 0;
}