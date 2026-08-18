#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "structs.h"

using namespace std;

int opcao;

void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar conta (saldo inicial)" << endl;
    cout << "2 - Depositar" << endl;
    cout << "3 - Mostrar todas as contas" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {

    Conta conta;
    vector<Conta> contas;
    srand(time(NULL));
    float deposito;

    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1: 
            cout << "Cadastrar conta..." << endl;
            if (contas.size() < 100)
            {
                conta.numero = rand() % 900000000 + 100000000;
                cout << "Saldo inicial: ";
                cin >> conta.saldo;

                contas.push_back(conta);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }
            break;
        case 2:
            cout << "Depositar..." << endl;
            if (contas.size() > 0)
            {
                int numero;
                cout << "Numero da conta: ";
                cin >> numero;

                bool encontrado = false;
                for (int i = 0; i < contas.size(); i++)
                {
                    if (contas[i].numero == numero)
                    {
                        cout << "Valor do deposito: ";
                        cin >> deposito;
                        contas[i].saldo += deposito;
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado)
                {
                    cout << "Conta nao encontrada..." << endl;
                }
            }
            else
            {
                cout << "Nenhuma conta cadastrada..." << endl;
            }
            break;
        case 3:
            cout << "Mostrar todas as contas..." << endl;
            if (contas.size() > 0)
            {
                for (int i = 0; i < contas.size(); i++)
                {
                    cout << "Conta " << i + 1 << ": " << endl;
                    cout << "Numero: " << contas[i].numero << endl;
                    cout << "Saldo: " << contas[i].saldo << endl;
                }
            }
            else
            {
                cout << "Nenhuma conta cadastrada..." << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    

    return 0;
}