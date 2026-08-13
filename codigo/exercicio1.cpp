// Fazer um programa em C ou C++ que preencha um vetor de string com n nomes e exiba-os

#include <iostream>
#include <string>

using namespace std;

#define TAMANHO 4

int main() {
    string nomes[TAMANHO];
    int quantidadeIseridos = 0;
    int opcao;
    string nome;
    bool houveTroca = true;
    string auxiliar;

    do
    {
        cout << "MENU" << endl;
        cout << "1 - Cadastrar nomes" << endl;
        cout << "2 - Listar nomes" << endl;
        cout << "3 - Limpar vetor" << endl;
        cout << "4 - Pesquisar nome" << endl;
        cout << "5 - Ordenar nomes" << endl;
        cout << "0 - Encerrar programa" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar nomes..." << endl;
            if (quantidadeIseridos == TAMANHO)
            {
                cout << "Vetor lotado...";
            }
            else
            {
                for (int i = 0; i < TAMANHO; i++)
                {
                    cout << "Digite o nome: ";
                    getline(cin, nome);
                    fflush(stdin);

                    nomes[quantidadeIseridos] = nome;
                    quantidadeIseridos++;
                }
            }
            break;
        case 2:
            cout << "Listar nomes..." << endl;
            if (quantidadeIseridos == 0)
            {
                cout << "Vetor vazio..." << endl;
            }
            else
            {
                for (int i = 0; i < quantidadeIseridos; i++)
                {
                    cout << nomes[i] << endl;
                }
                
            }
            break;
        case 3:
            cout << "Limpando o vetor..." << endl;
            if (quantidadeIseridos == 0)
            {
                cout << "Vetor vazio..." << endl;
            }
            else
            {
                for (int i = 0; i < TAMANHO; i++)
                {
                    nomes[i] = "";
                }
            quantidadeIseridos = 0;
            }
            break;
        case 4:
            cout << "Procurar nomes de vetor..." << endl;
            if (quantidadeIseridos == 0)
            {
                cout << "Vetor vazio..." << endl;
            }
            else
            {
                cout << "Digite o nome para pesquisa: ";
                getline(cin, nome);
                int quantidadeLocalizados = 0;
                for (int i = 0; i < quantidadeIseridos; i++)
                {
                    if (nomes[i].find(nome) != std::string::npos)
                    {
                        cout << nomes[i] << endl;
                        quantidadeLocalizados++;
                    }
                }
            }
            break;
        case 5:
            cout << "Ordenando o vetor..." << endl;
            do
            {
                houveTroca = false;
                for (int i = 0; i < quantidadeIseridos-1; i++)
                {
                    if (nomes[i] > nomes[i+1])
                    {
                        houveTroca = 1;
                        auxiliar = nomes[i];
                        nomes[i] = nomes[i+1];
                        nomes[i+1] = auxiliar;
                    }
                }
            } while (houveTroca);
            
            break;
        }
        
    } while (opcao != 0);
    

    return 1;
}
