#include <iostream>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"
#include "Controle.h"

using namespace std;

void add_user(Controle* ctrl);

Controle dataBase;

int main()
{ 
  dataBase.loadUserData();
  dataBase.loadCaesData();
  dataBase.loadGatosData();

  int escolha, escolhaAnimal;
  string cpfEntrada;
  Usuario user;
  Gato user_gato;
  Cachorro user_cachorro;

  while (1)
  {
    system("cls");
    cout << "Escolha uma opcao\n\n(1) Entrar\n(2) Cadastrar novo usuario\n" << endl;
    cin >> escolha;
    switch (escolha)
    {
    case 1:
      cout << "Digite seu CPF: ";
      cin.ignore();
      getline(cin, cpfEntrada);
      user = dataBase.findUsuario(cpfEntrada);
      if(user.getIdCpf() != cpfEntrada) return 0;
      break;
    case 2:
      user.iniciar();
      dataBase.addUsuario(user);
      dataBase.saveUserData();
      break;
    default:
      break;
    }
    system("cls");
    user.print();
    cout << "Insira a operacao:\n\n(1) Ver animais\n(2) Cadastrar animal\n(3) Ver meus animais cadastrados\n" << endl;
    cin >> escolha;
    system("cls");
    switch (escolha)
    {
    case 1:
      cout << "Cachorro ou gato?\n\n(1) Cachorro\n(2) Gato" << endl;
      cin >> escolhaAnimal;
      cout << "\nSe interessou por algum? (1) Sim   (2) Nao\n" << endl;
      if(escolha == 1)  dataBase.listCaes();
      else if(escolha == 2)  dataBase.listGatos();
      cin >> escolha;
      if(escolha == 1)
      {
        int IdEscolha;
        cout << "Digite o ID do animal: "; cin >> IdEscolha;
        system("cls");
        cout << "Dados do animal:\n" << endl;
        if(escolhaAnimal == 1) dataBase.findCao(IdEscolha)->print();
        else if(escolhaAnimal == 2) dataBase.findGato(IdEscolha)->print();
        cout << "Dados do usuario que cadastrou esse animal:\n" << endl;
        //dataBase.findUsuario(dataBase.findGato(IdEscolha)->getIdUsuario()).print();

        //dataBase.findUsuario(IdEscolha)->;
      }
      system("pause");
      break;
    case 2:
      cout << "Cachorro ou gato?\n\n(1) Cachorro\n(2) Gato" << endl;
      cin >> escolha;
      if(escolha == 1)
      {
        user_cachorro.cadastrar(user.getIdUsuario());
        dataBase.addCao(user_cachorro);
        dataBase.saveCaesData();
      }
      else if(escolha ==2)
      {
        user_gato.cadastrar(user.getIdUsuario());
        dataBase.addGato(user_gato);
        dataBase.saveGatosData();
      }
      break;
    default:
      break;
    }
  }
  
  for (int i =0; i < 10; i++)
  {
    add_user(&dataBase);
  }

  //dataBase.listUsuarios();
  dataBase.saveUserData();
  return 0;
}

void add_user (Controle* ctrl) {
  Usuario user0("Fulano", "000.000.000-00", "(41)99999-9999", "Curitiba", "Centro", 26);
  ctrl->addUsuario(user0);
}