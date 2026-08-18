#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "structs.h"

using namespace std;

int opcao;

void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar aluno e suas notas" << endl;
    cout << "2 - Listar alunos mostrando a matrícula e a média aritmética das duas nota" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {

    Aluno aluno;
    srand(time(NULL));
    vector<Aluno> alunos;
    float media;
    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar alunos..." << endl;
            if (alunos.size() < 100)
            {
                aluno.matricula = rand() % 900000000 + 100000000;
                cout << "Nota 1: ";
                cin >> aluno.nota1;
                cout << "Nota 2: ";
                cin >> aluno.nota2;

                alunos.push_back(aluno);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }
            break;
        case 2:
            cout << "Listar alunos..." << endl;
            if (alunos.size() > 0)
            {
                for (int i = 0; i < alunos.size(); i++)
                {
                    media = (alunos[i].nota1 + alunos[i].nota2) / 2;
                    cout << "Aluno " << i + 1 << ": " << endl;
                    cout << "Matricula: " << alunos[i].matricula << endl;
                    cout << "Media: " << media << endl;
                }
            }
            else
            {
                cout << "Nenhum aluno cadastrado..." << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    

    return 0;
}