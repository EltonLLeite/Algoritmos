#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    float nota;
};

vector<Aluno> alunos(5);

void cadastrarAlunos() {
    for (int i = 0; i < 5; i++)
    {
        cout << "Cadastro do aluno " << i + 1 << endl;
        cout << "Nome: ";
        getline(cin, alunos[i].nome);

        cout << "Matricula: ";
        cin >> alunos[i].matricula;

        cout << "Nota: ";
        cin >> alunos[i].nota;

        cin.ignore();
    }
}

void mostrarAlunos() {
    for (int i = 0; i < 5; i++)
    {
        cout << "Aluno " << i + 1 << endl;
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "Nota: " << alunos[i].nota << endl;
        cout << "======================================" << endl;
    }    
}

int main() {

    cadastrarAlunos();

    cout << "======================================" << endl;

    mostrarAlunos();

    return 0;
}
