#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal()
{
    sexo = "NONE";
    raca = "NONE";
    cor = "NONE";
    idade = 0;
    castrado = false;
    idUsuario = 0;
}

Animal::Animal(string entrada1, string entrada2, string entrada3, int entrada4, bool entrada5, int entrada6)
{
    sexo = entrada1;
    raca = entrada2;
    cor = entrada3;
    idade = entrada4;
    castrado = entrada5;
    idUsuario = entrada6;
}

void Animal::cadastrar(int id)
{
    cout << "Insira os dados do animal:\n" << endl;
    cout << "Sexo: "; cin >> sexo;
    cin.ignore();
    cout << "Raça: "; getline(cin, raca);
    cout << "Cor: "; getline(cin, cor);
    cout << "Idade [meses]: "; cin >> idade;
    cout << "É castrado? "; cin >> castrado;
    idUsuario = id;
}