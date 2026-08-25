#include <iostream>
#include <string>
#include <vector>
#include "structs.h"

using namespace std;

int main() {

    int opcao;
    Cliente cliente;
    vector<Cliente> clientes;

    do
    {
        system("cls");
        cout << "MENU" << endl;
        cout << "1 - Cadastrar cliente" << endl;
        cout << "2 - Listar todos os clientes cadastrados" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar cliente..." << endl;
            if (clientes.size() < 100)
            {
                do
                {
                    cout << "Codigo: ";
                    cin >> cliente.codigo;
                    if (cliente.codigo < 900000000 || cliente.codigo > 999999999)
                    {
                        cout << "Codigo invalido... Redigite" << endl;
                    }
                } while (cliente.codigo < 900000000 || cliente.codigo > 999999999);
                
                do
                {
                    cout << "Idade: ";
                    cin >> cliente.idade;
                    if (cliente.idade < 16 || cliente.idade > 99)
                    {
                        cout << "Idade invalida... Redigite" << endl;
                    }
                } while (cliente.idade < 16 || cliente.idade > 99);
                
                cin.ignore();

                cout << "Telefone: ";
                getline(cin, cliente.telefone);
                
                clientes.push_back(cliente);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }
            break;
        case 2:
            cout << "Listar clientes..." << endl;
            if (clientes.size() > 0)
            {
                for (int i = 0; i < clientes.size(); i++)
                {
                    cout << "Cliente " << i+1 << ": " << endl;
                    cout << "Codigo: " << clientes[i].codigo << endl;
                    cout << "Idade: " << clientes[i].idade << endl;
                    cout << "Telefone: " << clientes[i].telefone << endl;
                }
            }
            else
            {
                cout << "Vetor vazio..." << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    

    return 0;
}