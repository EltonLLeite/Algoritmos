#include <iostream>
#include <string>
#include <vector>
#include "structs.h"
#include <ctime>

using namespace std;

int opcao;

void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar imovel" << endl;
    cout << "2 - Calcular media de consumo geral da rua" << endl;
    cout << "3 - Listar imoveis que consomem acima da media calculada" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {

    Imovel imovel;
    vector<Imovel> imoveis;
    srand(time(NULL));
    float mediaConsumo = 0;

    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1:
            if (imoveis.size() < 100)
            {
                imovel.numeroDaCasa = rand() % 9000 + 1000;
                cout << "Consumo: ";
                cin >> imovel.consumo;

                imoveis.push_back(imovel);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }
            break;
        case 2:
            if (imoveis.size() > 0)
            {
                float soma = 0;
                for (int i = 0; i < imoveis.size(); i++)
                {
                    soma += imoveis[i].consumo;
                }
                mediaConsumo = soma / imoveis.size();
                cout << "Media de consumo geral da rua: " << mediaConsumo << endl;
            }
            else
            {
                cout << "Nenhum imovel cadastrado..." << endl;
            }
            break;
        case 3:
            cout << "Listar imoveis que consomem acima da media calculada..." << endl;
            if (mediaConsumo != 0)
            {
                for (int i = 0; i < imoveis.size(); i++)
                {
                    if (imoveis[i].consumo > mediaConsumo)
                    {
                        cout << "Imovel " << imoveis[i].numeroDaCasa << " consome " << imoveis[i].consumo << endl;
                    }
                }
            }
            else
            {
                cout << "Media de consumo ainda nao calculada..." << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    

    return 0;
}