#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "structs.h"

using namespace std;

int opcao;

// function que cria o menu
void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar funcionário" << endl;
    cout << "2 - Contar e exibir quantos funcionários têm mais de 40 anos e ganham mais de R$ 5.000,00" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {

    Funcionario funcionario;
    vector<Funcionario> funcionarios;
    srand(time(NULL)); // gerador de numeros aleatorios

    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar funcionario..." << endl;
            if (funcionarios.size() < 100)
            {
                funcionario.codigo = rand() % 900000000 + 100000000; // gera um codigo aleatorio de 9 digitos para o funcionario
                cout << "Idade: ";
                cin >> funcionario.idade;
                cout << "Salario: ";
                cin >> funcionario.salario;

                funcionarios.push_back(funcionario);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }
            break;
        case 2:
            cout << "Contar funcionarios..." << endl;
            if (funcionarios.size() > 0)
            {
                for (int i = 0; i < funcionarios.size(); i++)
                {
                    if (funcionarios[i].idade > 40 && funcionarios[i].salario > 5000)
                    {
                        cout << "Funcionario " << i + 1 << ":" << endl;
                        cout << "Codigo: " << funcionarios[i].codigo << endl;
                        cout << "Idade: " << funcionarios[i].idade << endl;
                        cout << "Salario: " << funcionarios[i].salario << endl;
                    }
                }
            }
            else
            {
                cout << "Nenhum funcionario encontrado..." << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    return 0;
}
