#include <iostream>
#include <string>
#include <vector>
#include "structs.h"

using namespace std;

int opcao;

void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar carro" << endl;
    cout << "2 - Buscar por preço: digite um valor máximo, e o programa mostra todos os carros mais baratos que esse valor" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {
    
    Carro carro;
    vector<Carro> carros;
    float precoMax;
    
    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1:
            if (carros.size() < 100)
            {
                cout << "Cadastrar carro..." << endl;
                cout << "Placa: ";
                getline(cin, carro.placa);
                cout << "Ano de fabricacao: ";
                cin >> carro.anoFabricacao;
                cout << "Preco: ";
                cin >> carro.preco;

                carros.push_back(carro);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }
            break;
        case 2:
            if (carros.size() > 0)
            {
                cout << "Buscar por preco..." << endl;
                cout << "Digite um valor maximo: ";
                cin >> precoMax;

                for (int i = 0; i < carros.size(); i++)
                {
                    if (carros[i].preco < precoMax)
                    {
                        cout << "Carro " << i + 1 << ": " << endl;
                        cout << "Placa: " << carros[i].placa << endl;
                        cout << "Ano de fabricacao: " << carros[i].anoFabricacao << endl;
                        cout << "Preco: " << carros[i].preco << endl;
                    }
                }
            }
            else
            {
                cout << "Nenhum carro cadastrado..." << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    

    return 0;
}



// Michael Jackson | Oliver tree | Charlie Brown