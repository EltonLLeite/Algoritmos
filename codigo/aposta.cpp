// Codigo pra tentar adivinhar onde ta o dado de alguma maneira sla vou descobrir como q faz isso ainda

#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
#include <Windows.h>

using namespace std;

void escreverlento(const string& texto, int velocidade = 1000){
    for (char c : texto)
    {
        cout << c << flush;
        Sleep(velocidade);
    }
}

void escrever(const string& texto, int velocidade = 40){
    for (char c : texto)
    {
        cout << c << flush;
        Sleep(velocidade);
    }
}

int main() {

    int copo1;
    int copo2; // variaveis para serem escolhidas
    int copo3;

    srand(time(NULL)); // gerador de numeros que vou usar para deixar a posição do dado aleatoria

    int dado = rand() % 100;
    int escolhaCerta;

    if (dado < 33)
    {
        copo1 = dado;
        escolhaCerta = 1;
    }
    else if (dado > 33 && dado < 66)
    {
        copo2 = dado;
        escolhaCerta = 2;
    }
    else
    {
        copo3 = dado;
        escolhaCerta = 3;
    }
    
    int escolha;
    escrever("Embaralhando os copos");
    escreverlento("...\n");
    escrever("Voce acha que o dado esta no copo 1, 2 ou 3?: ");
    cin >> escolha;

    if (escolha <= 3 && escolha > 0)
    {
        if (escolha == escolhaCerta)
        {
            escrever("Parabens voce acertou!!\n");
        }
        else
        {
            escrever("Voce errou, tente de novo");
        }
    }
    else cout << "Numero invalido";

    return 1;
}