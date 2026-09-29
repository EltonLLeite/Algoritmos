/*
fazer um programa que tenha um método que receba um vetor de números inteiros, o tamanho desse vetor e retorne true se o vetor estiver 
ordenado ou false se o vetor estiver desordenado.
*/


#include <iostream>
#include <string>
#include <ctime>
#define TAM 10

using namespace std;

#include "../util.h"

int main() {
    srand(time(NULL));
    int vetor[TAM];

    // rotina para preencher o vetor com números aleatórios
    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 100;
    }

    // rotina para printar o vetor
    for (int i = 0; i < TAM; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    bool ordenado = verificarOrdenacaoVetor(vetor, TAM);
    if (ordenado) {
        cout << "Vetor ordenado" << endl;
    }
    else {
        cout << "Vetor desordenado" << endl;
    }

    return 0;
}