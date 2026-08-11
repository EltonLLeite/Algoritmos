#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> vetor;
    cout << "Ola turma de algoritmos!" << endl;
    int opcao;
    string palavra;
    do
    {
        cout << "Digite a palavra do elemento " << vetor.size() + 1 << ": ";
        getline(cin, palavra);
        vetor.push_back(palavra);
        fflush(stdin);  // Limpar o buffer do teclado

        cout << "Deseja adicionar outra palavra? (1 - Sim, 0 - Nao): ";
        cin >> opcao;
        cin.ignore();  // Limpar o buffer do cin
    } while (opcao == 1);
    
    for (int i = 0; i < vetor.size(); i++)
    {
        cout << "Palavra " << i + 1 << ": " << vetor[i] << endl;
    }

    return 1;
}