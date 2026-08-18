#include <iostream>
#include <vector>
#include "structs.h"

using namespace std;

#define LIMITADOR 100

int opcao;

void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar produto" << endl;
    cout << "2 - Exibir o valor total investido no estoque" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {

    Produto produto;
    vector<Produto> produtos;
    float precoUnico;

    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar produto..." << endl;
            if (produtos.size() < LIMITADOR)
            {
               cout << "Codigo (9 digitos): ";
               cin >> produto.codigo;
               cout << "Quantidade: ";
               cin >> produto.quantidade;
               cout << "Preco: ";
               cin >> precoUnico;

               produto.preco = produto.quantidade * precoUnico;

               produtos.push_back(produto);
            }
            else
            {
                cout << "Estoque cheio..." << endl;
            }
            break;
        case 2:
            cout << "Listando produtos..." << endl;
            for (int i = 0; i < produtos.size(); i++)
            {
                cout << "Produto " << i + 1 << ":" << endl;
                cout << "Codigo: " << produtos[i].codigo << endl;
                cout << "Quantidade: " << produtos[i].quantidade << endl;
                cout << "Preco: " << produtos[i].preco << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    return 0;
}