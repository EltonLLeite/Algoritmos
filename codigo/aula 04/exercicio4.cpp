#include <iostream>
#include <string>
#include <vector>
#include "structs.h"
#include <ctime>

using namespace std;

int opcao;

void Menu() {
    cout << "MENU" << endl;
    cout << "1 - Cadastrar livro" << endl;
    cout << "2 - Filtrar livros: exibir apenas os publicados depois de 2020" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
}

int main() {

    Livro livro;
    vector<Livro> livros;
    srand(time(NULL));

    do
    {
        system("cls");
        Menu();

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar livro..." << endl;
            if (livros.size() < 100)
            {
                livro.codigo = rand() % 900000000 + 100000000;
                cout << "Paginas: ";
                cin >> livro.paginas;
                cout << "Ano de publicacao: ";
                cin >> livro.anoPublicacao;

                livros.push_back(livro);
            }
            else
            {
                cout << "Vetor cheio..." << endl;
            }
            break;
        case 2:
            cout << "Filtrar livros..." << endl;
            if (livros.size() > 0)
            {
                for (int i = 0; i < livros.size(); i++)
                {
                    if (livros[i].anoPublicacao > 2020)
                    {
                        cout << "Livro " << i + 1 << ": " << endl;
                        cout << "Codigo: " << livros[i].codigo << endl;
                        cout << "Paginas: " << livros[i].paginas << endl;
                        cout << "Ano de publicacao: " << livros[i].anoPublicacao << endl;
                    }
                }
            }
            else
            {
                cout << "Vetor vazio..." << endl;
            }
            break;
        }
        system("pause");
    } while (opcao != 0);
    

    return 0;
}