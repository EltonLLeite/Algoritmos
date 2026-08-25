#include <iostream>
#include <vector>
#include <string>
#include "structs.h"

using namespace std;

int main() {

    int opcao;
    vector<Pessoa> pessoas;
    Pessoa temp;

    do
    {
        system("cls");
        cout << "** MENU **" << endl;
        cout << "1 - Cadastrar pessoa" << endl;
        cout << "2 - Listar pessoas" << endl;
        cout << "0 - Sair" << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar pessoa..." << endl;
            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, temp.nome);
            do
            {
                cout << "Digite sua altura (metros): ";
                cin >> temp.altura;
                if (temp.altura < 0.30 || temp.altura > 2.70)
                {
                    cout << "Altura invalida... Redigite" << endl;
                }
            } while (temp.altura < 0.30 || temp.altura > 2.70);
            
            do
            {
                cout << "Digite seu peso (kg): ";
                cin >> temp.peso;
                if (temp.peso < 30 || temp.peso > 200)
                {
                    cout << "Peso invalido... Redigite" << endl;
                }
            } while (temp.peso < 30 || temp.peso > 200);

            pessoas.push_back(temp);
            break;
        case 2:
            cout << "Listar pessoas..." << endl;
            if (pessoas.size() > 0)
            {
                for (int i = 0; i < pessoas.size(); i++)
                {
                    cout << "Nome: " << pessoas[i].nome << endl;
                    cout << "Altura: " << pessoas[i].altura << endl;
                    cout << "Peso: " << pessoas[i].peso << endl;
                    cout << "=========================" << endl;
                }
            }
            else
            {
                cout << "Nenhuma pessoa registrada..." << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
       
    system("cls");

    return 0;
}