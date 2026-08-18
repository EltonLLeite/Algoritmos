#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "structs.h"

using namespace std;

int opcao;

void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar jogador" << endl;
    cout << "2 - Buscar jogador por ID" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {

    Jogador jogador;
    vector<Jogador> jogadores;
    srand(time(NULL));

    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar jogador..." << endl;
            if (jogadores.size() < 100)
            {
                jogador.id = rand() % 900000000 + 100000000;
                cout << "Media de pontos: ";
                cin >> jogador.mediaPontos;

                jogadores.push_back(jogador);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }            
            break;
        case 2:
            cout << "Buscar jogador por ID..." << endl;
            if (jogadores.size() > 0)
            {
                int id;
                cout << "Digite o ID do jogador: ";
                cin >> id;
                bool encontrado = false;

                for (int i = 0; i < jogadores.size(); i++)
                {
                    if (jogadores[i].id == id)
                    {
                        cout << "Jogador ID: " << jogadores[i].id << endl;
                        cout << "Media de pontos: " << jogadores[i].mediaPontos << endl;
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado)
                {
                    cout << "Jogador nao encontrado." << endl;
                }
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    

    return 0;
}