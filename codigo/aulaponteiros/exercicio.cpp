#include <iostream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;

void popularVetor(vector<int> &vetor, int qtd)
{
    
    for (int i = 0; i < qtd; i++)
    {
        vetor.push_back(rand() % 100);
    }
}

void exibirVetores(vector<int> vetor, string frase)
{
    cout << frase << endl;
    for (int i = 0; i < vetor.size(); i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;    
}

int main() {
    srand(time(NULL));

    vector<int> vetorA, vetorB;

    popularVetor(vetorA, 10);
    popularVetor(vetorB, 10);

    exibirVetores(vetorA,"Vetor A");
    exibirVetores(vetorB, "Vetor B");

    return 0;
}