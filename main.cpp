#include <iostream>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"
#include "Controle.h"
#include "utils.h"
#include "String.h"

using namespace std;

void entrar();
void cadastrarUsuario();
void cadastrarAnimal();
void verAnimais();
void verAnimaisUsuario();

void add_user(Controle* ctrl);

Controle dataBase;
Usuario user;
Gato user_gato;
Cachorro user_cachorro;

int main()
{ 
  dataBase.loadUserData();
  dataBase.loadCaesData();
  dataBase.loadGatosData();

  int escolha, escolhaAnimal, idEscolha;
  
  while (1)
  {
    clear_screen();
    cout << "Escolha uma opcao\n\n(1) Entrar\n(2) Cadastrar novo usuario\n" << endl;
    cin >> escolha;
    switch (escolha)
    {
    case 1:
      entrar();
      break;
    case 2:
      cadastrarUsuario();
      break;
    default:
      break;
    }

    clear_screen();
    user.print();
    cout << "Insira a operacao:\n\n(1) Ver animais\n(2) Cadastrar animal\n(3) Ver meus animais cadastrados\n" << endl;
    cin >> escolha;
    clear_screen();

    switch (escolha)
    {
    case 1:
      verAnimais();
      system("pause");
      break;
    case 2:
      cadastrarAnimal();
      break;
    case 3:
      verAnimaisUsuario();
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

void entrar()
{
  int cpfEntrada;
  cout << "Digite seu CPF: ";
  cin >> cpfEntrada;
  user = dataBase.findUsuarioCPF(cpfEntrada);
  //if(user.getCpf() != cpfEntrada) return 0;
}

void cadastrarUsuario()
{
  user.iniciar();
  user.novoIdAutomatico();
  dataBase.addUsuario(user);
  dataBase.saveUserData();
}

void cadastrarAnimal()
{
  int escolha;
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
}

void verAnimais()
{
  int escolha, escolhaAnimal, idEscolha;
  cout << "Cachorro ou gato?\n\n(1) Cachorro\n(2) Gato" << endl;
  cin >> escolhaAnimal;
  cout << "\nSe interessou por algum? (1) Sim   (2) Nao\n" << endl;
  if(escolhaAnimal == 1)  dataBase.listCaes();
  else if(escolhaAnimal == 2)  dataBase.listGatos();
  cin >> escolha;
  if(escolha == 1)
  {
    cout << "Digite o ID do animal: "; cin >> idEscolha;
    clear_screen();
    cout << "Dados do animal:\n" << endl;
    if(escolhaAnimal == 1) dataBase.findCao(idEscolha)->print();
    else if(escolhaAnimal == 2) dataBase.findGato(idEscolha)->print();
    cout << "\nDados do usuario que cadastrou esse animal:\n" << endl;
    if(escolhaAnimal == 1) (dataBase.findUsuarioID(dataBase.findCao(idEscolha)->getIdUsuario())).print();
    else if(escolhaAnimal == 2) (dataBase.findUsuarioID(dataBase.findGato(idEscolha)->getIdUsuario())).print(); 
  }
}

void verAnimaisUsuario()
{
  int escolha, escolhaAnimal, idEscolha;
  cout << "Deseja remover algum?   (1)Sim (2)Nao\n\n " << endl;
  dataBase.printCaesIdUsuario(user.getIdUsuario());
  dataBase.printGatosIdUsuario(user.getIdUsuario());
  cin >> escolha;
  if(escolha == 1)
  {
    cout << "Cachorro ou gato?\n\n(1) Cachorro\n(2) Gato" << endl;
    cin >> escolhaAnimal;
    cout << "\nDigite ID do animal a ser removido: ";
    cin >> idEscolha;
    if(escolhaAnimal == 1) dataBase.removeCao(idEscolha);
    else if(escolhaAnimal == 2) dataBase.removeGato(idEscolha);
    dataBase.saveCaesData();
    dataBase.saveGatosData();
    clear_screen();
    cout << "ANIMAL REMOVIDO COM SUCESSO!" << endl;
  }
  system("pause");
}