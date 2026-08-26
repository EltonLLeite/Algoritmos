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
               do
               {
                    cout << "Codigo (9 digitos): ";
                    cin >> produto.codigo;
                    if (produto.codigo < 100000000 || produto.codigo > 999999999)
                    {
                        cout << "Codigo invalido... Redigite" << endl;
                    }
               } while (produto.codigo < 100000000 || produto.codigo > 999999999);
               
               do
               {
                    cout << "Quantidade: ";
                    cin >> produto.quantidade;
                    if (produto.quantidade < 1 || produto.quantidade > 1000000)
                    {
                        cout << "Quantidade invalida... Redigite" << endl;
                    }
               } while (produto.quantidade < 1 || produto.quantidade > 1000000);
               
               do
               {
                    cout << "Preco: ";
                    cin >> precoUnico;
                    if (precoUnico < 0 || precoUnico > 100000)
                    {
                        cout << "Preco invalido... Redigite" << endl;
                    }
               } while (precoUnico < 0 || precoUnico > 100000);
               
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