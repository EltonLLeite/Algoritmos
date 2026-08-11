#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "meusTipos.h"

int main() {
    vector<Veiculo> garagem;
    int opcao;
    string placa, cor;
    int horaEntrada, minutoEntrada;

    do
    {
        system("cls");  // Limpar a tela (funciona no Windows)
        cout << "Menu de opcoes:\n";
        cout << "1 - Adicionar veiculo\n";
        cout << "2 - Listar veiculos\n";
        cout << "3 - Registrar saida\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();  // Limpar o buffer do cin

        switch (opcao)
        {
        case 1:
            cout << "Digite a placa do veiculo: ";
            getline(cin, placa);
            cout << "Digite a cor do veiculo: ";
            getline(cin, cor);
            cout << "Digite a hora de entrada do veiculo: ";
            cin >> horaEntrada;
            cout << "Digite o minuto de entrada do veiculo: ";
            cin >> minutoEntrada;
            garagem.push_back({placa, cor, horaEntrada, minutoEntrada});
            break;
        
        case 2:
            cout << "Veiculos na garagem:\n";
            if (garagem.size() > 0)
            {
                for (int i = 0; i < garagem.size(); i++)
                {
                    cout << "Veiculo " << i + 1 << ": Placa: " << garagem[i].placa << ", Cor: " << garagem[i].cor;
                    cout << ", Hora de Entrada: " << garagem[i].horaEntrada << ":" << garagem[i].minutoEntrada << endl;
                }
                
            }
            else
            {
                cout << "Nenhum veiculo cadastrado." << endl;
            }
            break;
        case 3:
            if (garagem.size() > 0)
            {
                bool placaRegistrada = false;
                int horaSaida, minutoSaida;
                cout << "Digite a placa do veiculo que saiu: ";
                getline(cin, placa);
                for (int i = 0; i < garagem.size(); i++)
                {
                    if (garagem[i].placa == placa)
                    {
                        placaRegistrada = true;
                        break;
                    }
                }
                if (placaRegistrada)
                {
                    cout << "Veiculo com placa " << placa << " saiu da garagem." << endl;
                    cout << "Digite a hora de saida do veiculo: ";
                    cin >> horaSaida;
                    cout << "Digite o minuto de saida do veiculo: ";
                    cin >> minutoSaida;
                    // Calcular o tempo de permanencia
                    int tempoPermanencia;
                    for (int i = 0; i < garagem.size(); i++)
                    {
                        if (garagem[i].placa == placa)
                        {
                            tempoPermanencia = (horaSaida * 60 + minutoSaida) - (garagem[i].horaEntrada * 60 + garagem[i].minutoEntrada);
                            break;
                        }
                    }
                    cout << "Tempo de permanencia: " << tempoPermanencia << " minutos." << endl;
                    float valorCobrado = tempoPermanencia * 0.5; // R$ 0,50 por minuto
                    cout << "Valor a ser cobrado: R$" << valorCobrado << endl;
                    // Remover o veiculo da garagem
                    for (int i = 0; i < garagem.size(); i++)
                    {
                        if (garagem[i].placa == placa)
                        {
                            garagem.erase(garagem.begin() + i);
                            break;
                        }
                    }
                }

                else
                {
                    cout << "Veiculo com placa " << placa << " nao encontrado." << endl;
                }
            }
            else
            {
                cout << "Nenhum veiculo cadastrado." << endl;
            }
            
            break;
        }
        system("pause");  // Pausar a tela para o usuário ver a saída
    } while (opcao != 0);

    return 0;
}