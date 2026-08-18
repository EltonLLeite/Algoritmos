#include <iostream>
#include <string>
#include <vector>
#include "structs.h"
#include <ctime>

using namespace std;

int opcao;

void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar aluno" << endl;
    cout << "2 - Exibir o aluno mais alto cadastrado até o momento" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {

    Perfil perfil;
    vector<Perfil> perfis;
    float maiorAltura = 0;
    srand(time(NULL));

    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar perfil..." << endl;
            if (perfis.size() < 100)
            {
                perfil.codigo = rand() % 900000000 + 100000000;
                cout << "Peso: ";
                cin >> perfil.peso;
                cout << "Altura: ";
                cin >> perfil.altura;

                perfis.push_back(perfil);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }
            break;
        case 2:
            cout << "Filtrar perfis..." << endl;
            if (perfis.size() > 0)
            {
                for (int i = 0; i < perfis.size(); i++)
                {
                    if (perfis[i].altura > maiorAltura)
                    {
                        maiorAltura = perfis[i].altura;
                    }
                }
                cout << "O aluno mais alto tem " << maiorAltura << " metros." << endl;
            }
            else
            {
                cout << "Nenhum perfil cadastrado..." << endl;
            }
            break;
        }
    } while (opcao != 0);
    

    return 0;
}